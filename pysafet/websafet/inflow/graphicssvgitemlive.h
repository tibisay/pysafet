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

#ifndef GRAPHICSSVGITEMLIVE_H
#define GRAPHICSSVGITEMLIVE_H

#include <QGraphicsSvgItem>
#include "mainwindow.h"
#include "graphicsworkflow.h"
#include "sceneworkflow.h"
#include "threadconsole.h"

class GraphicsWorkflow;
class MainWindow;
class ThreadConsole;

class GraphicsSvgItemLive : public QObject {
     Q_OBJECT

     QString _filename;
     QGraphicsSvgItem* privateItem;
     QGraphicsSvgItem* rootItem;

public:

     GraphicsSvgItemLive ( QGraphicsItem * parent = 0  );
     GraphicsSvgItemLive ( QString& svgtext, QGraphicsItem * parent = 0 );
     ~GraphicsSvgItemLive();
     GraphicsWorkflow *graphWf();
     MainWindow *mainWindow();
     void setMw(MainWindow* m);
     QGraphicsSvgItem* getItem() { return privateItem; }
     /**
       * \brief Carga un elemento SVG desde un archivo, busca el elemento y lo dibuja en el item
       * \param id Nombre del identificador del elemento SVG
       * \param filename Nombre del archivo con extesion svg
       */
     void genSvgItem(QString &svgtext);
     QGraphicsSvgItem* loadSvgItem();
     QString fileName() const { return _filename;}
     void setFileName(const QString& f) { _filename = f;}
     void setCommands(const QMap<int,QString>& cmds);
     QMap<int,QString>& commands();
     /*
      * \brief Devuelve el hilo para la consola
      * \return Objeto del hilo
      */
     //ThreadConsole* threadConsole() { return thConsole;}

     //void start(QThread::Priority p);
protected:
    int value;
    //ThreadConsole* thConsole;
};

#endif // GRAPHICSSVGITEMLIVE_H
