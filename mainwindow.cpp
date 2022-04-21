#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QtWidgets>
#include "qfile.h"
#include <stdio.h>
#include <stdlib.h>
#include <qstring.h>
#include <QTextStream>

int status=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->CODE_BRS->setReadOnly(true);
    ui->RUN_BTN->setEnabled(false);
    QWidget::setWindowTitle("PerfectCompiler");
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::ErrorPrinter(int sts)

{

    if(!sts){
        ui->OUTPUT_BRS->clear();
        ui->OUTPUT_BRS->append("You have compilation error or code source error !!!");
    }

}

void MainWindow::PrintResult(void)
{

    QFile Myfile("/tmp/result.txt");
    if(Myfile.open(QIODevice::ReadOnly | QIODevice::Text))

    {
         while (!Myfile.atEnd())
         {

             ui->OUTPUT_BRS->append(Myfile.readLine());
             status=1;

         }

         //Delete result.txt
             system("rm -r /tmp/result.txt");

    }

     ErrorPrinter(status);
     status=0;
}

//Reading of programme data

void MainWindow::on_FILE_BTN_clicked()
{
    QString file =  QFileDialog::getOpenFileName(this,QDir::currentPath());
    file_orig = file;

    if (!file.isEmpty())
    {
        ui->RUN_BTN->setEnabled(true);


          QProcess::execute("cp "+file_orig+" /tmp/code_file");
          file="/tmp/code_file";
          QFile Myfile(file);
        if(Myfile.open(QIODevice::ReadOnly | QIODevice::Text))

        {
            Code_file_name=Myfile.fileName();

            ui->CODE_BRS->clear();
             while (!Myfile.atEnd())
             {

                 ui->CODE_BRS->append(Myfile.readLine());


             }
             Myfile.close();
        }

        //ui->FILE_BTN->setEnabled(false);
        ui->CODE_BRS->setReadOnly(false);


       // QMessageBox::warning(0,"Error",Code_file_name);

    }


    else
    {QMessageBox::warning(0,"Error","The file is empty !");}

 }

//Reading of input file

void MainWindow::on_INPUT_FILE_BTN_clicked()
{
    QString file =  QFileDialog::getOpenFileName(this,QDir::currentPath());



    if (!file.isEmpty())
    {
         QFile Myfile(file);
        if(Myfile.open(QIODevice::ReadOnly | QIODevice::Text))

        {
            input_file=Myfile.fileName();
            ui->INPUT_BRS->clear();
             while (!Myfile.atEnd())
             {

                 ui->INPUT_BRS->append(Myfile.readLine());

             }

        }

    }

    else
    {QMessageBox::warning(0,"Error","The file is empty !");}

}


void MainWindow::on_RUN_BTN_clicked()
{
    ui->OUTPUT_BRS->clear();
    QString langage;
    langage= ui->LANGAGE_CMX->currentText();
    input=ui->INPUT_BRS->toPlainText();
   // QMessageBox::information(0,"Langage choice","You are going to run your code in "+langage);

    //Recuperation of code_brs content

    if(langage=="C")
    {
        //Program compilation
        system("cp /tmp/code_file /tmp/code_file.c");
         QProcess::execute("gcc /tmp/code_file.c -o /tmp/compile_code");

        //chmod +x compile_code
            system("chmod +x /tmp/compile_code");

              system("echo '' > /tmp/result.txt> ");

            if(!input.isEmpty())
            {
                // start time
                QTime myTimer;
                myTimer.start();

                //Program execution
                system("cat /tmp/input.txt | /tmp/compile_code >> /tmp/result.txt 2>> /tmp/result.txt");
                 time = myTimer.elapsed();
            }

            else
            {

                // start time
                QTime myTimer;
                myTimer.start();

                //Program execution
                system("cat /tmp/input.txt | /tmp/compile_code >> /tmp/result.txt 2>> /tmp/result.txt");
                 time = myTimer.elapsed();
            }
           //print output
            PrintResult();
           // time of running

          QString s = QString::number(time);
          ui->TIM_Lb->setAlignment(Qt::AlignCenter);
          ui->TIM_Lb->setText(s+" ms");

       //Delete binary file
           system("rm -r /tmp/compile_code");

    }

    if(langage=="C++")
    {
        //Program compilation
        QProcess::execute("cp /tmp/code_file /tmp/code_file.cpp");
        QProcess::execute("g++ /tmp/code_file.cpp -o /tmp/compile_code");

        //chmod +x compile_code
            system("chmod +x /tmp/compile_code");
            if(!input.isEmpty())
            {
                // start time
                system("echo '' > /tmp/result.txt> ");
                QTime myTimer;
                myTimer.start();


                //Program execution
                system("cat /tmp/input.txt | /tmp/compile_code >> /tmp/result.txt 2>> /tmp/result.txt");

                // time of running
                 time = myTimer.elapsed();
            }

            else{

                // start time
                system("echo '' > /tmp/result.txt> ");
                QTime myTimer;
                myTimer.start();


                //Program execution
                system("/tmp/compile_code >> /tmp/result.txt 2>> /tmp/result.txt");

                // time of running
                 time = myTimer.elapsed();
            }


       //Delete binary file
           system("rm -r /tmp/compile_code");

           PrintResult();
                QString s = QString::number(time);
                ui->TIM_Lb->setAlignment(Qt::AlignCenter);
                ui->TIM_Lb->setText(s+" ms");

    }

    if(langage=="python2")
    {
        system("echo '' > /tmp/result.txt ");
    if(!input.isEmpty())
    {
        // start time
        QTime myTimer;
        myTimer.start();
        system("cat /tmp/input.txt | python2 /tmp/code_file >> /tmp/result.txt 2>> /tmp/result.txt");

        // time of running
       time = myTimer.elapsed();
    }

    else{

        // start time
        QTime myTimer;
        myTimer.start();
        system("python2 /tmp/code_file >> /tmp/result.txt 2>> /tmp/result.txt");

        // time of running
       time = myTimer.elapsed();
    }

        PrintResult();

        QString s = QString::number(time);
        ui->TIM_Lb->setAlignment(Qt::AlignCenter);
        ui->TIM_Lb->setText(s+" ms");

    }
    if(langage=="python3")
    {

        system("echo '' > /tmp/result.txt");
        if(!input.isEmpty())
        {
            // start time
            QTime myTimer;
            myTimer.start();

            //execution
            system("cat /tmp/input.txt | python3 /tmp/code_file >> /tmp/result.txt 2>> /tmp/result.txt ");
            // time of running
          time = myTimer.elapsed();
        }
        else
        {
            // start time
            QTime myTimer;
            myTimer.start();

            //execution
            system("python3 /tmp/code_file >> /tmp/result.txt 2>> /tmp/result.txt ");
            // time of running
          time = myTimer.elapsed();
        }
        PrintResult();

        QString s = QString::number(time);
        ui->TIM_Lb->setAlignment(Qt::AlignCenter);
        ui->TIM_Lb->setText(s+" ms");

    }
}


void MainWindow::on_INPUT_BRS_textChanged()
{
    system("echo '' > /tmp/input.txt ");
    QFile file("/tmp/input.txt" );
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << ui->INPUT_BRS->toPlainText();
    }
    file.close();

}

void MainWindow::on_SAVE_BTN_clicked()
{
    system("echo '' > /tmp/code_file ");
    QFile file( Code_file_name );
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << ui->CODE_BRS->toPlainText();
    }
    file.close();
}


void MainWindow::on_SAVE_FILE_BTN_clicked()
{
    QFile file( file_orig );
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << ui->CODE_BRS->toPlainText();
    }
    file.close();
}

