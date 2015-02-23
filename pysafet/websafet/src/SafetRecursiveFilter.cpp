/*
* SAFET Sistema Automatizado para la Firma Electr�nica y Estampado de Tiempo
* Copyright (C) 2008 Víctor Bravo (vbravo@cenditel.gob.ve), Antonio Araujo (aaraujo@cenditel.gob.ve
*
* CENDITEL Fundacion Centro Nacional de Desarrollo e Investigaci�n en Tecnologías Libres
*
* Este programa es software libre; Usted puede usarlo bajo los t�rminos de la licencia de
* software GPL versi�n 2.0 de la Free Software Foundation.
*
* Este programa se distribuye con la esperanza de que sea �til, pero SI NINGUNA GARANT�A;
* tampoco las impl�citas garant�as de MERCANTILIDAD o ADECUACIÓN A UN PROP�SITO PARTICULAR.
* Consulte la licencia GPL para m�s detalles. Usted debe recibir una copia de la GPL junto
* con este programa; si no, escriba a la Free Software Foundation Inc. 51 Franklin Street,
* 5� Piso, Boston, MA 02110-1301, USA.
*
*/

#include "SafetYAWL.h"
#include "SafetRecursiveFilter.h"
#include "SafetTask.h"
#include "SafetConnection.h"
#include "SafetSQLParser.h"
#include "SafetWorkflow.h"


SafetRecursivefilter::SafetRecursivefilter() {

  _countoptions = 0;
  filtertask = NULL;
 _filterType = None;
 wasconnsdeleted = false;
 _onlyfathers = "no";
   SYD   << tr(".........SafetRecursivefilter::SafetRecursivefilter...........ENTERING...(1):..");

}


void SafetRecursivefilter::setFiltertask(SafetTask* t) {
     Q_ASSERT( filtertask == NULL );
     Q_CHECK_PTR( t );
     filtertask = t;
     SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );
     localparser.setWorkflow(wf);
}


QList<SafetTask*> SafetRecursivefilter::createTasks(const QString& prefix) {

     SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );
     Q_CHECK_PTR ( wf );



     generateRecursiveTask();
     foreach(SafetTask *t, listnewtasks) {
          SYD << tr("TASKADDING....id:|%1|").arg(t->id());
          wf->addTask(t);
     }
     return listnewtasks;
}

void SafetRecursivefilter::linkTasks(SafetTask* tasksource, SafetTask* tasktarget,
                                     const QString& sql, const QString& opts) {

     Q_CHECK_PTR ( filtertask );

     SafetTask *parentTask = NULL;

     if ( tasksource == NULL) {
         parentTask = filtertask;
     }
     else {
         parentTask = tasksource;
     }
     QList<SafetPort*> ports = parentTask->getPorts();
     if ( ports.count() ==  0 ) {
         SYE
                 << tr("El n�mero de puertos de la tarea con id\"%1\" es igual a cero(0)")
                 .arg(parentTask->id());
            return;

     }
     SafetPort *myport = ports.at(0);

     // ** Para la  conexion
    SafetConnection *myconnection = new SafetConnection();
    Q_CHECK_PTR( myconnection );
    myconnection->setQuery( sql );
    SYD
        << tr("..........SafetRecursivefilter::linkTasks...RECURSIVE_QUERY:|%1|")
           .arg(myconnection->query());
    myconnection->setOptions( opts );
    SYD
        << tr("..........SafetRecursivefilter::linkTasks...RECURSIVE_QUERY:|%1|")
           .arg(myconnection->options());
    myconnection->setTokenlink(tokenlink());
    myconnection->setParent( qobject_cast<SafetXmlObject*>(myport));

        SYD
            << tr("FiltroRecursivo(RecursiveFilter): Enlazando Tarea con id:|%2| a Tarea con id: |%3| con consulta: \"%1\""
                  " y opciones: \"%4\"")
            .arg(sql)
            .arg(tasksource==NULL?"NULL":tasksource->id())
            .arg(tasktarget==NULL?"NULL":tasktarget->id())
            .arg(opts);
    if ( tasktarget == NULL ) {
         myconnection->setSource( source() );
     }
     else {
         myconnection->setSource( tasktarget->id() );
     }


     if ( !wasconnsdeleted ) {
         myport->clearConn();
         wasconnsdeleted = true;
     }



     bool adding = true;
     foreach(SafetConnection *currconn, myport->getConnectionlist()) {

         if (currconn->source() == myconnection->source()) {
             adding = false;
             break;
         }
     }

    if ( adding )  {
        myport->addConnection( myconnection);

    }


        if ( myport->getConnectionlist().count() > 1 ) {
            myport->setPattern("or");
        }



        SYD
            << tr("FiltroRecursivo(Recursivefilter): Agregando conexion a la tarea\"%1\"" )
            .arg(parentTask->id());

}




SafetTask* SafetRecursivefilter::createTask(const QString& title, const QString& namefield,
                                            const QString& info, SafetTask *&parenttask) {
    Q_CHECK_PTR ( filtertask );
    Q_CHECK_PTR ( filtertask->parent() );

    SafetVariable *v = NULL;
    if ( filtertask->getVariables().count() > 0 ) {
        v = qobject_cast<SafetVariable*>( filtertask->getVariables().at(0) );
    }
    foreach(SafetTask *currtask, listnewtasks) {
        QString currid = namefield+"_"+title;
        if (currtask->id() == currid) {
            SYW << tr("...........SafetRecursivefilter::createTask...La tarea \"%1\" ya existe")
                   .arg(currid);
            parenttask = currtask;
            return NULL;
        }

    }

    SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );
    Q_CHECK_PTR ( wf );
    SafetTask *mytask = new SafetTask();
    mytask->setParent( qobject_cast<SafetXmlObject*> (wf) );
    Q_CHECK_PTR( mytask );    
    mytask->setId(namefield+"_"+title);
    QString newinfo = info;
    newinfo.replace("�","a");
    newinfo.replace("�","e");
    newinfo.replace("�","i");
    newinfo.replace("�","o");
    newinfo.replace("�","u");
    newinfo.replace("�","n");
    mytask->setTitle(newinfo);
    mytask->setReport( report() );
    //** Para el puerto
    SafetPort* myport = new SafetPort();
    Q_CHECK_PTR( myport );
    myport->setSide("forward");
    myport->setType("split");
    myport->setQuery("");
    myport->setPattern("none");

    SafetConnection *myconnection = new SafetConnection();
    Q_CHECK_PTR( myconnection );
    myconnection->setQuery( "" );
    myconnection->setOptions( "true");
    myconnection->setTokenlink("");
    myconnection->setParent( qobject_cast<SafetXmlObject*>(myport));
    myconnection->setSource("final");
    myport->addConnection(myconnection);

    mytask->addPort( myport );
    //** Para la variable
    SafetVariable* myvariable = new SafetVariable();
    Q_CHECK_PTR( myvariable );
    myvariable->setId("_"+title+"_");
    SYA
            << tr("Agregando la tarea de filtro recursivo: \"%1\"").arg(mytask->id());
    if ( v != NULL ) {
        myvariable->setDocumentsource( v->documentsource() );
        myvariable->setTokenlink( v->tokenlink() );
    }
    mytask->addVariable( myvariable );
    SYD
            << tr("Agregando a la variable de filtro recursivo: \"%2\" la tarea \"%1\"").arg(mytask->id()).arg(myvariable->id());

    listnewtasks.push_back( mytask);
    parenttask = mytask;
    return mytask;

}

QPair<QString,QString> SafetRecursivefilter::getFieldsFromQuery(const QString& q, QString& basicsql) {
    QPair<QString,QString> result;
    localparser.setStr(q.toUtf8());

    SYD   << tr(".........SafetRecursivefilter::SafetRecursivefilter....q:|%1|").arg(q);
    if (!localparser.parse()) {
        return result;
    }

    SYD   << tr(".........SafetRecursivefilter::SafetRecursivefilter....q(2):|%1|").arg(q);
    SYD   << tr(".........SafetRecursivefilter::SafetRecursivefilter....result_first:|%1|").arg(result.first);

    Q_ASSERT( localparser.getFields().count() > 0 );

    SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );

    QString whereexp = localparser.getWhereClause();

    QString basicexp = localparser.dropWhereClauses(false);

    QString link = wf->processTokenlink(tokenlink());
    result.first = localparser.getFields().at(0);
    result.second = q;
    whereexp = whereexp.replace("{{"+result.first+"}}","%1");
    result.second = basicexp+" "+link+" "+ whereexp;
    basicsql = "SELECT "+localparser.getFields().at(0)+ " FROM " + localparser.getTablesource()
               /*+ " " + link*/;

    SYD   << tr(".........SafetRecursivefilter::SafetRecursivefilter....basicsql:|%1|").arg(basicsql);
    return result;

}




void SafetRecursivefilter::generateRecursiveTask() {


     // Enlace al flujo de trabajo

     QString basicsql; // Para el campo query de los filtro de las tareas generadas
     QPair<QString,QString> fields = getFieldsFromQuery(filter(), basicsql);

     SYD << tr("........SafetRecursivefilter::generateRecursiveTask..........(1)...fields.second:|%1|")
            .arg(fields.second);

     QString oldsql, newsql = fields.second.arg(initial());
     SafetTask* newtask = NULL, *parenttask = NULL;
     QString namefield = fields.first;
     QStack< QPair<QString, QPair<SafetTask*,SafetTask*> > > mystack;
     parenttask  = newtask;
     QPair<QString, QPair<SafetTask*,SafetTask*> >  curvalue;


     SYD << tr("........SafetRecursivefilter::generateRecursiveTask..........(1)...newsql:|%1|")
            .arg(newsql);

    while ( true ) {

        QSqlQuery localquery(SafetYAWL::currentDb);

        localquery.prepare(  newsql);
        bool executed = localquery.exec();

        if ( !executed ) {
           SYE
                    << tr("La Sentencia SQL :\n\" %1 \" \nes incorrecta."
                          "Ejecute la sentencia en un cliente del gestor de BD,"
                          "y compruebe resultados"
                       "<br/><br/><b>Detalle:</b> %2")
                    .arg(newsql)
                    .arg(localquery.lastError().databaseText());

            return;

        }


        oldsql = newsql;

        if (localquery.size() <= 0 ) {
            if ( !mystack.isEmpty()) {
                linkTasks(parenttask,NULL,"true","");
                curvalue  = mystack.pop();
                QString d = curvalue.first.split(";").at(0);
                newsql = fields.second.arg(d);
                SYD << tr("........SafetRecursivefilter::generateRecursiveTask..........(continue)...newsql:|%1|")
                       .arg(newsql);
                parenttask = curvalue.second.first;                
                SYD << tr("............RecursiveFilter......(3)SETTING parenttask:|%1|")
                       .arg(parenttask==NULL?"NULL":parenttask->id());
                if (parenttask == NULL ) {
                    SYD << tr("........SafetRecursivefilter::generateRecursiveTask....parenttask is NULL");
                    parenttask = curvalue.second.second;
                    SYD << tr("............RecursiveFilter......(4)SETTING parenttask:|%1|")
                           .arg(parenttask==NULL?"NULL":parenttask->id());

                }
                QString info = tr("info");
                if (curvalue.first.split(";").count() > 1 ) {
                    info = curvalue.first.split(";").at(1);
                }
                SYD << tr("........SafetRecursivefilter::111111....CREATETASK:d:|%1|...name:|%2|...info:|%3|")
                       .arg(d).arg(namefield).arg(info);
                SafetTask* nextparenttask = NULL;

                newtask = createTask(d,namefield,info,nextparenttask);
                if (newtask != NULL ) {
                    SYD << tr("........SafetRecursivefilter::generateRecursiveTask...<=*0.SI_ENLAZO");
                    linkTasks(parenttask,newtask, basicsql,d);                    
                }
                parenttask = nextparenttask;
                SYD << tr("............RecursiveFilter......(2)SETTING parenttask:|%1|")
                       .arg(parenttask==NULL?"NULL":parenttask->id());


                SYD << tr("");
                SYD << tr("");
                continue;
            }
            else {
                linkTasks(parenttask,NULL,"true","");
                break;
            }


        }


        int howchildren = 0;
        while( localquery.next() ) {
            QString d = localquery.record().value(namefield).toString();
            QString info = tr("info1");
            if ( localquery.record().count() > 1) {
                info = localquery.record().value(1).toString();
                info.replace(" ","_");
            }
            if (onlyfathers().compare("yes") == 0 ) {
                QString mysql = fields.second.arg(d);
                if (!hasChildren(mysql) ) {
                   continue;
                }
            }
            howchildren++;
            SYD << tr("........SafetRecursivefilter::00000....CREATETASK:d:|%1|...name:|%2|...info:|%3|")
                   .arg(d).arg(namefield).arg(info);

            SafetTask* nextparenttask = NULL;
            newtask = createTask(d,namefield,info,nextparenttask);


            linkTasks(parenttask,newtask, basicsql,d);
            curvalue.first = d +";"+info;
            curvalue.second.first = parenttask;
            curvalue.second.second = newtask;
            SYD << tr("........SafetRecursivefilter::generateRecursiveTask....curvalue:|%1|")
                   .arg(curvalue.first);
            mystack.push(curvalue);
        }
        if ( howchildren == 0 ) {
            linkTasks(parenttask,NULL,"true","");
        }

        if ( mystack.isEmpty() ) {
            break;
        }
        curvalue = mystack.pop();
        SYD << tr("............RecursiveFilter......fields.second:|%1|")
               .arg(fields.second);
        newsql = fields.second.arg(curvalue.first.split(";").at(0));
        parenttask = curvalue.second.second;
        SYD << tr("............RecursiveFilter......(1)SETTING parenttask:|%1|")
               .arg(parenttask==NULL?"NULL":parenttask->id());

        newtask= curvalue.second.first;
        SYD << tr("");
        SYD << tr("");
        SYD << tr("");
        SYD << tr("");

    }
     return;

}

bool SafetRecursivefilter::hasChildren(const QString& sql) {
    QSqlQuery localquery(SafetYAWL::currentDb);
    localquery.prepare(  sql);
    bool executed = localquery.exec();

    if ( !executed ) {
        return false;

    }

    if (localquery.size() <= 0 ) {
        return false;
    }
    return true;


}

