#include "widget.h"
#include "ui_widget.h"
#include "add_dialog_main.h"

Widget::Widget(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    calendarik = new QCalendarWidget();
    VBL = new QVBoxLayout();
    VBL->addWidget(calendarik);
    QObject::connect(calendarik,SIGNAL(clicked(QDate)), this , SLOT(slotChangeDate(QDate)));

    setLayout(VBL);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotChangeDate(QDate dat)
{
    date = dat; // переменная dat получила необходимые значения из виджета календаря при активации сигнала
    QMessageBox::information(this,"",dat.toString("dd/MM/yyyy")); // вот какие значения поступили в переменную dat
    accept();
}



\
