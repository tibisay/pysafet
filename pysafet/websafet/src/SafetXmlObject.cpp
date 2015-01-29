/*
* SAFET Sistema Automatizado para la Firma Electrónica y Estampado de Tiempo
* Copyright (C) 2008 Víctor Bravo (vbravo@cenditel.gob.ve), Antonio Araujo (aaraujo@cenditel.gob.ve
*     
* CENDITEL Fundacion Centro Nacional de Desarrollo e Investigación en Tecnologías Libres 
*  
* Este programa es software libre; Usted puede usarlo bajo los términos de la licencia de 
* software GPL versión 2.0 de la Free Software Foundation. 
* 
* Este programa se distribuye con la esperanza de que sea útil, pero SI NINGUNA GARANTÍA;
* tampoco las implícitas garantías de MERCANTILIDAD o ADECUACIÓN A UN PROPÓSITO PARTICULAR.
* Consulte la licencia GPL para más detalles. Usted debe recibir una copia de la GPL junto 
* con este programa; si no, escriba a la Free Software Foundation Inc. 51 Franklin Street,
* 5º Piso, Boston, MA 02110-1301, USA.
*
*/

#include "SafetXmlObject.h"


SafetXmlObject::SafetXmlObject()
:QObject() {
   _parent = NULL;
}


SafetXmlObject::SafetXmlObject(const SafetXmlObject&): QObject() {

}



bool SafetXmlObject::syncAttributes(const QDomElement& e) {
    Q_ASSERT(!e.isNull());
   	QDomNamedNodeMap attrs = e.attributes ();
   	for(int i = 0; i < attrs.count(); i++) {
   		 int index = metaObject()->indexOfProperty( qPrintable(attrs.item(i).nodeName()) );
   		 if ( index != -1 ) {
             metaObject()->property(index).write(this,
                     attrs.item(i).nodeValue() );
   		 }
   	 }
    return true;    
}

void  SafetXmlObject::addChild(SafetXmlObject* o) {
	if (o == NULL ) return;
	o->SafetXmlObject::setParent( this );
	
}

SafetXmlObject* SafetXmlObject::parent() const {
	return _parent;
}

void SafetXmlObject::setParent(SafetXmlObject* p) {
	_parent = p;
}
