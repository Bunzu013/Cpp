#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Catalog.h"
#include "Car.h"
#include "Kraje.h"

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

Catalog c;

void MainWindow::on_button_show_all_clicked()
{
    ui->output->setPlainText(QString::fromStdString(c.showCars()));
}

void MainWindow::on_button_addCar_clicked()
{
    c.addCar(Car(ui->mark->text().toStdString(), ui->model->text().toStdString(), ui->year->text().toInt(), ui->nrVIN->text().toStdString()));
    on_button_show_all_clicked();
}


void MainWindow::on_button_older_clicked()
{
    ui->output->setText(QString::number(c.countOlder(ui->older->text().toInt())));
}


void MainWindow::on_button_remove_clicked()
{
    c.removeCar(ui->remove->text().toStdString());
    on_button_show_all_clicked();
}


void MainWindow::on_button_sortRok_clicked()
{
    ui->output->setPlainText(QString::fromStdString(c.showSortedByYearOfProduction()));
}


void MainWindow::on_button_sortMark_clicked()
{
    ui->output->setPlainText(QString::fromStdString(c.showSortedByMark()));
}

Kraje k;

void MainWindow::on_button_add_kraj_clicked()
{
    k.addKraj(ui->nazwa->text().toStdString(), ui->liczba->text().toInt());
    on_button_show_all_kraje_clicked();
}

void MainWindow::on_button_show_all_kraje_clicked()
{
    ui->output->setPlainText(QString::fromStdString(k.showKraje()));
}


void MainWindow::on_button_show_kraje_clicked()
{
    ui->output->setPlainText(QString::fromStdString(k.showOnlyKraje()));
}


void MainWindow::on_button_sort_rosn_clicked()
{
    ui->output->setPlainText(QString::fromStdString(k.showSorted(0)));
}


void MainWindow::on_button_sort_mal_clicked()
{
    ui->output->setPlainText(QString::fromStdString(k.showSorted(1)));
}


void MainWindow::on_button_find_clicked()
{
    ui->output->setPlainText(QString::fromStdString(k.showKrajeZakres(ui->zakres_od->text().toInt(), ui->zakres_do->text().toInt())));
}


void MainWindow::on_button_remove_kraj_clicked()
{
    k.remove(ui->remove_kraj->text().toStdString());
    on_button_show_all_kraje_clicked();
}

