#include "add_dialog_main.h"
#include "ui_add_dialog_main.h"
#include "widget.h"

add_dialog_main::add_dialog_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_dialog_main)
{
    ui->setupUi(this);
    ui->lineEdit_3->setInputMask("8-000-000-00-00");

    ui->pushButton->setMaximumWidth(65);

    connect(ui->pushButton, &QPushButton::clicked, [=]() {
        Widget wid;
        if (wid.exec() == QDialog::Accepted)
        {
            ui->lineEdit_4->setText(wid.date.toString("dd/MM/yyyy"));
        }

        });
    Qt::WindowFlags flags = windowFlags();	// ”yбрать "?"
    Qt::WindowFlags helpFlag = Qt::WindowContextHelpButtonHint;
    flags = flags & (~helpFlag);
    setWindowFlags(flags);

}

add_dialog_main::~add_dialog_main()
{
    delete ui;
}

