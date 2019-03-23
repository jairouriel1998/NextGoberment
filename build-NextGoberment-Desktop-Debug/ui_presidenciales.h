/********************************************************************************
** Form generated from reading UI file 'presidenciales.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESIDENCIALES_H
#define UI_PRESIDENCIALES_H

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

class Ui_presidenciales
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *contenido;
    QLabel *label_2;
    QFrame *candidato1;
    QLabel *nombre1;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *votar_joh;
    QLabel *label_11;
    QLabel *label_23;
    QLineEdit *s_votos_joh;
    QFrame *candidato2;
    QLabel *nombre2;
    QPushButton *votar_nasralla;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *label_24;
    QLineEdit *s_votos_sn;
    QFrame *candidato3;
    QLabel *nombre3;
    QPushButton *votar_luis;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_19;
    QLabel *label_25;
    QLineEdit *s_votos_lz;
    QFrame *menu;
    QLabel *label_3;
    QPushButton *regresar;
    QPushButton *info;
    QPushButton *info2;
    QPushButton *info3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *s_nombre;
    QLineEdit *s_identidad;

    void setupUi(QMainWindow *presidenciales)
    {
        if (presidenciales->objectName().isEmpty())
            presidenciales->setObjectName(QStringLiteral("presidenciales"));
        presidenciales->setWindowModality(Qt::WindowModal);
        presidenciales->resize(1082, 605);
        centralwidget = new QWidget(presidenciales);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 0, 1091, 671));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/1.jpg")));
        label->setScaledContents(true);
        contenido = new QFrame(centralwidget);
        contenido->setObjectName(QStringLiteral("contenido"));
        contenido->setGeometry(QRect(40, 40, 751, 531));
        contenido->setStyleSheet(QLatin1String("QFrame#contenido{\n"
"	background-color: rgba(0,0,0,0.7);\n"
"}"));
        contenido->setFrameShape(QFrame::StyledPanel);
        contenido->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(contenido);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 751, 61));
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	background-color:rgba(80,0,0,0.8);\n"
"	color: red;\n"
"	font: bold 18px;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        candidato1 = new QFrame(contenido);
        candidato1->setObjectName(QStringLiteral("candidato1"));
        candidato1->setGeometry(QRect(20, 80, 201, 431));
        candidato1->setStyleSheet(QLatin1String("QFrame#candidato1{\n"
"		background-color: rgba(25,0,0,0.8);\n"
"}"));
        candidato1->setFrameShape(QFrame::StyledPanel);
        candidato1->setFrameShadow(QFrame::Raised);
        nombre1 = new QLabel(candidato1);
        nombre1->setObjectName(QStringLiteral("nombre1"));
        nombre1->setGeometry(QRect(0, 0, 201, 51));
        nombre1->setStyleSheet(QLatin1String("QLabel#nombre1{\n"
"	background-color: rgba(100, 0,0,0.8);\n"
"	color: red;\n"
"   font: bold 14px;\n"
"}"));
        nombre1->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(candidato1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 230, 91, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral("color: red;"));
        label_14 = new QLabel(candidato1);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 290, 121, 21));
        label_14->setFont(font);
        label_14->setStyleSheet(QStringLiteral("color: red;"));
        votar_joh = new QPushButton(candidato1);
        votar_joh->setObjectName(QStringLiteral("votar_joh"));
        votar_joh->setGeometry(QRect(10, 380, 181, 41));
        votar_joh->setCursor(QCursor(Qt::PointingHandCursor));
        votar_joh->setStyleSheet(QLatin1String("QPushButton#votar_joh{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0.2);\n"
"   border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton#votar_joh:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        label_11 = new QLabel(candidato1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 250, 161, 31));
        label_11->setStyleSheet(QLatin1String("color: red;\n"
"background-color: rgba(100,0,0,0.2);\n"
"border-radius: 15px;"));
        label_11->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(candidato1);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 70, 181, 151));
        label_23->setStyleSheet(QStringLiteral(""));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../imagenes/joh.jpg")));
        label_23->setScaledContents(true);
        s_votos_joh = new QLineEdit(candidato1);
        s_votos_joh->setObjectName(QStringLiteral("s_votos_joh"));
        s_votos_joh->setGeometry(QRect(30, 310, 161, 27));
        s_votos_joh->setStyleSheet(QLatin1String("QLineEdit#s_votos_joh{\n"
"background-color: rgba(100,0,0,0.2);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_votos_joh->setAlignment(Qt::AlignCenter);
        s_votos_joh->setReadOnly(true);
        candidato2 = new QFrame(contenido);
        candidato2->setObjectName(QStringLiteral("candidato2"));
        candidato2->setGeometry(QRect(280, 80, 201, 431));
        candidato2->setStyleSheet(QLatin1String("QFrame#candidato2{\n"
"		background-color: rgba(25,0,0,0.8);\n"
"}"));
        candidato2->setFrameShape(QFrame::StyledPanel);
        candidato2->setFrameShadow(QFrame::Raised);
        nombre2 = new QLabel(candidato2);
        nombre2->setObjectName(QStringLiteral("nombre2"));
        nombre2->setGeometry(QRect(0, 0, 201, 51));
        nombre2->setStyleSheet(QLatin1String("QLabel#nombre2{\n"
"	background-color: rgba(100, 0,0,0.8);\n"
"	color: red;\n"
"   font: bold 14px;\n"
"}"));
        nombre2->setAlignment(Qt::AlignCenter);
        votar_nasralla = new QPushButton(candidato2);
        votar_nasralla->setObjectName(QStringLiteral("votar_nasralla"));
        votar_nasralla->setGeometry(QRect(10, 380, 181, 41));
        votar_nasralla->setCursor(QCursor(Qt::PointingHandCursor));
        votar_nasralla->setStyleSheet(QLatin1String("QPushButton#votar_nasralla{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0.2);\n"
"   border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton#votar_nasralla:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        label_17 = new QLabel(candidato2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 230, 91, 21));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral("color: red;"));
        label_18 = new QLabel(candidato2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 290, 121, 21));
        label_18->setFont(font);
        label_18->setStyleSheet(QStringLiteral("color: red;"));
        label_15 = new QLabel(candidato2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 250, 161, 31));
        label_15->setStyleSheet(QLatin1String("color: red;\n"
"background-color: rgba(100,0,0,0.2);\n"
"border-radius: 15px;"));
        label_15->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(candidato2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 70, 181, 151));
        label_24->setPixmap(QPixmap(QString::fromUtf8("../imagenes/nasralla.jpg")));
        label_24->setScaledContents(true);
        s_votos_sn = new QLineEdit(candidato2);
        s_votos_sn->setObjectName(QStringLiteral("s_votos_sn"));
        s_votos_sn->setGeometry(QRect(30, 310, 161, 27));
        s_votos_sn->setStyleSheet(QLatin1String("QLineEdit#s_votos_sn{\n"
"background-color: rgba(100,0,0,0.2);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_votos_sn->setAlignment(Qt::AlignCenter);
        s_votos_sn->setReadOnly(true);
        candidato3 = new QFrame(contenido);
        candidato3->setObjectName(QStringLiteral("candidato3"));
        candidato3->setGeometry(QRect(530, 80, 201, 431));
        candidato3->setStyleSheet(QLatin1String("QFrame#candidato3{\n"
"		background-color: rgba(25,0,0,0.8);\n"
"}"));
        candidato3->setFrameShape(QFrame::StyledPanel);
        candidato3->setFrameShadow(QFrame::Raised);
        nombre3 = new QLabel(candidato3);
        nombre3->setObjectName(QStringLiteral("nombre3"));
        nombre3->setGeometry(QRect(0, 0, 201, 51));
        nombre3->setStyleSheet(QLatin1String("QLabel#nombre3{\n"
"	background-color: rgba(100, 0,0,0.8);\n"
"	color: red;\n"
"   font: bold 14px;\n"
"}"));
        nombre3->setAlignment(Qt::AlignCenter);
        votar_luis = new QPushButton(candidato3);
        votar_luis->setObjectName(QStringLiteral("votar_luis"));
        votar_luis->setGeometry(QRect(10, 380, 181, 41));
        votar_luis->setCursor(QCursor(Qt::PointingHandCursor));
        votar_luis->setStyleSheet(QLatin1String("QPushButton#votar_luis{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0.2);\n"
"   border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton#votar_luis:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        label_21 = new QLabel(candidato3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 230, 91, 21));
        label_21->setFont(font);
        label_21->setStyleSheet(QStringLiteral("color: red;"));
        label_22 = new QLabel(candidato3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 290, 121, 21));
        label_22->setFont(font);
        label_22->setStyleSheet(QStringLiteral("color: red;"));
        label_19 = new QLabel(candidato3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 250, 161, 31));
        label_19->setStyleSheet(QLatin1String("color: red;\n"
"background-color: rgba(100,0,0,0.2);\n"
"border-radius: 15px;"));
        label_19->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(candidato3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 70, 181, 151));
        label_25->setPixmap(QPixmap(QString::fromUtf8("../imagenes/luis.jpg")));
        label_25->setScaledContents(true);
        s_votos_lz = new QLineEdit(candidato3);
        s_votos_lz->setObjectName(QStringLiteral("s_votos_lz"));
        s_votos_lz->setGeometry(QRect(30, 310, 161, 27));
        s_votos_lz->setStyleSheet(QLatin1String("QLineEdit#s_votos_lz{\n"
"background-color: rgba(100,0,0,0.2);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_votos_lz->setAlignment(Qt::AlignCenter);
        s_votos_lz->setReadOnly(true);
        menu = new QFrame(centralwidget);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(830, 40, 221, 531));
        menu->setStyleSheet(QLatin1String("QFrame#menu{\n"
"	background-color: rgba(0,0,0,0.7);\n"
"}"));
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 221, 61));
        label_3->setStyleSheet(QLatin1String("QLabel#label_3{\n"
"	background-color: rgba(80,0,0,0.8);\n"
"	color: red;\n"
"	font: bold 18px;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        regresar = new QPushButton(menu);
        regresar->setObjectName(QStringLiteral("regresar"));
        regresar->setGeometry(QRect(0, 480, 221, 51));
        regresar->setCursor(QCursor(Qt::PointingHandCursor));
        regresar->setStyleSheet(QLatin1String("QPushButton#regresar{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#regresar:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        info = new QPushButton(menu);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(0, 300, 221, 61));
        info->setCursor(QCursor(Qt::PointingHandCursor));
        info->setStyleSheet(QLatin1String("QPushButton#info{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#info:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        info2 = new QPushButton(menu);
        info2->setObjectName(QStringLiteral("info2"));
        info2->setGeometry(QRect(0, 360, 221, 61));
        info2->setCursor(QCursor(Qt::PointingHandCursor));
        info2->setStyleSheet(QLatin1String("QPushButton#info2{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#info2:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        info3 = new QPushButton(menu);
        info3->setObjectName(QStringLiteral("info3"));
        info3->setGeometry(QRect(0, 420, 221, 61));
        info3->setCursor(QCursor(Qt::PointingHandCursor));
        info3->setStyleSheet(QLatin1String("QPushButton#info3{\n"
"	color: red;\n"
"	font: bold 14px;\n"
"   background-color: rgba(200,0,0,0);\n"
"   border-radius: 1px;\n"
"}\n"
"\n"
"QPushButton#info3:hover{\n"
"	color: black;\n"
"	background-color: rgba(200,0,0,0.8);\n"
"}"));
        label_4 = new QLabel(menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 91, 21));
        label_4->setStyleSheet(QLatin1String("QLabel#label_4{\n"
"	color: red;\n"
"	font: bold 16px;\n"
"}\n"
""));
        label_5 = new QLabel(menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 210, 91, 21));
        label_5->setStyleSheet(QLatin1String("QLabel#label_5{\n"
"	color: red;\n"
"	font: bold 16px;\n"
"}\n"
""));
        label_6 = new QLabel(menu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 460, 221, 20));
        label_6->setStyleSheet(QLatin1String("QLabel#label_6{\n"
"	color: red;\n"
"	font: bold 16px;\n"
"}\n"
""));
        label_7 = new QLabel(menu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 400, 221, 20));
        label_7->setStyleSheet(QLatin1String("QLabel#label_7{\n"
"	color: red;\n"
"	font: bold 16px;\n"
"}\n"
""));
        label_8 = new QLabel(menu);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 340, 221, 20));
        label_8->setStyleSheet(QLatin1String("QLabel#label_8{\n"
"	color: red;\n"
"	font: bold 16px;\n"
"}\n"
""));
        label_9 = new QLabel(menu);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 280, 221, 20));
        label_9->setStyleSheet(QLatin1String("QLabel#label_9{\n"
"	color: red;\n"
"	font: bold 16px;\n"
"}\n"
""));
        label_10 = new QLabel(menu);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 80, 221, 31));
        label_10->setStyleSheet(QLatin1String("QLabel#label_10{\n"
"	color: red;\n"
"	font: bold 18px;\n"
"}\n"
""));
        label_10->setAlignment(Qt::AlignCenter);
        s_nombre = new QLineEdit(menu);
        s_nombre->setObjectName(QStringLiteral("s_nombre"));
        s_nombre->setGeometry(QRect(10, 150, 201, 27));
        s_nombre->setStyleSheet(QLatin1String("QLineEdit#s_nombre{\n"
"background-color: rgba(100,0,0,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_nombre->setAlignment(Qt::AlignCenter);
        s_nombre->setReadOnly(true);
        s_identidad = new QLineEdit(menu);
        s_identidad->setObjectName(QStringLiteral("s_identidad"));
        s_identidad->setGeometry(QRect(10, 230, 201, 27));
        s_identidad->setStyleSheet(QLatin1String("QLineEdit#s_identidad{\n"
"background-color: rgba(100,0,0,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: red;\n"
"}\n"
""));
        s_identidad->setAlignment(Qt::AlignCenter);
        s_identidad->setReadOnly(true);
        presidenciales->setCentralWidget(centralwidget);

        retranslateUi(presidenciales);

        QMetaObject::connectSlotsByName(presidenciales);
    } // setupUi

    void retranslateUi(QMainWindow *presidenciales)
    {
        presidenciales->setWindowTitle(QApplication::translate("presidenciales", "Presidenciales", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("presidenciales", "CANDIDATOS PRESIDENCIALES", 0));
        nombre1->setText(QApplication::translate("presidenciales", "Juan Orlando Hern\303\241ndez", 0));
        label_13->setText(QApplication::translate("presidenciales", "Partido:", 0));
        label_14->setText(QApplication::translate("presidenciales", "Votos actuales:", 0));
        votar_joh->setText(QApplication::translate("presidenciales", "VOTAR", 0));
        label_11->setText(QApplication::translate("presidenciales", "Partido Nacional", 0));
        label_23->setText(QString());
        nombre2->setText(QApplication::translate("presidenciales", "Salvador Nasralla", 0));
        votar_nasralla->setText(QApplication::translate("presidenciales", "VOTAR", 0));
        label_17->setText(QApplication::translate("presidenciales", "Partido:", 0));
        label_18->setText(QApplication::translate("presidenciales", "Votos actuales:", 0));
        label_15->setText(QApplication::translate("presidenciales", "Alianza Patriotica", 0));
        label_24->setText(QString());
        nombre3->setText(QApplication::translate("presidenciales", "Luis Zelaya Medrano", 0));
        votar_luis->setText(QApplication::translate("presidenciales", "VOTAR", 0));
        label_21->setText(QApplication::translate("presidenciales", "Partido:", 0));
        label_22->setText(QApplication::translate("presidenciales", "Votos actuales:", 0));
        label_19->setText(QApplication::translate("presidenciales", "Partido Liberal", 0));
        label_25->setText(QString());
        label_3->setText(QApplication::translate("presidenciales", "MENU", 0));
        regresar->setText(QApplication::translate("presidenciales", "REGRESAR", 0));
        info->setText(QApplication::translate("presidenciales", "INFORMACI\303\223N", 0));
        info2->setText(QApplication::translate("presidenciales", "SOBRE TU VOTO", 0));
        info3->setText(QApplication::translate("presidenciales", "ADVERTENCIAS", 0));
        label_4->setText(QApplication::translate("presidenciales", "Nombre:", 0));
        label_5->setText(QApplication::translate("presidenciales", "Identidad:", 0));
        label_6->setText(QApplication::translate("presidenciales", "____________________________", 0));
        label_7->setText(QApplication::translate("presidenciales", "____________________________", 0));
        label_8->setText(QApplication::translate("presidenciales", "____________________________", 0));
        label_9->setText(QApplication::translate("presidenciales", "____________________________", 0));
        label_10->setText(QApplication::translate("presidenciales", "Sesi\303\263n Actual", 0));
        s_nombre->setText(QString());
        s_identidad->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class presidenciales: public Ui_presidenciales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESIDENCIALES_H
