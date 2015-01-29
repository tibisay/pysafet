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

#ifndef LISTVARWIDGET_H
#define LISTVARWIDGET_H

#include "cmdwidget.h"
#include "SafetYAWL.h"

class ListWidget : public CmdWidget
{
 Q_OBJECT

public:
    enum Type { ListTable, VariableSafet, AutofilterSafet, ListLiteral, Flow, RecursivefilterSafet,
            ConffileSafet};
private:
    Type _type;
    QStringList _itemvaluelist,_itemrealvaluelist;
public:
     Type type() { return _type; }
     void setType(ListWidget::Type t) { _type = t; }
public:

    ListWidget(const QString& s, ListWidget::Type t = ListWidget::VariableSafet,
               QWidget *parent = 0,
               bool istextparent = true);
    ~ListWidget();
    virtual void setFocus ( Qt::FocusReason reason );
    virtual void buildWidget();
    void buildButtonWidget(const QStringList& l);

    virtual bool isValid(QString& value);
public slots:
    virtual QString text() const;
    virtual void setText(const QString &newText);
    void updateCombo();
    void updateComboVariableSafet(bool inwidget = true);
    void updateComboAutofilterSafet(bool inwidget = true);
    void updateComboRecursivefilterSafet(bool inwidget = true);
    void updateComboListTable(bool inwidget = true);
    void updateComboListLiteral();
    void updateVarGlobal(const QString& value);
    void updateComboFlow(bool inwidget = true);
    void updateComboConffileSafet(bool inwidget = true);
    void viewdoc();
    virtual void insertAndClose();
    QString getRealValue(const QString& s);
    QString getVarValue(const QString& s);
    QStringList& itemsValueList() { return _itemvaluelist;}
    QStringList& itemsRealValueList() { return _itemrealvaluelist;}
protected:
//    QListWidget* varboxlist;
//    QPushButton* signbutton;
//    QToolButton* viewdocbutton;
    QStringList infos;
    QMap<QString,QString>  realvalues;
    QMap<QString,QString>  varvalues;
    void generateLiterals(const QString& s, bool inwidget = true);

};

#endif // LISTVARWIDGET_H

