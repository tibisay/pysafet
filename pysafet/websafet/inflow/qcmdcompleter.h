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
//
// C++ Interface: qcmdcompleter
//
// Description: 
//
//
// Author: Víctor R. Bravo,,, <victor@victor-laptop>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef QCMDCOMPLETER_H
#define QCMDCOMPLETER_H

#include <QCompleter>
#include "dommodel.h"
/**
	@author Víctor R. Bravo,,, <victor@victor-laptop>
*/
class QCmdCompleter : public QCompleter
{
Q_OBJECT
public:
    QCmdCompleter(QObject *parent = 0);

    ~QCmdCompleter();
    void setDomModel(DomModel* model);
    void reset();
    DomModel* domModel() const { return mymodel;}
    
private:
	DomModel *mymodel;
};

#endif
