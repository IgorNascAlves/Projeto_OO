#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "facu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Facu f;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void PreencheComProfs();

private slots:
    void on_comboBox_Profs_currentIndexChanged(int index);

    void on_pushButton_Criar_clicked();

    void on_pushButton_Preencher_clicked();

    void on_pushButton_Editar_clicked();

    void on_pushButton_Excluir_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
