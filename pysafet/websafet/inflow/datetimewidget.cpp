/*
* SAFET Sistema Automatizado para la Firma Electr�nica y Estampado de Tiempo
* Copyright (C) 2008 V�ctor Bravo (vbravo@cenditel.gob.ve), Antonio Araujo (aaraujo@cenditel.gob.ve
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
#include "datetimewidget.h"
#include "SafetYAWL.h"
#include <QScriptEngine>
#include <QCoreApplication>

DateTimeWidget::DateTimeWidget(const QString& t, QObject *parent,bool istextparent)
    :CmdWidget(t,parent,istextparent) {
     //datetimeedit = NULL;
     if ( !conf().contains("format")) {
//                SYW  << tr("Falta opci�n de formato (format) para el campo de entrada \"datetime\" llamado \"%1\"")
//                 .arg(caption());
         _format = "time_t";
     }
     else {
         _format = conf()["format"].toString();
     }


}

void DateTimeWidget::setText(const QString &newText) {
//    if ( datetimeedit ) {
//        bool ok;
//        uint myseconds = newText.toInt(&ok);
//        if (ok ) {
//            datetimeedit->setDateTime(QDateTime::fromTime_t(myseconds));
//        }
//    }

}




bool DateTimeWidget::isValid(QString& value) {
    QString strvalid;
    if ( conf().contains("validation"))  {
        strvalid = conf()["validation"].toString().split("::").at(0);
    }
    qDebug(".DateTimeWidget... strvalid:  |%s|", qPrintable(strvalid));
    qDebug(".DateTimeWidget... value:  |%s|", qPrintable(value));
    if (strvalid.isEmpty()) {
        return true;
    }

    qDebug();
    qDebug("**fieldspair.first: |%s|",qPrintable(SafetYAWL::fieldsname));
    qDebug("**fieldspair.second: |%s|",qPrintable(SafetYAWL::fieldsvalue));

    QString localfieldsvalue = SafetYAWL::fieldsvalue;
    if ( localfieldsvalue.endsWith(",")) {
        localfieldsvalue.chop(1);
    }

    QString resultvalue;
    bool result = SafetYAWL::createTableSignDb(SafetYAWL::fieldsname,
                                               localfieldsvalue,
                                               strvalid.arg(value),
                                               resultvalue);
    if (!result) {
        return false;
    }

    qDebug("...resultvalue:%s",qPrintable(resultvalue));
    if ( resultvalue == "1") {
        return true;
    }

    return false;
}

QString DateTimeWidget::html() {
    QString result = "";

    QString mydesc;
    QString readonly;
    QStringList options = conf()["options"].toString().split(",");

    if (conf().contains("desc")) {
        mydesc = conf()["desc"].toString();
        SYD << tr("..........CmdWidget::html...contiene desc:|%1|")
               .arg(mydesc);
    }

    foreach(QString option, options) {
        if (option.startsWith("type::")) {
            _typeinput = option.replace("::","=");
        }

        else if ( option == "readonly") {
            readonly = " readonly=\"readonly\" ";
        }
    }

    QStringList positions;
    QString myposition = "";
    if (conf().contains("position")) {
         myposition = conf()["position"].toString();
         positions = myposition.split(",",QString::SkipEmptyParts);
    }
    setPosition(myposition);

    QString newcaption = caption();

    if (mandatory()) {
        newcaption += "<font color=\"red\">*</font>";

    }

    //QString mypreffix = caption().left(4);

    int posaction = 0;
    QString poscol = "md-4";
    bool removelabel = false;
    bool hasposition = false;
    bool hasloading = false;

    SYD << tr("DateTime contains *POSITION.count():|%1|")
           .arg(positions.count());


    foreach(QString p, positions) {
        hasposition = true;
        if (p == "open") {
            posaction = 1;
        }
        else if (p == "close") {
            posaction = 2;
        }
        else if (p == "open_and_close") {
            posaction = 3;

        }
        else if (p.startsWith("removelabel")) {
                removelabel = true;
        }
        else if (p.startsWith("hasloading")) {
                hasloading = true;
        }
        else if (p.startsWith("md")) {
            poscol = p;
        }
    }

    SYD << tr("DateTime contains *POSITION......postact:|%1|")
           .arg(posaction);

    if (hasposition) {

        QString mycaption = newcaption.replace(QRegExp("_+")," ");
        if ( posaction == 1 || posaction ==  3 ) {
            result += "\n<br/>\n";
            result += "\n<div class=\"row clearfix\">\n";
        }

         result += QString("<div class=\"col-%1 column\">\n%2\n")
                 .arg(poscol)
                 .arg((removelabel?"":QString("<label  for=\"%1\" class=\"col-md-3 control-label\"> %2 </label>\n")
                                   .arg(_caption).arg(mycaption)));

    }
    else {
        QString mycaption = newcaption.replace(QRegExp("_+")," ");
        result +=  "<div class=\"form-group\" >\n";
        result += QString("%1\n")
                .arg((removelabel?"":QString(
                                      "<label for=\"%1\" class=\"col-md-3 control-label\">%2</label>\n")
                                  .arg(_caption)
                                  .arg(mycaption)));

    }


    result += QString("<input %2 name=\"%1\" alt=\"Esto es un campo tipo texto\" id=\"%1\""
                      " %4 "
                     "   size=\"15\"  %3></input>")
            .arg(_caption)
            .arg(_typeinput)
            .arg(readonly)
            .arg(mydesc.isEmpty()?"":QString("placeholder=\"%1\"").arg(mydesc));





    bool isreadonly = conf()["options"].toString().indexOf(QRegExp("(,\\s+)?readonly(,\\s+)?")) >= 0;



    if (!isreadonly)  {
    result += QString(
                "\n\n"
                "<script  type=\"text/javascript\">\n"
                "$(function() {"
                "     $( \"#%1\" ).datepicker( $.datepicker.regional['es']);"
                "});"
                "</script>\n"

//                "\n\n"
//                "<script  type=\"text/javascript\">\n"
//                "$(function() {"
//                "$( \"#%1\" ).datepicker({"
//                "   showOtherMonths: true,"
//                "   selectOtherMonths: true"
//                "});"
//                "$.datepicker.setDefaults($.datepicker.regional['fr']);\n"
//                "});"
//                "</script>\n"

                )
            .arg(caption());
    }

    result += QLatin1String("</div>");


    if (hasposition) {
        if ( posaction == 2 || posaction ==  3 ) {
            result += "\n</div>\n";
        }
    }

    return result;

}

QString DateTimeWidget::htmlForKey(const QString& k, const QString& otherk) {

    QString result;

    QString beforef;
    if (!conf().contains("options")) {

        return result;

    }

    QString myoptions = conf()["options"].toString();
    QStringList mylist = myoptions.split(",");
    SYD << tr("..........................DateTimeWidget::htmlForKey....mylist.count():|%1|").arg(mylist.count());
    foreach(QString myo, mylist) {
        if (myo.startsWith("beforefunction:")) {
            beforef = myo;
            break;
        }
    }
    SYD << tr("..........................**DateTimeWidget....before.............(1)....");
    if (beforef.isEmpty()) {
        return result;
    }

    QStringList myformlist;
    SYD << tr("..........................**DateTimeWidget....before.............(2)...INCLUDE_FORMSTRING:|%1|")
           .arg(conf().contains("formstring"));

    if (conf().contains("formstring")) {
        SYD << tr("..........................**DateTimeWidget....before.............(3)....");
        myformlist = conf()["formstring"].toStringList();
        SYD << tr("..DateTimeWidget::htmlForKey........formstring:|%1|").arg(myformlist.join(";"));
        myformlist.append(QString("keyvalue0:%1").arg(k));
        myformlist.append(QString("keyvalue1:%1").arg(otherk));

        SYD << tr("..DateTimeWidget::htmlForKey........_format:|%1|").arg(_format);

        foreach(QString f, myformlist) {
            QString mypattern = QString("{#%1}").arg(f.split(":").at(0));

            if (f.split(":").count()>1) {
                QString myvalue = f.split(":").at(1);
                SYD << tr("..DateTimeWidget::htmlForKey........_date...1:|%1|").arg(myvalue);
                QDateTime mydate = QDateTime::fromString(myvalue,Safet::DateOnlyFormat);
                if (mydate.isValid() ) {
                    if ( _format == "time_t" ) {
                            myvalue = QString("%1").arg(mydate.toTime_t());
                    }
                }
                else {
                    mydate = QDateTime::fromString(myvalue,Safet::DateFormat);
                    if (mydate.isValid() ) {
                        if ( _format == "time_t" ) {
                                myvalue = QString("%1").arg(mydate.toTime_t());
                        }
                    }

                }
                SYD << tr("..DateTimeWidget::htmlForKey........_date..2:|%1|").arg(myvalue);

                beforef.replace(mypattern,myvalue);
            }
            else {
                beforef.replace(mypattern,"");
            }

        }
        SYD << tr("..........................**DateTimeWidget....before.............(4)....");

    }
    SYD << tr("..........................**DateTimeWidget....before.............(5)....");


       SYD << tr("..........................DateTimeWidget::beforef......:|%1|")
              .arg(beforef);
       result = execBeforeFunction(beforef);
       SYD << tr("..........................**DateTimeWidget....before.............(6).result:|%1|")
              .arg(result);




    SYD << tr("..........................DateTimeWidget::htmlForKey..................\n\n\n");



    return result;
}


QString DateTimeWidget::processInternalFunction(const QString& op) {

    QString result = op;
        QRegExp rx;

        rx.setPattern("bdays\\((\\d+);([\\d\\.\\+\\-\\*/]+)\\)");
        SYD << tr(".....DateTimeWidget::processInternalFunction.....(2)...pattern:|%1|").arg(rx.pattern());

        if (rx.indexIn(op) == -1) {
            return result;

        }
        SYD << tr(".....DateTimeWidget::isInternalFunction.....(3)...");
        bool ok;
        QString myzero = rx.cap(0);
        QString myfirst = rx.cap(1);
        QString mysecond = rx.cap(2);
        SYD << tr(".....DateTimeWidget::processInternalFunction....INTERNAL.myzero:|%1|").arg(myzero);
        SYD << tr(".....DateTimeWidget::processInternalFunction.....myfirst:|%1|").arg(myfirst);
        SYD << tr(".....DateTimeWidget::processInternalFunction.....mysecond:|%1|").arg(mysecond);
        uint myinit = myfirst.toInt(&ok);
        uint mydays = 0;
        int nargs;
        char** argv =NULL;

        QCoreApplication myapp(nargs,argv);
        QScriptEngine myEngine;

        try  {

           QScriptValue myvalue = myEngine.evaluate(mysecond);
                      QString currvalue = myvalue.toString();
           SYD << tr("....DateTimeWidget::processInternalFunction...currvalue:|%1|")
                  .arg(currvalue);
           if ( currvalue == "undefined") {
               SYW << tr("Sintaxis INCORRECTA en la funcion bdays: \"%1\"")
                      .arg(mysecond);
           }
           else {
            mydays = currvalue.toInt(&ok);
           }

        }
        catch(...) {
            SYE << tr("IMPORTANTE:Ocurri� un error (excepcion) al evaluar el script (two)");
        }

        SYD << tr("....DateTimeWidget::processInternalFunction...mydays:|%1|")
               .arg(mydays);

//        uint mydays = mysecond.toInt(&ok);
        QDate mydate = QDateTime::fromTime_t(myinit).date();
        QStringList mylist = SafetYAWL::getConf()["Functions/bdays.*"].split(SafetYAWL::LISTSEPARATORCHARACTER,QString::SkipEmptyParts);

        SYD << tr(".....DateTimeWidget::isInternalFunction.....(5)...mylist.count():|%1|").arg(mylist.count());
        int pos = 0;
        foreach(QString f, mylist) {
            SYD << tr(".....DateTimeWidget::isInternalFunction.....date:|%1|").arg(f);
            Q_ASSERT(pos < mylist.count());
            QDateTime myldate = QDateTime::fromString(f,Safet::DateOnlyFormat);
            if (myldate.isValid()) {
                myldate.setTime(QTime(0,0,0));
                QString newdate = QString("%1").arg(myldate.toTime_t());
                mylist.replace(pos, newdate);
                SYD << tr(".....DateTimeWidget::isInternalFunction.....replace newdate:|%1|").arg(newdate);
            }

            pos++;

        }

        SYD << tr(".....DateTimeWidget::isInternalFunction.....myinit:|%1|").arg(myinit);
        mydays--;
        while (mydays > 0) {
            mydate = mydate.addDays(1);

            QDateTime mytimet;
            mytimet.setDate(mydate);
            QString s = QString("%1").arg(mytimet.toTime_t());

            SYD << tr(".....DateTimeWidget::isInternalFunction.....current....time_t:|%1|").arg(s);
            if (mydate.dayOfWeek() == 6 || mydate.dayOfWeek() == 7 ) {
                if ( mylist.contains(s)) {
                    mydays--;
                }
            }
            else {
                if ( !mylist.contains(s)) {
                    mydays--;
                }

            }

        }


         result.replace(rx,QString("%1").arg(QDateTime(mydate).toTime_t()+3599));
         SYD << tr(".....DateTimeWidget::isInternalFunction.....(6)...result:|%1|").arg(result);

        return result;
}

QString DateTimeWidget::execBeforeFunction(const QString& op) {

    SYD << tr(".....DateTimeWidget::execBeforeFunction.....(1)...op:|%1|").arg(op);
    QString result;
    QString myop = op.mid(QString("beforefunction:").length());


    SYD << tr(".....DateTimeWidget::execBeforeFunction.....(1)...op:|%1|").arg(myop);
    myop = processInternalFunction(myop);

    QString mysql = "SELECT "+ myop;
    QSqlQuery query( SafetYAWL::currentDb );
    query.prepare(  mysql );

    SYD << tr("..........................****DateTimeWidget::execBeforeFunction:|%1|")
           .arg(mysql);
      bool executed = query.exec();
      if (!executed ) {
           SYW << tr(" (before function) no se ejecut� correctamente "
                 "la sentencia SQL: \"%1\"")
                                   .arg(mysql);
           return result;
       }
      bool isnext = query.next();
      if ( !isnext ) {
       SYW << tr(" (before function) No hay registros para ejecutar "
              "la sentencia SQL: \"%1\"").arg(mysql);
       return result;
      }

      result = query.record().value(0).toString();

      if ( _format == "time_t") {
          bool ok;
          result = QDateTime::fromTime_t(result.toInt(&ok)).toString(Safet::DateOnlyFormat);
      }
      SYD << tr(".........DateTimeWidget::execBeforeFunction...result:|%1|")
             .arg(result);

      return result;



}

void DateTimeWidget::buildWidget() {
/*
     //CmdWidget::buildWidget();
     qDebug("...TextEditWidget...buildWidget...");
     //mainLayout = new QHBoxLayout;
     datetimeedit = new QDateTimeEdit();
     if ( conf().contains("options"))  {

         principalWidget = datetimeedit;
         setOptionsProperties(conf()["options"].toString().split(",")); // Colocar las propiedades

     }


     datetimeedit->setGeometry(0,0,230,30);

     datetimeedit->setDateTime(QDateTime::currentDateTime());

     if (isTextParent()) {
         okbutton = new QToolButton;
         okbutton->setGeometry(0,0,25,30);
         okbutton->setIcon(QIcon(":/yes.png"));
         quitbutton = new QToolButton;
         quitbutton->setGeometry(0,0,25,30);
         quitbutton->setText( "X");
     }
     mainLayout = new QHBoxLayout;
     mainLayout->addWidget(datetimeedit);
     QString mytip = tr("Seleccione la fecha del cuadro\nEscriba Ctrl+L para finalizar");
     if ( conf().contains("validation")) {
         QStringList mylist = conf()["validation"].toString().split("::");
         if (mylist.count() > 1 ) {
             QString usertip = mylist.at(1);
             mytip = usertip;
         }
     }
     _usertooltip = mytip;
     datetimeedit->setToolTip(mytip);
     mainLayout->setSpacing( 1 );
     if (isTextParent()) {
         mainLayout->addWidget(quitbutton);
         mainLayout->addWidget(okbutton);

         connect(okbutton, SIGNAL(clicked()), _texteditparent, SLOT(insertAndClose()) );
         connect(quitbutton, SIGNAL(clicked()), _texteditparent, SLOT(cancelAndClose()) );
     }

     setLayout(mainLayout);
*/
}

void DateTimeWidget::setFocus ( Qt::FocusReason reason ) {
/*     qDebug("...TextEditWidget::setFocus....(text)");
     QWidget::setFocus ( reason );
     datetimeedit->setFocus( reason);*/

}



QString DateTimeWidget::text() const {
    QString result;
//    if (datetimeedit != NULL )  {
//        QString pattern = "%1";
//        if ( _format.compare("time_t",Qt::CaseInsensitive) == 0 ) {
//            result = pattern.arg(datetimeedit->dateTime().toTime_t());
//        }
//        else {
//            result = datetimeedit->dateTime().toString(_format);
//        }
//    }
       return result;
 }
