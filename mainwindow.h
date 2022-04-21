#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPushButton* okbtn;
    QString input,file_orig;
    QString Code_file_name,input_file,compile_file,copie_file;
    QPlainTextEdit* Standart_input;
    QWidget* Input_widget;
    int time;
    void ErrorPrinter(int sts);
    void PrintResult(void);

private slots:
    void on_FILE_BTN_clicked();

    void on_INPUT_FILE_BTN_clicked();

    void on_RUN_BTN_clicked();

    void on_INPUT_BRS_textChanged();

    void on_SAVE_BTN_clicked();

    void on_SAVE_FILE_BTN_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
