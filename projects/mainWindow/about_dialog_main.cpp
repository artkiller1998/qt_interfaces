#include "about_dialog_main.h"
#include "ui_about_dialog_main.h"


dialog_main::dialog_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_main)
{
    ui->setupUi(this);

}

dialog_main::~dialog_main()
{
    delete ui;
}

void dialog_main::on_pushButton_released()
{
    close();
}
