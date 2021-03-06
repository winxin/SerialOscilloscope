/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_portName;
    QLabel *label_2;
    QComboBox *comboBox_baudRate;
    QLabel *label_3;
    QComboBox *comboBox_dataBits;
    QLabel *label_4;
    QComboBox *comboBox_parity;
    QLabel *label_5;
    QComboBox *comboBox_stopBits;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *lable_status;
    QLabel *label_6;
    QTextEdit *textEdit_serialInfo;
    QPushButton *pushButton_open;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_enableLog;
    QTextEdit *textEdit_read;
    QLineEdit *lineEdit_write;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_send;
    QPushButton *pushButton_clear;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *qCustomPlot;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_channelA;
    QCheckBox *checkBox_channelB;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QSpinBox *spinBox_dataQuantity;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(675, 522);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(180, 16777215));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_portName = new QComboBox(groupBox);
        comboBox_portName->setObjectName(QStringLiteral("comboBox_portName"));

        gridLayout->addWidget(comboBox_portName, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_baudRate = new QComboBox(groupBox);
        comboBox_baudRate->setObjectName(QStringLiteral("comboBox_baudRate"));

        gridLayout->addWidget(comboBox_baudRate, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_dataBits = new QComboBox(groupBox);
        comboBox_dataBits->setObjectName(QStringLiteral("comboBox_dataBits"));

        gridLayout->addWidget(comboBox_dataBits, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_parity = new QComboBox(groupBox);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        gridLayout->addWidget(comboBox_parity, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBox_stopBits = new QComboBox(groupBox);
        comboBox_stopBits->setObjectName(QStringLiteral("comboBox_stopBits"));

        gridLayout->addWidget(comboBox_stopBits, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        lable_status = new QLabel(groupBox);
        lable_status->setObjectName(QStringLiteral("lable_status"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setBold(true);
        font.setWeight(75);
        lable_status->setFont(font);
        lable_status->setMouseTracking(true);
        lable_status->setFrameShape(QFrame::Panel);
        lable_status->setFrameShadow(QFrame::Sunken);
        lable_status->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lable_status);


        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        textEdit_serialInfo = new QTextEdit(groupBox);
        textEdit_serialInfo->setObjectName(QStringLiteral("textEdit_serialInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_serialInfo->sizePolicy().hasHeightForWidth());
        textEdit_serialInfo->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        textEdit_serialInfo->setFont(font1);
        textEdit_serialInfo->setAutoFillBackground(true);
        textEdit_serialInfo->setFrameShape(QFrame::Panel);

        verticalLayout->addWidget(textEdit_serialInfo);


        verticalLayout_4->addLayout(verticalLayout);

        pushButton_open = new QPushButton(groupBox);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_open->sizePolicy().hasHeightForWidth());
        pushButton_open->setSizePolicy(sizePolicy2);
        pushButton_open->setMinimumSize(QSize(0, 70));

        verticalLayout_4->addWidget(pushButton_open);


        verticalLayout_6->addLayout(verticalLayout_4);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox_enableLog = new QCheckBox(tab);
        checkBox_enableLog->setObjectName(QStringLiteral("checkBox_enableLog"));

        verticalLayout_2->addWidget(checkBox_enableLog);

        textEdit_read = new QTextEdit(tab);
        textEdit_read->setObjectName(QStringLiteral("textEdit_read"));
        QFont font2;
        font2.setFamily(QStringLiteral("System"));
        font2.setBold(true);
        font2.setWeight(75);
        textEdit_read->setFont(font2);

        verticalLayout_2->addWidget(textEdit_read);

        lineEdit_write = new QLineEdit(tab);
        lineEdit_write->setObjectName(QStringLiteral("lineEdit_write"));
        lineEdit_write->setFont(font2);

        verticalLayout_2->addWidget(lineEdit_write);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_send = new QPushButton(tab);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(pushButton_send);

        pushButton_clear = new QPushButton(tab);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(pushButton_clear);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_7 = new QVBoxLayout(tab_2);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        qCustomPlot = new QCustomPlot(tab_2);
        qCustomPlot->setObjectName(QStringLiteral("qCustomPlot"));
        sizePolicy1.setHeightForWidth(qCustomPlot->sizePolicy().hasHeightForWidth());
        qCustomPlot->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(qCustomPlot);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_channelA = new QCheckBox(tab_2);
        checkBox_channelA->setObjectName(QStringLiteral("checkBox_channelA"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkBox_channelA->sizePolicy().hasHeightForWidth());
        checkBox_channelA->setSizePolicy(sizePolicy3);
        checkBox_channelA->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_channelA);

        checkBox_channelB = new QCheckBox(tab_2);
        checkBox_channelB->setObjectName(QStringLiteral("checkBox_channelB"));
        sizePolicy3.setHeightForWidth(checkBox_channelB->sizePolicy().hasHeightForWidth());
        checkBox_channelB->setSizePolicy(sizePolicy3);
        checkBox_channelB->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_channelB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        spinBox_dataQuantity = new QSpinBox(tab_2);
        spinBox_dataQuantity->setObjectName(QStringLiteral("spinBox_dataQuantity"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBox_dataQuantity->sizePolicy().hasHeightForWidth());
        spinBox_dataQuantity->setSizePolicy(sizePolicy4);
        spinBox_dataQuantity->setMinimumSize(QSize(100, 0));
        spinBox_dataQuantity->setMaximum(5000);
        spinBox_dataQuantity->setValue(100);

        horizontalLayout_2->addWidget(spinBox_dataQuantity);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 1, 1, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\346\225\260\346\215\256\345\244\204\347\220\206", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("MainWindow", "\347\253\257  \345\217\243\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        comboBox_baudRate->clear();
        comboBox_baudRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", 0)
         << QApplication::translate("MainWindow", "57600", 0)
         << QApplication::translate("MainWindow", "38400", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "4800", 0)
         << QApplication::translate("MainWindow", "2400", 0)
         << QApplication::translate("MainWindow", "1200", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        comboBox_dataBits->clear();
        comboBox_dataBits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\240\241  \351\252\214\357\274\232", 0));
        comboBox_parity->clear();
        comboBox_parity->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240\346\240\241\351\252\214", 0)
         << QApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", 0)
         << QApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        comboBox_stopBits->clear();
        comboBox_stopBits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
        label_7->setText(QApplication::translate("MainWindow", "\347\212\266  \346\200\201\357\274\232", 0));
        lable_status->setText(QApplication::translate("MainWindow", "OFF", 0));
        label_6->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\344\277\241\346\201\257\357\274\232", 0));
        pushButton_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        checkBox_enableLog->setText(QApplication::translate("MainWindow", "\344\275\277\350\203\275", 0));
        pushButton_send->setText(QApplication::translate("MainWindow", "\345\217\221  \351\200\201", 0));
        pushButton_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\212\251\346\211\213", 0));
        checkBox_channelA->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223A", 0));
        checkBox_channelB->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223B", 0));
        label_8->setText(QApplication::translate("MainWindow", "\350\256\260\345\275\225\346\225\260\351\207\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\230\345\233\276", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
