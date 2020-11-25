#ifndef ADD_DIALOG_MAIN_H
#define ADD_DIALOG_MAIN_H

#include <QDialog>
#include <qmainwindow.h>


namespace Ui {
class add_dialog_main;
}

class add_dialog_main : public QDialog
{
    Q_OBJECT

public:
    explicit add_dialog_main(QWidget *parent = nullptr);

     Ui::add_dialog_main *ui;


    ~add_dialog_main();

private slots:

private:

};


#endif // ADD_DIALOG_MAIN_H
