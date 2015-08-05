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
#include "numberwidget.h"
#include "SafetYAWL.h"
#include "mainwindow.h"

NumberWidget::NumberWidget(const QString& t, QObject *parent, bool istextparent )
    :CmdWidget(t,parent, istextparent) {



}

void NumberWidget::setText(const QString &newText) {


}

QString NumberWidget::htmlForKey(const QString& k, const QString& otherk) {

    html();

}



QString NumberWidget::html() {
    QString result;
//    QString mypreffix = caption().left(4);
    QString wprops;

    QString mycaption = caption();
    mycaption.replace("_"," ");


    QString mydesc;

    if (conf().contains("desc")) {
        mydesc = conf()["desc"].toString();
    }


    wprops = conf()["options"].toString().trimmed();

    QStringList positions;
    QString myposition = "";
    if (conf().contains("position")) {
         myposition = conf()["position"].toString();
        positions = myposition.split(",",QString::SkipEmptyParts);
    }
    setPosition(myposition);




    result = "";


    int posaction = 0;
    QString poscol = "md-4";
    bool removelabel = false;

    foreach(QString p, positions) {
        if (p == "open") {
            posaction = 1;
        }
        else if (p == "close") {
            posaction = 2;
        }
        else if (p == "open_and_close") {
            posaction = 3;

        }
        else if (p.startsWith("removelabel")) {
                removelabel = true;
        }
        else if (p.startsWith("md")) {
            poscol = p;
        }
    }


    if (posaction == 1 || posaction == 3) {
        result += "\n<div class=\"row clearfix\">\n";
    }


    QString myinput = QString("<input type=\"text\" class=\"form-control\" id=\"%1\" name=\"%1\" %2>"
                              "<div class=\"input-group-addon\">.00</div>")
            .arg(caption())
            .arg(mydesc.isEmpty()?"":QString("placeholder=\"%1\"").arg(mydesc));

    if (!wprops.isEmpty()) {
        wprops.replace("::",":");

        myinput = QString(

                    "<link rel=\"stylesheet\" href=\"/static/jqwidgets/styles/jqx.base.css\" type=\"text/css\" />\n"
                   "<script type=\"text/javascript\" src=\"/static/jqwidgets/jqxcore.js\"></script>\n"
                   "<script type=\"text/javascript\" src=\"/static/jqwidgets/jqxtooltip.js\"></script>\n"
                    "<script type=\"text/javascript\" src=\"/static/jqwidgets/jqxbuttons.js\"></script>\n"
                   "\n<script type=\"text/javascript\" src=\"/static/jqwidgets/jqxnumberinput.js\"></script>\n"
                    );

        myinput +=  QString(""
                              "\n<script  type=\"text/javascript\">\n"
                            "$(document).ready(function() {\n"
                              "  $(\"#%1_div\").jqxNumberInput({ %2 });\n"
//                              "   myvalue = document.getElementById(\"%1\").value;\n"
//                              "   console.log(\"myvalue number 1:\" + myvalue);\n"
//                              "   $(\"#%1_div\").jqxNumberInput('val',myvalue);\n"

                              "  $(\"#%1_div\").on('change', function (event) {\n"
                                                 "  var myvalue = event.args.value;\n"
                                                 "  console.log(\"myvalue number 2:\" + myvalue);\n"
                                                 "  document.getElementById(\"%1\").value = myvalue;\n"
                                                 "});\n"

                              "});"

                              "</script>\n"

                              "")
                    .arg(caption())
                    .arg(wprops);

        myinput += QString(
                        "\n<div style='margin-top: 3px;' id=\"%1_div\""
                                "></div>\n\n"
                        "<input type=\"hidden\" class=\"form-control\" id=\"%1\" name=\"%1\" >\n"
                                 )
                       .arg(caption());

//        myinput = QString("<input type=\"text\" class=\"form-control\" id=\"%1\" name=\"%1\" %2>")
//                    .arg(caption())
//                    .arg(mydesc.isEmpty()?"":QString("placeholder=\"%1\"").arg(mydesc));

    }

    if (positions.count() == 0 ) {                
            result += QString(""
                   "<br/>\n"
                  "<div id=\"panel_%1\" name=\"panel_%1\" class=\"form-group\">"
                      "%2"
                      "<div class=\"input-group\">"
                        "<div class=\"input-group-addon\">%4</div>"
                        "%3"
                        "<div class=\"input-group-addon\">.00</div>"
                      "</div>"
                    "</div>"
                  )
                    .arg(caption())
                    .arg(removelabel?"":QString("<label class=\"sr-only\" for=\"%1\">%1  </label>").arg(mycaption))
                    .arg(myinput)
                    .arg(mycaption);
    }
    else {
            result += QString(""
                              "<br/>\n"
                  "<div id=\"panel_%1\" name=\"panel_%1\" class=\"col-%3 column \">\n"
                  "%2"
                  "<div class=\"input-group\">"
                    "<div class=\"input-group-addon\"> %5 </div>\n"
                    "%4"
                  "</div>\n"
                "</div>\n"
              )
                    .arg(caption())
                    .arg( removelabel?"":QString("<label class=\"sr-only\" for=\"%1\">%1  </label>").arg(mycaption) )
                    .arg(poscol)
                    .arg(myinput).arg(mycaption).arg(mycaption);


    }

    if (posaction == 2 || posaction ==  3) {
        result += "</div>\n";
    }


    SYD << tr("...........NumberWidget::html........changefor:|%1|")
           .arg(conf()["changefor"].toString());
    foreach(QString k, conf().keys()) {
        SYD << tr("...........NumberWidget::html........k:|%1|")
               .arg(conf()[k].toString());

    }



    return result;
}


void NumberWidget::buildWidget() {
   CmdWidget::buildWidget();

}

void NumberWidget::setFocus ( Qt::FocusReason reason ) {
/*     qDebug("...NumberWidget::setFocus....(text)");
     QWidget::setFocus ( reason );
     spinboxedit->setFocus( reason);*/

}
bool NumberWidget::isValid(QString& value) {
    bool okint, okfloat;
    QString newvalue = value;

    //newvalue.replace("Bs.","");

    newvalue.replace(".","");
    newvalue.replace(",",".");


    SYD << tr("....NumberWidget...validating...NUMBERWIDGET..VALIDMONEY.newvalue:|%1|")
           .arg(newvalue);

    int vi = newvalue.toInt(&okint);
    float vf = newvalue.toDouble(&okfloat);

    return okint || okfloat;

}


QString NumberWidget::text() const {
    QString result;
       return result;
 }
