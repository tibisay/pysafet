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
#include "sceneworkflow.h"
#include <QGraphicsSceneMouseEvent>

SceneWorkflow::SceneWorkflow( QObject *parent)
: QGraphicsScene(parent) {

     setSceneRect(0, 0, 800, 600);
}


void SceneWorkflow::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent) {
    if (mouseEvent->button() != Qt::LeftButton)
        return;

    QGraphicsScene::mousePressEvent(mouseEvent);
}

void SceneWorkflow::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent) {
        QGraphicsScene::mouseMoveEvent(mouseEvent);
}


void SceneWorkflow::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent) {

    QGraphicsScene::mouseReleaseEvent(mouseEvent);
}

