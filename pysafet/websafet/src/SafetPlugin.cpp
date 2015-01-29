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
#include "SafetPlugin.h"

SafetPlugin::SafetPlugin()
{
}


QString SafetPlugin::conf() const {
     QString newname;
     QString name, allname = QString(metaObject()->className());
     int n = allname.indexOf("Plugin");
     Q_ASSERT_X( n >= 0, "Plugins", qPrintable(tr("El Plugins llamado \"%1\" no finaliza con la palabra \"Plugin\"").arg(allname)));
     name = allname.mid(0,n);
     Q_ASSERT_X( n > 1, "Plugins", qPrintable(tr("El nombre del complemento \"%1\" debe tener una longitud mayor o igual a dos (2)").arg(name)));
     name = name.mid(0,1).toUpper()+name.mid(1,name.length()-1);

     newname = QString("Plugins") + QString(".") + name;
     newname = newname + "/" + newname.toLower() + ".";
     return newname;

}
