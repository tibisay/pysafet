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
#ifndef NUMBERWIDGET_H
#define NUMBERWIDGET_H

// #include <QSpinBox>
// #include <QDoubleSpinBox>
#include "cmdwidget.h"

class NumberWidget : public CmdWidget {
 Q_OBJECT

    QString _format;

public:
    NumberWidget(const QString& t, QObject *parent = 0, bool istextparent = true);
    ~NumberWidget() {}
    virtual void buildWidget();

    virtual QString text() const;
     virtual void setFocus ( Qt::FocusReason reason );
//     virtual QRect getGeoParams() const;
//     QStringList& options() { return _options;}
    virtual bool isValid(QString& value);
    virtual QString html();
    virtual QString htmlForKey(const QString &k, const QString &otherk = "");
public slots:
     virtual void setText(const QString &newText);
 private:



};

#endif // NUMBERWIDGET_H
