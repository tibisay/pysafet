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
#ifndef PRINCIPALFRAME_H
#define PRINCIPALFRAME_H

#include <QFrame>
#include "ui_principal.h"

class PrincipalFrame : public QFrame,
 private Ui_Principal
{

     Q_OBJECT

public:
    PrincipalFrame(QWidget *parent = 0, Qt::WindowFlags f = 0);
    ~PrincipalFrame();
    QPushButton *getToInputButton() { return toInputButton; }
    QPushButton *getToConsoleButton() { return toConsoleButton; }
    QPushButton *getToSignButton() { return toSignButton; }
    QPushButton *getToExitButton() { return toExitButton; }
    QPushButton *getToSettingsButton() { return toSettingsButton; }
    QPushButton *getToHelpButton() { return toHelpButton; }





};

#endif // PRINCIPALFRAME_H
