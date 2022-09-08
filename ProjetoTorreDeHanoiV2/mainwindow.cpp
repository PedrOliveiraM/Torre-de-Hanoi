#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonAB_clicked() // mover A pra B
{       
    try {
        jogo->moverA_B();

        QString saida;
        QString saida1;
        QString saidaQJ;

        saida += jogo->getTorreA();
        saida1 += jogo->getTorreB();
        saidaQJ += QString::number(jogo->getQuantidadeDeJogadas());


        ui->textEditTorreA->setText(saida);
        ui->textEditTorreB->setText(saida1);
        ui->lineEditQuatJogadas->setText(saidaQJ);

        if(jogo->consultarVitoria()){
            QMessageBox::about(this,"PARABÉNS",jogo->vitoria());
            ui->lineEditQuatDiscos->clear();
            ui->lineEditQuatJogadas->clear();
            ui->textEditTorreA->clear();
            ui->textEditTorreB->clear();
            ui->textEditTorreC->clear();
        }



    }  catch (QString &erro) {
        QMessageBox::information(this,"ERRO NO SISTEMA",erro);
    }
}


void MainWindow::on_pushButtonAC_clicked()   // mover A pra C
{
    try {
        jogo->moverA_C();

        QString saida;
        QString saida1;
        QString saidaQJ;

        saida += jogo->getTorreA();
        saida1 += jogo->getTorreC();
        saidaQJ += QString::number(jogo->getQuantidadeDeJogadas());


        ui->textEditTorreA->setText(saida);
        ui->textEditTorreC->setText(saida1);
        ui->lineEditQuatJogadas->setText(saidaQJ);

        if(jogo->consultarVitoria()){
            QMessageBox::about(this,"PARABÉNS",jogo->vitoria());
            ui->lineEditQuatDiscos->clear();
            ui->lineEditQuatJogadas->clear();
            ui->textEditTorreA->clear();
            ui->textEditTorreB->clear();
            ui->textEditTorreC->clear();
        }


    }  catch (QString &erro) {
        QMessageBox::information(this,"ERRO NO SISTEMA",erro);
    }

}


void MainWindow::on_pushButtonIniciar_clicked()
{
    try {
        int quantidade = ui->lineEditQuatDiscos->text().toInt();

        if (quantidade < 3 || quantidade >7)
            throw QString ("Digite um valor entre 3 a 7");
        jogo = new pom::Jogo(quantidade);
        //jogo = new pom::Jogo(ui->lineEditQuatDiscos->text().toInt());

        pom::Jogo(quantidade).getQuantidadeDeJogadas();
        QString saida = pom::Jogo(quantidade).getTorreA()+ "\n";
        //QString saida = QString::number(pom::Jogo(quantidade).getQuantidadeDeDiscos())+ "\n";
        //saida += QString::number(pom::Jogo(quantidade).getQuantidadeDeJogadas());
        ui->textEditTorreA->setText(saida);

    } catch (QString &erro) {
        QMessageBox::about(this,"erro",erro);
    }

}



void MainWindow::on_pushButtonBA_clicked()
{
    try {
        jogo->moverB_A();

        QString saida;
        QString saida1;
        QString saidaQJ;

        saida += jogo->getTorreA();
        saida1 += jogo->getTorreB();
        saidaQJ += QString::number(jogo->getQuantidadeDeJogadas());


        ui->textEditTorreA->setText(saida);
        ui->textEditTorreB->setText(saida1);
        ui->lineEditQuatJogadas->setText(saidaQJ);

        if(jogo->consultarVitoria()){
            QMessageBox::about(this,"PARABÉNS",jogo->vitoria());
            ui->lineEditQuatDiscos->clear();
            ui->lineEditQuatJogadas->clear();
            ui->textEditTorreA->clear();
            ui->textEditTorreB->clear();
            ui->textEditTorreC->clear();
        }



    }  catch (QString &erro) {
        QMessageBox::information(this,"ERRO NO SISTEMA",erro);
    }


}


void MainWindow::on_pushButtonBC_clicked()
{
    try {
        jogo->moverB_C();

        QString saida;
        QString saida1;
        QString saidaQJ;

        saida += jogo->getTorreB();
        saida1 += jogo->getTorreC();
        saidaQJ += QString::number(jogo->getQuantidadeDeJogadas());


        ui->textEditTorreB->setText(saida);
        ui->textEditTorreC->setText(saida1);
        ui->lineEditQuatJogadas->setText(saidaQJ);

        if(jogo->consultarVitoria()){
            QMessageBox::about(this,"PARABÉNS",jogo->vitoria());
            ui->lineEditQuatDiscos->clear();
            ui->lineEditQuatJogadas->clear();
            ui->textEditTorreA->clear();
            ui->textEditTorreB->clear();
            ui->textEditTorreC->clear();
        }



    }  catch (QString &erro) {
        QMessageBox::information(this,"ERRO NO SISTEMA",erro);
    }
}


void MainWindow::on_pushButtonCA_clicked()
{
    try {
        jogo->moverC_A();

        QString saida;
        QString saida1;
        QString saidaQJ;

        saida += jogo->getTorreA();
        saida1 += jogo->getTorreC();
        saidaQJ += QString::number(jogo->getQuantidadeDeJogadas());


        ui->textEditTorreA->setText(saida);
        ui->textEditTorreC->setText(saida1);
        ui->lineEditQuatJogadas->setText(saidaQJ);

        if(jogo->consultarVitoria()){
            QMessageBox::about(this,"PARABÉNS",jogo->vitoria());
            ui->lineEditQuatDiscos->clear();
            ui->lineEditQuatJogadas->clear();
            ui->textEditTorreA->clear();
            ui->textEditTorreB->clear();
            ui->textEditTorreC->clear();
        }

    }  catch (QString &erro) {
        QMessageBox::information(this,"ERRO NO SISTEMA",erro);
    }

}


void MainWindow::on_pushButtonCB_clicked()
{
    try {
        jogo->moverC_B();

        QString saida;
        QString saida1;
        QString saidaQJ;

        saida += jogo->getTorreC();
        saida1 += jogo->getTorreB();
        saidaQJ += QString::number(jogo->getQuantidadeDeJogadas());


        ui->textEditTorreC->setText(saida);
        ui->textEditTorreB->setText(saida1);
        ui->lineEditQuatJogadas->setText(saidaQJ);

        if(jogo->consultarVitoria()){
            QMessageBox::about(this,"PARABÉNS",jogo->vitoria());
            ui->lineEditQuatDiscos->clear();
            ui->lineEditQuatJogadas->clear();
            ui->textEditTorreA->clear();
            ui->textEditTorreB->clear();
            ui->textEditTorreC->clear();
        }



    }  catch (QString &erro) {
        QMessageBox::information(this,"ERRO NO SISTEMA",erro);

    }

}


void MainWindow::on_pushButton_clicked()
{
    try {
        throw QString ("1- O NUMERO MAIOR NÃO PODE ESTAR ACIMA DO MENOR!\n"
                       "2- PARA VENCER DEVE SE MUDAR OS DISCOS PARA OUTRA TORRE");
    }  catch (QString &erro) {
        QMessageBox::information(this,"INTRUÇÕES",erro);
    }

}

