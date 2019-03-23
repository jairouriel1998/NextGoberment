/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *ir_presidente;
    QPushButton *ir_diputados;
    QPushButton *ir_alcaldes;
    QPushButton *ir_resultados;
    QPushButton *informacion;
    QLabel *label_12;
    QFrame *frame_2;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *s_identidad;
    QLineEdit *s_nombre;
    QLineEdit *s_departamento;
    QLineEdit *s_municipio;
    QPushButton *salir;

    void setupUi(QMainWindow *principal)
    {
        if (principal->objectName().isEmpty())
            principal->setObjectName(QStringLiteral("principal"));
        principal->setWindowModality(Qt::ApplicationModal);
        principal->resize(800, 482);
        centralwidget = new QWidget(principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 811, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/nazi_wallpaper_red_glow_by_elleven11-d4fl7bn.jpg")));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 70, 231, 341));
        frame->setStyleSheet(QLatin1String("QFrame#frame{\n"
"	background-color: rgba(100,0,0,0.2);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 231, 41));
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	color: black;\n"
"	font: bold 18px;\n"
"   background-color: darkred;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 80, 231, 20));
        label_8->setStyleSheet(QLatin1String("color: darkred;\n"
"font: bold 18px;"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 140, 231, 20));
        label_9->setStyleSheet(QLatin1String("color: darkred;\n"
"font: bold 18px;"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 200, 231, 20));
        label_10->setStyleSheet(QLatin1String("color: darkred;\n"
"font: bold 18px;"));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 260, 231, 20));
        label_11->setStyleSheet(QLatin1String("color: darkred;\n"
"font: bold 18px;"));
        ir_presidente = new QPushButton(frame);
        ir_presidente->setObjectName(QStringLiteral("ir_presidente"));
        ir_presidente->setGeometry(QRect(0, 50, 231, 41));
        ir_presidente->setCursor(QCursor(Qt::PointingHandCursor));
        ir_presidente->setStyleSheet(QLatin1String("QPushButton#ir_presidente{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#ir_presidente:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        ir_diputados = new QPushButton(frame);
        ir_diputados->setObjectName(QStringLiteral("ir_diputados"));
        ir_diputados->setGeometry(QRect(0, 110, 231, 41));
        ir_diputados->setCursor(QCursor(Qt::PointingHandCursor));
        ir_diputados->setStyleSheet(QLatin1String("QPushButton#ir_diputados{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#ir_diputados:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        ir_alcaldes = new QPushButton(frame);
        ir_alcaldes->setObjectName(QStringLiteral("ir_alcaldes"));
        ir_alcaldes->setGeometry(QRect(0, 170, 231, 41));
        ir_alcaldes->setCursor(QCursor(Qt::PointingHandCursor));
        ir_alcaldes->setStyleSheet(QLatin1String("QPushButton#ir_alcaldes{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#ir_alcaldes:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        ir_resultados = new QPushButton(frame);
        ir_resultados->setObjectName(QStringLiteral("ir_resultados"));
        ir_resultados->setGeometry(QRect(0, 230, 231, 41));
        ir_resultados->setCursor(QCursor(Qt::PointingHandCursor));
        ir_resultados->setStyleSheet(QLatin1String("QPushButton#ir_resultados{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#ir_resultados:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        informacion = new QPushButton(frame);
        informacion->setObjectName(QStringLiteral("informacion"));
        informacion->setGeometry(QRect(0, 290, 231, 41));
        informacion->setCursor(QCursor(Qt::PointingHandCursor));
        informacion->setStyleSheet(QLatin1String("QPushButton#informacion{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#informacion:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 20, 801, 41));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(154, 158, 161, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_12->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Zero Velocity BRK"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(550, 70, 231, 341));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgba(100,0,0,0.2);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 0, 231, 41));
        label_14->setStyleSheet(QLatin1String("QLabel#label_14{\n"
"	color: black;\n"
"	font: bold 18px;\n"
"   background-color: darkred;\n"
"}"));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 50, 131, 21));
        label_15->setStyleSheet(QLatin1String("QLabel#label_15{\n"
"background-color: rgba(0,0,0,0);\n"
"font: bold 15px;\n"
"color: red;\n"
"}"));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 110, 131, 21));
        label_16->setStyleSheet(QLatin1String("QLabel#label_16{\n"
"background-color: rgba(0,0,0,0);\n"
"font: bold 15px;\n"
"color: red;\n"
"}"));
        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 170, 131, 21));
        label_18->setStyleSheet(QLatin1String("QLabel#label_18{\n"
"background-color: rgba(0,0,0,0);\n"
"font: bold 15px;\n"
"color: red;\n"
"}"));
        label_19 = new QLabel(frame_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 240, 131, 21));
        label_19->setStyleSheet(QLatin1String("QLabel#label_19{\n"
"background-color: rgba(0,0,0,0);\n"
"font: bold 15px;\n"
"color: red;\n"
"}"));
        s_identidad = new QLineEdit(frame_2);
        s_identidad->setObjectName(QStringLiteral("s_identidad"));
        s_identidad->setGeometry(QRect(20, 70, 201, 27));
        s_identidad->setStyleSheet(QLatin1String("QLineEdit#s_identidad{\n"
"background-color: rgba(100,0,0,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_identidad->setAlignment(Qt::AlignCenter);
        s_identidad->setReadOnly(true);
        s_nombre = new QLineEdit(frame_2);
        s_nombre->setObjectName(QStringLiteral("s_nombre"));
        s_nombre->setGeometry(QRect(20, 130, 201, 27));
        s_nombre->setStyleSheet(QLatin1String("QLineEdit#s_nombre{\n"
"background-color: rgba(100,0,0,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_nombre->setAlignment(Qt::AlignCenter);
        s_nombre->setReadOnly(true);
        s_departamento = new QLineEdit(frame_2);
        s_departamento->setObjectName(QStringLiteral("s_departamento"));
        s_departamento->setGeometry(QRect(20, 190, 201, 27));
        s_departamento->setStyleSheet(QLatin1String("QLineEdit#s_departamento{\n"
"background-color: rgba(100,0,0,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_departamento->setAlignment(Qt::AlignCenter);
        s_departamento->setReadOnly(true);
        s_municipio = new QLineEdit(frame_2);
        s_municipio->setObjectName(QStringLiteral("s_municipio"));
        s_municipio->setGeometry(QRect(20, 260, 201, 27));
        s_municipio->setStyleSheet(QLatin1String("QLineEdit#s_municipio{\n"
"background-color: rgba(100,0,0,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_municipio->setAlignment(Qt::AlignCenter);
        s_municipio->setReadOnly(true);
        salir = new QPushButton(centralwidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(560, 430, 131, 41));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        salir->setFont(font1);
        salir->setCursor(QCursor(Qt::PointingHandCursor));
        salir->setStyleSheet(QLatin1String("QPushButton#salir{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0.2);\n"
"   border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton#salir:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        principal->setCentralWidget(centralwidget);

        retranslateUi(principal);

        QMetaObject::connectSlotsByName(principal);
    } // setupUi

    void retranslateUi(QMainWindow *principal)
    {
        principal->setWindowTitle(QApplication::translate("principal", "Menu Principal", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("principal", "SISTEMA DE VOTACION", 0));
        label_8->setText(QApplication::translate("principal", "____________________________", 0));
        label_9->setText(QApplication::translate("principal", "___________________________", 0));
        label_10->setText(QApplication::translate("principal", "___________________________", 0));
        label_11->setText(QApplication::translate("principal", "___________________________", 0));
        ir_presidente->setText(QApplication::translate("principal", "VOTOS PRESIDENCIALES", 0));
        ir_diputados->setText(QApplication::translate("principal", "VOTOS DIPUTADOS", 0));
        ir_alcaldes->setText(QApplication::translate("principal", "VOTOS ALCALDES", 0));
        ir_resultados->setText(QApplication::translate("principal", "RESULTADOS ACTUALES", 0));
        informacion->setText(QApplication::translate("principal", "INFORMACION", 0));
        label_12->setText(QApplication::translate("principal", "NEXT GOBERMENT VOTATION SYSTEM", 0));
        label_14->setText(QApplication::translate("principal", "SESION ACTUAL", 0));
        label_15->setText(QApplication::translate("principal", "IDENTIDAD", 0));
        label_16->setText(QApplication::translate("principal", "NOMBRE", 0));
        label_18->setText(QApplication::translate("principal", "DEPARTAMENTO", 0));
        label_19->setText(QApplication::translate("principal", "MUNICIPIO", 0));
        s_identidad->setText(QString());
        s_nombre->setText(QString());
        s_departamento->setText(QString());
        s_municipio->setText(QString());
        salir->setText(QApplication::translate("principal", "SALIR", 0));
    } // retranslateUi

};

namespace Ui {
    class principal: public Ui_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
