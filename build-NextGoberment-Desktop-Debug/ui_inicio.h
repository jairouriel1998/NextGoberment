/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

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

class Ui_inicio
{
public:
    QWidget *centralWidget;
    QLabel *titulo_login;
    QFrame *frame;
    QLabel *subtitulo_login;
    QLabel *texto2_login;
    QLabel *texto1_login;
    QLineEdit *identidad_inicio;
    QLineEdit *contrasena_inicio;
    QPushButton *iniciar_sesion;
    QPushButton *ir_registrarse;
    QLabel *label;

    void setupUi(QMainWindow *inicio)
    {
        if (inicio->objectName().isEmpty())
            inicio->setObjectName(QStringLiteral("inicio"));
        inicio->setWindowModality(Qt::WindowModal);
        inicio->resize(694, 493);
        inicio->setCursor(QCursor(Qt::ArrowCursor));
        centralWidget = new QWidget(inicio);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titulo_login = new QLabel(centralWidget);
        titulo_login->setObjectName(QStringLiteral("titulo_login"));
        titulo_login->setGeometry(QRect(-10, 10, 711, 41));
        QPalette palette;
        QBrush brush(QColor(85, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 127));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(154, 158, 161, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        titulo_login->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Zero Velocity BRK"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        titulo_login->setFont(font);
        titulo_login->setStyleSheet(QLatin1String("QLabel#titulo_login{\n"
"	background-color: rgba(0,0,0,0.5);\n"
"}"));
        titulo_login->setAlignment(Qt::AlignCenter);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(100, 80, 511, 341));
        frame->setStyleSheet(QLatin1String("background-color: rgba(0,0,0,0.5);\n"
"border-radius: 20px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        subtitulo_login = new QLabel(frame);
        subtitulo_login->setObjectName(QStringLiteral("subtitulo_login"));
        subtitulo_login->setGeometry(QRect(110, 40, 291, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(0, 0, 0, 0));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        subtitulo_login->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Zero Velocity BRK"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        subtitulo_login->setFont(font1);
        subtitulo_login->setStyleSheet(QLatin1String("QLabel#subtitulo_login{\n"
"	background-color: rgba(0,0,0,0);\n"
"}"));
        subtitulo_login->setAlignment(Qt::AlignCenter);
        texto2_login = new QLabel(frame);
        texto2_login->setObjectName(QStringLiteral("texto2_login"));
        texto2_login->setGeometry(QRect(50, 100, 141, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        texto2_login->setPalette(palette2);
        QFont font2;
        font2.setFamily(QStringLiteral("Zephyrean Gust BRK"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        texto2_login->setFont(font2);
        texto2_login->setStyleSheet(QLatin1String("QLabel#texto2_login{\n"
"	background-color: rgba(0,0,0,0);\n"
"}"));
        texto1_login = new QLabel(frame);
        texto1_login->setObjectName(QStringLiteral("texto1_login"));
        texto1_login->setGeometry(QRect(50, 160, 121, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        texto1_login->setPalette(palette3);
        texto1_login->setFont(font2);
        texto1_login->setStyleSheet(QLatin1String("QLabel#texto1_login{\n"
"	background-color: rgba(0,0,0,0);\n"
"}"));
        identidad_inicio = new QLineEdit(frame);
        identidad_inicio->setObjectName(QStringLiteral("identidad_inicio"));
        identidad_inicio->setGeometry(QRect(220, 100, 261, 41));
        QFont font3;
        font3.setPointSize(18);
        font3.setItalic(true);
        identidad_inicio->setFont(font3);
        identidad_inicio->setStyleSheet(QLatin1String("QLineEdit#identidad_inicio{\n"
"background-color: rgba(0,50,100,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: skyblue;\n"
"border: skyblue 3px;\n"
"}\n"
""));
        identidad_inicio->setAlignment(Qt::AlignCenter);
        contrasena_inicio = new QLineEdit(frame);
        contrasena_inicio->setObjectName(QStringLiteral("contrasena_inicio"));
        contrasena_inicio->setGeometry(QRect(220, 150, 261, 41));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        contrasena_inicio->setFont(font4);
        contrasena_inicio->setStyleSheet(QLatin1String("QLineEdit#contrasena_inicio{\n"
"background-color: rgba(0,50,100,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: skyblue;\n"
"border: skyblue 3px;\n"
"}\n"
""));
        contrasena_inicio->setEchoMode(QLineEdit::Password);
        contrasena_inicio->setAlignment(Qt::AlignCenter);
        iniciar_sesion = new QPushButton(frame);
        iniciar_sesion->setObjectName(QStringLiteral("iniciar_sesion"));
        iniciar_sesion->setGeometry(QRect(110, 220, 321, 51));
        iniciar_sesion->setFont(font1);
        iniciar_sesion->setCursor(QCursor(Qt::PointingHandCursor));
        iniciar_sesion->setStyleSheet(QLatin1String("QPushButton#iniciar_sesion {\n"
"background-color: rgba(0,50,100,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: skyblue;\n"
"}\n"
"\n"
"QPushButton#iniciar_sesion:hover{\n"
"    background-color: rgba(0,100,100,0.6);\n"
"	color: yellow;\n"
"}\n"
""));
        ir_registrarse = new QPushButton(frame);
        ir_registrarse->setObjectName(QStringLiteral("ir_registrarse"));
        ir_registrarse->setGeometry(QRect(340, 290, 151, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("Zero Velocity BRK"));
        ir_registrarse->setFont(font5);
        ir_registrarse->setCursor(QCursor(Qt::PointingHandCursor));
        ir_registrarse->setStyleSheet(QLatin1String("QPushButton#ir_registrarse{\n"
"background-color: rgba(0,50,100,0.6);\n"
"border-radius: 10px 10px 100px 100px; \n"
"color: skyblue;\n"
"}\n"
"\n"
"QPushButton#ir_registrarse:hover{\n"
"    background-color: rgba(0,100,100,0.6);\n"
"	color: yellow;\n"
"}\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-100, 0, 861, 571));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/plane-wallpaper-picture-wallpapers.jpg")));
        label->setScaledContents(true);
        inicio->setCentralWidget(centralWidget);
        label->raise();
        titulo_login->raise();
        frame->raise();

        retranslateUi(inicio);

        QMetaObject::connectSlotsByName(inicio);
    } // setupUi

    void retranslateUi(QMainWindow *inicio)
    {
        inicio->setWindowTitle(QApplication::translate("inicio", "Inicio", 0));
        titulo_login->setText(QApplication::translate("inicio", "NEXT GOBERMENT VOTATION SYSTEM", 0));
        subtitulo_login->setText(QApplication::translate("inicio", "Iniciar Sesion", 0));
        texto2_login->setText(QApplication::translate("inicio", "Identidad:", 0));
        texto1_login->setText(QApplication::translate("inicio", "Contrasena:", 0));
        iniciar_sesion->setText(QApplication::translate("inicio", "Iniciar Sesion", 0));
        ir_registrarse->setText(QApplication::translate("inicio", "Registrarse", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class inicio: public Ui_inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H
