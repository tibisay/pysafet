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
#ifndef DATETIMEWIDGET_H
#define DATETIMEWIDGET_H

// #include <QDateTimeEdit>
#include "cmdwidget.h"

class DateTimeWidget : public CmdWidget {
 Q_OBJECT

    QString _format;

public:
    DateTimeWidget(const QString& t, QObject *parent = 0, bool istextparent = true);
    ~DateTimeWidget() {}
    virtual void buildWidget();

    virtual QString text() const;
     virtual void setFocus ( Qt::FocusReason reason );

     virtual bool isValid(QString& value);
//     QStringList& options() { return _options;}
    virtual QString html();
    QString htmlForKey(const QString &k, const QString& otherk = "");
    QString execBeforeFunction(const QString &op);
    QString processInternalFunction(const QString &op);
public slots:
     virtual void setText(const QString &newText);
 private:
//    QDateTimeEdit* datetimeedit;

};

#endif // DATETIMEWIDGET_H
