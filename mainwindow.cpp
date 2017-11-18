#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
/*! \brief Programa de organização da semana apartir das disponibilidades dos professores
 *
 *
 *  Esse programa não soliona situações impossiveis, somente organiza situações possiveis apartir de um algortimo desenvolvindo pelo grupo
 */

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i=1;i<=12;i++){
        const QString b = QString::number(i);
        ui->comboBox_Aulas->addItem(b,Qt::UserRole);
    }
    PreencheComProfs();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PreencheComProfs(){

    if(f.getQuantProfs()>0){
        ui->comboBox_Profs->clear();
        ui->comboBox_Profs->addItem("-------",Qt::UserRole);
        for(int i=0;i<f.getQuantProfs();i++){
            const QString b = QString::fromStdString(f.getNomeProf(i));
            ui->comboBox_Profs->addItem(b,Qt::UserRole);
        }
    }
    else{
        ui->comboBox_Profs->clear();
        ui->comboBox_Profs->addItem("-------",Qt::UserRole);
    }
}

void MainWindow::on_comboBox_Profs_currentIndexChanged(int index)
{
    if(index > 0){
    ui->comboBox_Aulas->setEditable(false);
    ui->pushButton_Criar->setVisible(false);
    std::string Nome = (ui->comboBox_Profs->currentText()).toStdString();

    for(int i=0;i<12;i++)
        if(f.getDiaProf(f.getIndProf(Nome),i) == 1)
            ui->Semana[i]->setChecked(true);
        else
            ui->Semana[i]->setChecked(false);
    const QString b = QString::number(f.getQuantAula(f.getIndProf(Nome)));
    ui->comboBox_Aulas->setCurrentText(b);
    const QString c = QString::fromStdString(Nome);
    ui->lineEdit_Nome->setText(c);

    }
    else{
        ui->pushButton_Criar->setVisible(true);
        ui->comboBox_Aulas->setEditable(true);
        for(int i=0;i<12;i++)
            ui->Semana[i]->setChecked(false);
        ui->lineEdit_Nome->clear();
        ui->comboBox_Aulas->setCurrentIndex(0);
    }
}

void MainWindow::on_pushButton_Criar_clicked()
{
    int check = 1;
    int disp = 0;
    std::string Nome = ui->lineEdit_Nome->text().toStdString();
    int Aulas = ui->comboBox_Aulas->currentText().toInt();

    for(int i=0;i<12;i++)
        if(ui->Semana[i]->isChecked() == true)
            disp++;

    if(!f.checaNome(Nome) && disp >= Aulas){
        check = 0;
        f.CriaProf(Nome,Aulas);

        for(int i=0;i<12;i++)
            if(ui->Semana[i]->isChecked() == true)
                f.setDiaProfV(f.getIndProf(Nome),i);

        f.showSemanaProf(f.getIndProf(Nome));
    }

    PreencheComProfs();
    ui->comboBox_Aulas->setCurrentIndex(0);

    if(check){
        ui->lineEdit_Nome->setText("ERRO !!!");
    }
}

void MainWindow::on_pushButton_Preencher_clicked()
{
   f.backup();
    while(!f.SemanaPronta()){
        int ind=f.MaiorPrioridade();
        f.Preenche(ind);
    }
    f.showSemana();
    int ind=0;
    for(int i=0;i<6;i++)
        for(int j=0;j<2;j++){
            int Indice = f.getDia(ind);
            std::string nome = f.getNomeProf(Indice);
            ui->tableWidget_Saida->setItem(j,i,new QTableWidgetItem(nome.c_str()));
            ind = ind + 1;
    }
    f.recovery();
}

void MainWindow::on_pushButton_Editar_clicked()
{
    std::string Nome = ui->lineEdit_Nome->text().toStdString();
    int ind = f.getIndProf(Nome);
    int Aulas = ui->comboBox_Aulas->currentText().toInt();
    int disp = 0;
    int check = 1;
    for(int i=0;i<12;i++)
        if(ui->Semana[i]->isChecked() == true)
            disp++;

    if(disp>=Aulas){
        check = 0;
       f.setAulasProf(ind,Aulas);
        for(int i=0;i<12;i++)
            if(ui->Semana[i]->isChecked() == true)
                f.setDiaProfV(ind,i);
            else
                f.setDiaProfF(ind,i);
    }
    PreencheComProfs();
    ui->comboBox_Aulas->setCurrentIndex(0);
    if(check)
        ui->lineEdit_Nome->setText("ERRO !!!");
}

void MainWindow::on_pushButton_Excluir_clicked()
{
    std::string Nome = ui->lineEdit_Nome->text().toStdString();
    int ind = f.getIndProf(Nome);
    f.apagaProf(ind);

    PreencheComProfs();
    ui->comboBox_Aulas->setCurrentIndex(0);
}
