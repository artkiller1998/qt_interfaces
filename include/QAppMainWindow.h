#ifndef QAPPMAINWINDOW_H
#define QAPPMAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QVector>
#include <QMouseEvent>
#include <QStatusBar>
#include <QFileDialog>

#include <qlabel.h>
#include <qmainwindow.h>
#include <qwidget.h>




namespace Ui {
class QAppMainWindow;
}

class QAppMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QAppMainWindow(QWidget *parent = nullptr);
    ~QAppMainWindow();


protected:
    virtual void mouseMoveEvent(QMouseEvent* pe)
    {
        m_relX->setText("Relative X=" + QString().setNum(pe->x()));
        m_relY->setText("Y=" + QString().setNum(pe->y()));

        m_glbX->setText("Global X=" + QString().setNum(pe->globalX()));
        m_glbY->setText("Y=" + QString().setNum(pe->globalY()));

    }


private slots:
    void on_action_9_triggered();

    void on_action_2_triggered();

    void on_action_5_triggered();

    void on_action_4_triggered();

    void on_action_7_triggered();

private:
    QLabel* m_relX;
    QLabel* m_relY;
    QLabel* m_glbX;
    QLabel* m_glbY;
    Ui::QAppMainWindow *ui;
};



#endif // QAPPMAINWINDOW_H
