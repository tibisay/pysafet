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

#ifndef GRAPHICSWORKFLOW_H
#define GRAPHICSWORKFLOW_H

#include <QGraphicsView>
#include <QGraphicsSvgItem>
#include <QKeyEvent>
#include <math.h>
#include "sceneworkflow.h"
#include "graphicssvgitemlive.h"


class MainWindow;

class GraphicsSvgItemLive;
class GraphicsWorkflow: public QGraphicsView
{
     Q_OBJECT
     QGraphicsSvgItem *_centralWidget;

     QList<QGraphicsItem*> _items;

     MainWindow* mw;
public:
     enum ItemType { SVGITEM, TEXTITEM };

    GraphicsWorkflow(QWidget * parent = 0 );

//    void itemMoved();

      void addItem(const QString& name, const QMap<int,QString>& cmds, ItemType t = SVGITEM );
      QGraphicsSvgItem* addAllSvgItems( const QString& name,  const QMap<int,QString>& cmds);
      QMap<QString,QPair<QPointF,QString> > getXmlIds(const QString& xml);
      void removeItems();
      bool find(const QString& name);
      GraphicsSvgItemLive* redrawItem(const QString& name, GraphicsSvgItemLive* item = 0);
      GraphicsSvgItemLive* searchItemForCmds(const QMap<int,QString>& cmds);
      QPointF topLeftFromPoints(const QString& p);
      QPointF topLeftFromEllipse(const QString& p);
      QMap<QString,QString>  extractSvgElements(const QString& xmltext);
      void doGroup();
      void unGroup();
      void initialize();
      void deleteCurrentWorkflow();
      QGraphicsItemGroup* currentGroup() { return _currentgroup;}

      QString localeNormalize(const QString& s);
      //** Agregar los textos de fecha y titulo a los graficos

      QGraphicsTextItem* addInfoGraphDateText(const QMap<QString,QPair<QPointF,QString> >& ids);

      QGraphicsTextItem* addInfoGraphText(const QMap<QString,QPair<QPointF,QString> >& ids,
                                          const QString& title, QGraphicsTextItem*& titleitem);
      //** Agregar los textos de fecha y titulo a los graficos

      QGraphicsItemGroup* _currentgroup;

      QList<QGraphicsItemGroup*> _listgroup;
protected:
    void keyPressEvent(QKeyEvent *event);
//    void timerEvent(QTimerEvent *event);
    void wheelEvent(QWheelEvent *event);
//    void drawBackground(QPainter *painter, const QRectF &rect);

    void scaleView(qreal scaleFactor);

private:
    int timerId;



//    Node *centerNode;
};

#endif // GRAPHICSWORKFLOW_H
