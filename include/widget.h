#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDate>
#include <QMessageBox>
#include <QCalendarWidget>
#include <QVBoxLayout>

namespace Ui {
class Widget;
}

class Widget : public QDialog
{
    Q_OBJECT

public:
    explicit Widget(QDialog *parent = nullptr);
    QDate date;
    ~Widget();

private:
    Ui::Widget *ui;
    QCalendarWidget *calendarik;
    QVBoxLayout *VBL;

private slots:
    void slotChangeDate(QDate dat);

};

#endif // WIDGET_H
