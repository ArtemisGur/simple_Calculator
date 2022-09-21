#include "mainwindow.h"
#include "ui_mainwindow.h"

double firstNum;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_dev->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_equal->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setButtonSetting()
{
    ui->pushButton_1->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_2->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_4->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_7->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_8->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_comma->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_0->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: LightGrey}");
    ui->pushButton_equal->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: gray}");
    ui->pushButton_plus->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: orange}");
    ui->pushButton_minus->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: orange}");
    ui->pushButton_multiply->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: orange}");
    ui->pushButton_dev->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: orange}");
    ui->pushButton_percent->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: orange}");
    ui->pushButton_clear->setStyleSheet("QPushButton{font-size: 26px; font-family: Arial; background-color: orange}");
}

void MainWindow::setStringAnswer()
{
    ui->strAns->setStyleSheet("QLabel{qproperty-alignment: 'AlignVCenter | AlignRight'; font-size: 44px;}");
}


void MainWindow::on_pushButton_9_clicked()
{
    answer->push_back("9");
    ui->strAns->setText(*answer);
}

void MainWindow::on_pushButton_8_clicked()
{
    answer->push_back("8");
    ui->strAns->setText(*answer);
}

void MainWindow::on_pushButton_7_clicked()
{
    answer->push_back("7");
    ui->strAns->setText(*answer);
}

void MainWindow::on_pushButton_6_clicked()
{
    answer->push_back("6");
    ui->strAns->setText(*answer);
}
void MainWindow::on_pushButton_5_clicked()
{
    answer->push_back("5");
    ui->strAns->setText(*answer);
}
void MainWindow::on_pushButton_4_clicked()
{
    answer->push_back("4");
    ui->strAns->setText(*answer);
}
void MainWindow::on_pushButton_3_clicked()
{
    answer->push_back("3");
    ui->strAns->setText(*answer);
}
void MainWindow::on_pushButton_2_clicked()
{
    answer->push_back("2");
    ui->strAns->setText(*answer);
}
void MainWindow::on_pushButton_1_clicked()
{
    answer->push_back("1");
    ui->strAns->setText(*answer);
}
void MainWindow::on_pushButton_0_clicked()
{
    answer->push_back("0");
    ui->strAns->setText(*answer);
}
void MainWindow::on_pushButton_comma_clicked()
{
    if (!answer->contains(","))
    {
        answer->push_back(",");
        ui->strAns->setText(*answer);
    }
}

void MainWindow::on_pushButton_percent_clicked()
{
    double numbers;
    numbers = (ui->strAns->text().toDouble());
    numbers = numbers * 0.01;
    *answer = QString::number(numbers);

    ui->strAns->setText(*answer);
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->strAns->setText("0");
    firstNum = 0;
    answer->clear();
}

void MainWindow::on_pushButton_plus_clicked()
{
    ui->pushButton_plus->setChecked(true);
    firstNum = ui->strAns->text().toDouble();
    ui->strAns->clear();
    answer->clear();
}
void MainWindow::on_pushButton_minus_clicked()
{
    ui->pushButton_minus->setChecked(true);
    firstNum = ui->strAns->text().toDouble();
    ui->strAns->clear();
    answer->clear();
}
void MainWindow::on_pushButton_multiply_clicked()
{
    ui->pushButton_multiply->setChecked(true);
    firstNum = ui->strAns->text().toDouble();
    ui->strAns->clear();
    answer->clear();
}
void MainWindow::on_pushButton_dev_clicked()
{
    ui->pushButton_dev->setChecked(true);
    firstNum = ui->strAns->text().toDouble();
    ui->strAns->clear();
    answer->clear();
}

void MainWindow::on_pushButton_equal_clicked()
{
    double laberNumber, secNum;
    secNum = ui->strAns->text().toDouble();

    if (ui->pushButton_plus->isChecked())
    {
        laberNumber = firstNum + secNum;
        *answer = QString::number(laberNumber);
        ui->strAns->setText(*answer);
        ui->pushButton_plus->setChecked(false);
    }
    if (ui->pushButton_minus->isChecked())
    {
        laberNumber = firstNum - secNum;
        *answer = QString::number(laberNumber);
        ui->strAns->setText(*answer);
        ui->pushButton_minus->setChecked(false);
    }
    if (ui->pushButton_dev->isChecked())
    {
        laberNumber = firstNum / secNum;
        *answer = QString::number(laberNumber);
        ui->strAns->setText(*answer);
        ui->pushButton_dev->setChecked(false);
    }
    if (ui->pushButton_multiply->isChecked())
    {
        laberNumber = firstNum * secNum;
        *answer = QString::number(laberNumber);
        ui->strAns->setText(*answer);
        ui->pushButton_multiply->setChecked(false);
    }
    ui->pushButton_equal->setChecked(true);
}
