/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget_Entrada;
    QPushButton *pushButton_Criar;
    QPushButton *pushButton_Editar;
    QPushButton *pushButton_Excluir;
    QLabel *label;
    QComboBox *comboBox_Profs;
    QComboBox *comboBox_Aulas;
    QLineEdit *lineEdit_Nome;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QWidget *tab;
    QGroupBox *groupBox;
    QTableWidget *tableWidget_Saida;
    QPushButton *pushButton_Preencher;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(817, 527);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 500));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 130, 791, 181));
        tableWidget_Entrada = new QTableWidget(groupBox_2);
        if (tableWidget_Entrada->columnCount() < 6)
            tableWidget_Entrada->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Entrada->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Entrada->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Entrada->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Entrada->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Entrada->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Entrada->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget_Entrada->rowCount() < 2)
            tableWidget_Entrada->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_Entrada->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_Entrada->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_Entrada->setItem(0, 0, __qtablewidgetitem8);
        tableWidget_Entrada->setObjectName(QStringLiteral("tableWidget_Entrada"));
        tableWidget_Entrada->setGeometry(QRect(10, 50, 681, 101));
        pushButton_Criar = new QPushButton(tab_2);
        pushButton_Criar->setObjectName(QStringLiteral("pushButton_Criar"));
        pushButton_Criar->setGeometry(QRect(200, 350, 89, 25));
        pushButton_Editar = new QPushButton(tab_2);
        pushButton_Editar->setObjectName(QStringLiteral("pushButton_Editar"));
        pushButton_Editar->setGeometry(QRect(400, 350, 89, 25));
        pushButton_Excluir = new QPushButton(tab_2);
        pushButton_Excluir->setObjectName(QStringLiteral("pushButton_Excluir"));
        pushButton_Excluir->setGeometry(QRect(600, 350, 89, 25));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 67, 17));
        comboBox_Profs = new QComboBox(tab_2);
        comboBox_Profs->setObjectName(QStringLiteral("comboBox_Profs"));
        comboBox_Profs->setGeometry(QRect(450, 50, 86, 25));
        comboBox_Aulas = new QComboBox(tab_2);
        comboBox_Aulas->setObjectName(QStringLiteral("comboBox_Aulas"));
        comboBox_Aulas->setGeometry(QRect(700, 50, 86, 25));
        lineEdit_Nome = new QLineEdit(tab_2);
        lineEdit_Nome->setObjectName(QStringLiteral("lineEdit_Nome"));
        lineEdit_Nome->setGeometry(QRect(100, 50, 113, 25));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 50, 81, 17));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 50, 67, 17));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 330, 92, 23));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 130, 791, 181));
        tableWidget_Saida = new QTableWidget(groupBox);
        if (tableWidget_Saida->columnCount() < 6)
            tableWidget_Saida->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_Saida->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_Saida->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_Saida->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_Saida->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_Saida->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_Saida->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        if (tableWidget_Saida->rowCount() < 2)
            tableWidget_Saida->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_Saida->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_Saida->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_Saida->setItem(0, 0, __qtablewidgetitem17);
        tableWidget_Saida->setObjectName(QStringLiteral("tableWidget_Saida"));
        tableWidget_Saida->setGeometry(QRect(10, 50, 681, 101));
        pushButton_Preencher = new QPushButton(tab);
        pushButton_Preencher->setObjectName(QStringLiteral("pushButton_Preencher"));
        pushButton_Preencher->setGeometry(QRect(400, 350, 89, 25));
        tabWidget->addTab(tab, QString());
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Entrada->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Seg", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Entrada->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Ter", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Entrada->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Qua", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Entrada->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Qui", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Entrada->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Sex", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Entrada->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Sab", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_Entrada->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Primeiro", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_Entrada->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Segundo", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget_Entrada->isSortingEnabled();
        tableWidget_Entrada->setSortingEnabled(false);
        tableWidget_Entrada->setSortingEnabled(__sortingEnabled);

        pushButton_Criar->setText(QApplication::translate("MainWindow", "Criar", Q_NULLPTR));
        pushButton_Editar->setText(QApplication::translate("MainWindow", "Editar", Q_NULLPTR));
        pushButton_Excluir->setText(QApplication::translate("MainWindow", "Excluir", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nome:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Lista Profs: ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Aulas:", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Prof", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_Saida->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Seg", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_Saida->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Ter", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_Saida->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Qua", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_Saida->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Qui", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_Saida->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Sex", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_Saida->horizontalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Sab", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_Saida->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Primeiro", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_Saida->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Segundo", Q_NULLPTR));

        const bool __sortingEnabled1 = tableWidget_Saida->isSortingEnabled();
        tableWidget_Saida->setSortingEnabled(false);
        tableWidget_Saida->setSortingEnabled(__sortingEnabled1);

        pushButton_Preencher->setText(QApplication::translate("MainWindow", "Preencher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Facu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
