/********************************************************************************
** Form generated from reading UI file 'registrarse.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARSE_H
#define UI_REGISTRARSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrarse
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QTextEdit *avisos;
    QFrame *ingresos;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *codigo;
    QLineEdit *identidad;
    QLineEdit *nombre;
    QLineEdit *contrasena;
    QLineEdit *region;
    QPushButton *registrar;
    QPushButton *regresar;

    void setupUi(QMainWindow *registrarse)
    {
        if (registrarse->objectName().isEmpty())
            registrarse->setObjectName(QStringLiteral("registrarse"));
        registrarse->setWindowModality(Qt::WindowModal);
        registrarse->resize(800, 600);
        registrarse->setWindowOpacity(1);
        centralwidget = new QWidget(registrarse);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-50, -30, 911, 691));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/910071-www.wallpapersfan.com.jpg")));
        label->setScaledContents(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(90, 40, 611, 521));
        frame->setStyleSheet(QLatin1String("QFrame#frame{\n"
"	background-color: rgba(100,0,0,0.5);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 611, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(139, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_2->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	color: white;\n"
"    font: bold 32px;\n"
"	background-color: darkred; \n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        avisos = new QTextEdit(frame);
        avisos->setObjectName(QStringLiteral("avisos"));
        avisos->setGeometry(QRect(10, 360, 591, 151));
        avisos->setStyleSheet(QLatin1String("QTextEdit#avisos{\n"
"	background-color: rgba(0,0,0,0.8);\n"
"	color: white;\n"
"}"));
        avisos->setReadOnly(true);
        ingresos = new QFrame(frame);
        ingresos->setObjectName(QStringLiteral("ingresos"));
        ingresos->setGeometry(QRect(30, 50, 551, 301));
        ingresos->setStyleSheet(QLatin1String("QFrame#ingresos{\n"
"	background-color: rgba(0,0,0,0.8);\n"
"}"));
        ingresos->setFrameShape(QFrame::StyledPanel);
        ingresos->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(ingresos);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 0, 101, 41));
        QPalette palette1;
        label_3->setPalette(palette1);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(ingresos);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 60, 101, 31));
        QPalette palette2;
        label_4->setPalette(palette2);
        label_4->setFont(font1);
        label_5 = new QLabel(ingresos);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 120, 101, 31));
        QPalette palette3;
        label_5->setPalette(palette3);
        label_5->setFont(font1);
        label_6 = new QLabel(ingresos);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 121, 31));
        QPalette palette4;
        label_6->setPalette(palette4);
        label_6->setFont(font1);
        label_7 = new QLabel(ingresos);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 240, 101, 31));
        QPalette palette5;
        label_7->setPalette(palette5);
        label_7->setFont(font1);
        codigo = new QLineEdit(ingresos);
        codigo->setObjectName(QStringLiteral("codigo"));
        codigo->setGeometry(QRect(150, 10, 191, 31));
        codigo->setStyleSheet(QLatin1String("QLineEdit#codigo{\n"
"	background-color: rgba(100,0,0,0.7);\n"
"	border-radius: 10px;\n"
"    font: 16px;\n"
"}"));
        codigo->setAlignment(Qt::AlignCenter);
        identidad = new QLineEdit(ingresos);
        identidad->setObjectName(QStringLiteral("identidad"));
        identidad->setGeometry(QRect(150, 60, 191, 31));
        identidad->setStyleSheet(QLatin1String("QLineEdit#identidad{\n"
"	background-color: rgba(100,0,0,0.7);\n"
"	border-radius: 10px;\n"
"    font: 16px;\n"
"}"));
        identidad->setAlignment(Qt::AlignCenter);
        nombre = new QLineEdit(ingresos);
        nombre->setObjectName(QStringLiteral("nombre"));
        nombre->setGeometry(QRect(150, 120, 191, 31));
        nombre->setStyleSheet(QLatin1String("QLineEdit#nombre{\n"
"	background-color: rgba(100,0,0,0.7);\n"
"	border-radius: 10px;\n"
"    font: 16px;\n"
"}"));
        nombre->setAlignment(Qt::AlignCenter);
        contrasena = new QLineEdit(ingresos);
        contrasena->setObjectName(QStringLiteral("contrasena"));
        contrasena->setGeometry(QRect(150, 180, 191, 31));
        contrasena->setStyleSheet(QLatin1String("QLineEdit#contrasena{\n"
"	background-color: rgba(100,0,0,0.7);\n"
"	border-radius: 10px;\n"
"    font: 16px;\n"
"}"));
        contrasena->setEchoMode(QLineEdit::Password);
        contrasena->setAlignment(Qt::AlignCenter);
        region = new QLineEdit(ingresos);
        region->setObjectName(QStringLiteral("region"));
        region->setGeometry(QRect(150, 240, 191, 31));
        region->setStyleSheet(QLatin1String("QLineEdit#region{\n"
"	background-color: rgba(100,0,0,0.7);\n"
"	border-radius: 10px;\n"
"    font: 16px;\n"
"}"));
        region->setAlignment(Qt::AlignCenter);
        registrar = new QPushButton(ingresos);
        registrar->setObjectName(QStringLiteral("registrar"));
        registrar->setGeometry(QRect(380, 100, 151, 41));
        registrar->setCursor(QCursor(Qt::PointingHandCursor));
        registrar->setStyleSheet(QLatin1String("QPushButton#registrar{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0.5);\n"
"   border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton#registrar:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.9);\n"
"}"));
        regresar = new QPushButton(ingresos);
        regresar->setObjectName(QStringLiteral("regresar"));
        regresar->setGeometry(QRect(380, 160, 151, 41));
        regresar->setCursor(QCursor(Qt::PointingHandCursor));
        regresar->setStyleSheet(QLatin1String("QPushButton#regresar{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0.5);\n"
"   border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton#regresar:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.9);\n"
"}"));
        registrarse->setCentralWidget(centralwidget);

        retranslateUi(registrarse);

        QMetaObject::connectSlotsByName(registrarse);
    } // setupUi

    void retranslateUi(QMainWindow *registrarse)
    {
        registrarse->setWindowTitle(QApplication::translate("registrarse", "Registro", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("registrarse", "REGISTRARSE", 0));
        avisos->setHtml(QApplication::translate("registrarse", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Para registrarse es necesario contar con un codigo, este puede ser obtenido poniendose en contacto con el administrador o visitando las oficinas del centro de asistencia m\303\241s cercano.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AVISO: </p>\n"
"<p align=\"justify\""
                        " style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Toda la informaci\303\263n que coloques aqu\303\255 te permitir\303\241 votar en las elecciones, si por algna raz\303\263n tu informaci\303\263n es robada, por favor envia una notificaci\303\263n para tomar las medidas necesarias para evitar el fraude.</p></body></html>", 0));
        label_3->setText(QApplication::translate("registrarse", "Codigo:", 0));
        label_4->setText(QApplication::translate("registrarse", "Identidad:", 0));
        label_5->setText(QApplication::translate("registrarse", "Nombre:", 0));
        label_6->setText(QApplication::translate("registrarse", "Contrase\303\261a:", 0));
        label_7->setText(QApplication::translate("registrarse", "Region:", 0));
        registrar->setText(QApplication::translate("registrarse", "Registrar", 0));
        regresar->setText(QApplication::translate("registrarse", "Regresar", 0));
    } // retranslateUi

};

namespace Ui {
    class registrarse: public Ui_registrarse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARSE_H
