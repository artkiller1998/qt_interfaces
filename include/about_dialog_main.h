#ifndef DIALOG_MAIN_H
#define DIALOG_MAIN_H

#include <QDialog>

namespace Ui {
class dialog_main;
}

class dialog_main : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_main(QWidget *parent = nullptr);
    ~dialog_main();

private slots:
    void on_pushButton_released();

private:
    Ui::dialog_main *ui;
};

#endif // DIALOG_MAIN_H
