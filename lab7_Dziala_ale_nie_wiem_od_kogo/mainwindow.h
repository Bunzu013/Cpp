#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_show_all_clicked();

    void on_button_addCar_clicked();

    void on_button_older_clicked();

    void on_button_remove_clicked();

    void on_button_sortRok_clicked();

    void on_button_sortMark_clicked();

    void on_button_add_kraj_clicked();

    void on_button_show_all_kraje_clicked();

    void on_button_show_kraje_clicked();

    void on_button_sort_rosn_clicked();

    void on_button_sort_mal_clicked();

    void on_button_find_clicked();

    void on_button_remove_kraj_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
