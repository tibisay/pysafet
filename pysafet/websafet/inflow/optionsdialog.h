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
#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include <QDialog>
#include "ui_inflowopciones.h"


class OptionsDialog : public QDialog
                     , private Ui::OptionDialog
{

     Q_OBJECT
     QMap<QString,QMap<QString,QWidget*> > widgetmap;
public:
    OptionsDialog(QWidget *parent = 0);
    ~OptionsDialog();
    QListWidget* plugList() { return listWidget; }
    QWidget* getVariantWidget(const QVariant& v, const QString& message = "");
public slots:
    void doLoadWidget();
    void addWidget();
    void delWidget();
    void doSaveConfs();
    void doAccept();

    void addTab(const QString&);
private:
    void buildTab();

};

#endif // OPTIONSDIALOG_H
