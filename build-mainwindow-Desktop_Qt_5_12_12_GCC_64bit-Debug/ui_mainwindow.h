/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *FILE_BTN;
    QGridLayout *gridLayout_2;
    QPushButton *SAVE_BTN;
    QPushButton *INPUT_FILE_BTN;
    QComboBox *LANGAGE_CMX;
    QPushButton *RUN_BTN;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *TIM_Lb;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *SAVE_FILE_BTN;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *Title;
    QSplitter *splitter;
    QTextEdit *INPUT_BRS;
    QLabel *label;
    QTextBrowser *OUTPUT_BRS;
    QTextEdit *CODE_BRS;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1304, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1190, 260, 87, 27));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        FILE_BTN = new QPushButton(centralwidget);
        FILE_BTN->setObjectName(QString::fromUtf8("FILE_BTN"));
        FILE_BTN->setMinimumSize(QSize(80, 110));
        FILE_BTN->setMaximumSize(QSize(80, 16777215));
        FILE_BTN->setStyleSheet(QString::fromUtf8("background-color:#CBC1C1;\n"
"font-size:12pt; font-weight:600; color:#3425e3;\n"
"padding:8\n"
""));

        horizontalLayout_2->addWidget(FILE_BTN);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        SAVE_BTN = new QPushButton(centralwidget);
        SAVE_BTN->setObjectName(QString::fromUtf8("SAVE_BTN"));
        SAVE_BTN->setMaximumSize(QSize(16777215, 60));
        SAVE_BTN->setStyleSheet(QString::fromUtf8("background-color:#CBC1C1;\n"
"font-size:16pt; font-weight:600; color:#3425e3;"));

        gridLayout_2->addWidget(SAVE_BTN, 1, 1, 2, 1);

        INPUT_FILE_BTN = new QPushButton(centralwidget);
        INPUT_FILE_BTN->setObjectName(QString::fromUtf8("INPUT_FILE_BTN"));
        INPUT_FILE_BTN->setMaximumSize(QSize(16777215, 60));
        INPUT_FILE_BTN->setStyleSheet(QString::fromUtf8("background-color:#CBC1C1;\n"
"font-size:16pt; font-weight:600; color:#3425e3;"));

        gridLayout_2->addWidget(INPUT_FILE_BTN, 1, 2, 2, 1);

        LANGAGE_CMX = new QComboBox(centralwidget);
        LANGAGE_CMX->addItem(QString());
        LANGAGE_CMX->addItem(QString());
        LANGAGE_CMX->addItem(QString());
        LANGAGE_CMX->addItem(QString());
        LANGAGE_CMX->setObjectName(QString::fromUtf8("LANGAGE_CMX"));
        LANGAGE_CMX->setMinimumSize(QSize(0, 20));
        LANGAGE_CMX->setMaximumSize(QSize(100, 16777215));
        LANGAGE_CMX->setStyleSheet(QString::fromUtf8("background-color:#CBC1C1;\n"
"padding:10;\n"
"\n"
""));

        gridLayout_2->addWidget(LANGAGE_CMX, 0, 4, 2, 1);

        RUN_BTN = new QPushButton(centralwidget);
        RUN_BTN->setObjectName(QString::fromUtf8("RUN_BTN"));
        RUN_BTN->setEnabled(true);
        RUN_BTN->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 85, 85);\n"
"color:rgb(239, 244, 144);\n"
"padding:12;\n"
"font-size:16pt; font-weight:600;"));

        gridLayout_2->addWidget(RUN_BTN, 2, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-color:#CBD1C1;\n"
"color: rgb(3, 160, 93);"));

        horizontalLayout_3->addWidget(label_7);

        TIM_Lb = new QLabel(centralwidget);
        TIM_Lb->setObjectName(QString::fromUtf8("TIM_Lb"));
        TIM_Lb->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 182, 182);\n"
"background-color: rgb(191, 182, 182);\n"
"text-align: center;\n"
"font: 70 25pt \"DejaVu Serif\";\n"
""));

        horizontalLayout_3->addWidget(TIM_Lb);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 40));
        label_4->setStyleSheet(QString::fromUtf8("background-color:#CBC1C1;\n"
""));

        verticalLayout->addWidget(label_4);


        gridLayout_2->addLayout(verticalLayout, 0, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 80));
        label_2->setStyleSheet(QString::fromUtf8("background-color: #CBC1C1;\n"
"font-size:16pt; font-weight:600; color:#000000;\n"
"padding:10;"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 3);

        SAVE_FILE_BTN = new QPushButton(centralwidget);
        SAVE_FILE_BTN->setObjectName(QString::fromUtf8("SAVE_FILE_BTN"));
        SAVE_FILE_BTN->setMinimumSize(QSize(0, 60));
        SAVE_FILE_BTN->setStyleSheet(QString::fromUtf8("background-color:#CBC1C1;\n"
"font-size:16pt; font-weight:600; color:#3425e3;"));

        gridLayout_2->addWidget(SAVE_FILE_BTN, 1, 0, 2, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 193, 241);"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        Title = new QLabel(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setStyleSheet(QString::fromUtf8("background-color: rgb(147, 113, 113);padding:10;"));

        gridLayout->addWidget(Title, 0, 0, 1, 2);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        INPUT_BRS = new QTextEdit(splitter);
        INPUT_BRS->setObjectName(QString::fromUtf8("INPUT_BRS"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(INPUT_BRS->sizePolicy().hasHeightForWidth());
        INPUT_BRS->setSizePolicy(sizePolicy);
        INPUT_BRS->setMinimumSize(QSize(700, 0));
        INPUT_BRS->setSizeIncrement(QSize(50, 0));
        splitter->addWidget(INPUT_BRS);

        gridLayout->addWidget(splitter, 4, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 1, 1, 1);

        OUTPUT_BRS = new QTextBrowser(centralwidget);
        OUTPUT_BRS->setObjectName(QString::fromUtf8("OUTPUT_BRS"));

        gridLayout->addWidget(OUTPUT_BRS, 6, 1, 1, 1);

        CODE_BRS = new QTextEdit(centralwidget);
        CODE_BRS->setObjectName(QString::fromUtf8("CODE_BRS"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CODE_BRS->sizePolicy().hasHeightForWidth());
        CODE_BRS->setSizePolicy(sizePolicy1);
        CODE_BRS->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(CODE_BRS, 4, 0, 3, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1304, 24));
        menubar->setTabletTracking(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "RUN", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#1a5fb4;\">OUTPUT</span></p></body></html>", nullptr));
        FILE_BTN->setText(QApplication::translate("MainWindow", "FILE", nullptr));
#ifndef QT_NO_TOOLTIP
        SAVE_BTN->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\" color:#3425E3><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        SAVE_BTN->setText(QApplication::translate("MainWindow", "SAVE", nullptr));
        INPUT_FILE_BTN->setText(QApplication::translate("MainWindow", "INPUT FILE", nullptr));
        LANGAGE_CMX->setItemText(0, QApplication::translate("MainWindow", "C", nullptr));
        LANGAGE_CMX->setItemText(1, QApplication::translate("MainWindow", "C++", nullptr));
        LANGAGE_CMX->setItemText(2, QApplication::translate("MainWindow", "python2", nullptr));
        LANGAGE_CMX->setItemText(3, QApplication::translate("MainWindow", "python3", nullptr));

        RUN_BTN->setText(QApplication::translate("MainWindow", "RUN", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#03a05d;\">TIME:</span></p></body></html>", nullptr));
        TIM_Lb->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">00S</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#1a5fb4;\">LANGAGE</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">TEST DATA</p></body></html>", nullptr));
        SAVE_FILE_BTN->setText(QApplication::translate("MainWindow", "SAVE IN FILE", nullptr));
        label_3->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#1a5fb4;\">CODE SOURCE</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        Title->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Title->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:#ffffff;\">Perfect Compiler</span></p></body></html>", nullptr));
        INPUT_BRS->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; text-decoration: underline; color:#1a5fb4;\">INPUT</span></p></body></html>", nullptr));
        CODE_BRS->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
