#include "qappmainwindow.h"
#include "about_dialog_main.h"
#include "add_dialog_main.h"
#include "ui_qappmainwindow.h"
#include "ui_add_dialog_main.h"
#include "ui_qappmainwindow.h"


QAppMainWindow::QAppMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QAppMainWindow)
{
    ui->setupUi(this);

    QWidget * widget = new QWidget(this);
    QHBoxLayout * lay = new QHBoxLayout(widget);

    m_relX = new QLabel(widget);
    m_relY = new QLabel(widget);
    QLabel *spacer = new QLabel(widget);
    //lay->addStretch(1);
    lay->addWidget(m_relY);
    lay->addWidget(m_relX);
    lay->addWidget(spacer);

    m_glbX  = new QLabel(widget);
    m_glbY  = new QLabel(widget);
    lay->addWidget(m_glbY);
    lay->addWidget(m_glbX);

    ui->statusBar->addWidget(widget,0);
    ui->listWidget->setSizeAdjustPolicy(QListWidget::AdjustToContents);
    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

    setMouseTracking(true);
    ui->centralWidget->setMouseTracking(true);
    ui->listWidget->setMouseTracking(true);
    ui->tableWidget->setMouseTracking(true);
    ui->statusBar->setMouseTracking(true);
    ui->graphicsView->setMouseTracking(true);
    ui->menuBar->setMouseTracking(true);
    ui->mainToolBar->setMouseTracking(true);
}

QAppMainWindow::~QAppMainWindow()
{
    delete ui;
}

void QAppMainWindow::on_action_9_triggered()
{
    dialog_main dlg;
    dlg.setModal(true);
    dlg.exec();

}

void QAppMainWindow::on_action_2_triggered()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.exec();
}


void QAppMainWindow::on_action_5_triggered()
{
    add_dialog_main add_dlg(this);

    if (add_dlg.exec() == QDialog::Accepted)
    {

        try {

            ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
            ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1,
                                     0,
                                     new QTableWidgetItem(add_dlg.ui->lineEdit->text()));
            ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1,
                                     1,
                                     new QTableWidgetItem(add_dlg.ui->lineEdit_2->text()));
            ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1,
                                     2,
                                     new QTableWidgetItem(add_dlg.ui->lineEdit_3->text()));
            ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1,
                                     3,
                                     new QTableWidgetItem(add_dlg.ui->lineEdit_4->text()));
            ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1,
                                     4,
                                     new QTableWidgetItem(add_dlg.ui->spinBox->text()));
            ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1,
                                     5,
                                     new QTableWidgetItem( QString::number( add_dlg.ui->comboBox->currentIndex() +1)  ));
            ui->listWidget->addItem(add_dlg.ui->lineEdit_5->text());

        } catch (const std::exception& e) {
            std::printf("%s",e.what());
        }
    }
    else
    {
        //ui->label->setText("Canceled");
    }
    //add_dlg.exec();
}

void QAppMainWindow::on_action_4_triggered()
{
    close();
}

void QAppMainWindow::on_action_7_triggered()
{
    QModelIndexList selectedList = ui->listWidget->selectionModel()->selectedIndexes(); // take the list of selected indexes
    std::sort(selectedList.begin(),selectedList.end(),[](const QModelIndex& a, const QModelIndex& b)->bool{return a.row()>b.row();}); // sort from bottom to top
    for(const QModelIndex& singleIndex : selectedList)
    {
        ui->listWidget->model()->removeRow(singleIndex.row()); // remove each row
        ui->tableWidget->removeRow(singleIndex.row());
    }
}
