/********************************************************************************
** Form generated from reading UI file 'qappmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QAPPMAINWINDOW_H
#define UI_QAPPMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QAppMainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QListWidget *listWidget;
    QSplitter *splitter;
    QGraphicsView *graphicsView;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QAppMainWindow)
    {
        if (QAppMainWindow->objectName().isEmpty())
            QAppMainWindow->setObjectName(QStringLiteral("QAppMainWindow"));
        QAppMainWindow->resize(1000, 291);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QAppMainWindow->sizePolicy().hasHeightForWidth());
        QAppMainWindow->setSizePolicy(sizePolicy);
        QAppMainWindow->setMinimumSize(QSize(1000, 0));
        QAppMainWindow->setBaseSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/w512h5121380477032search.png"), QSize(), QIcon::Normal, QIcon::Off);
        QAppMainWindow->setWindowIcon(icon);
        action = new QAction(QAppMainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/add-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        action_2 = new QAction(QAppMainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/img/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon2);
        action_3 = new QAction(QAppMainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon3);
        action_4 = new QAction(QAppMainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/img/100639.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon4);
        action_5 = new QAction(QAppMainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/img/User-Interface-Plus-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon5);
        action_6 = new QAction(QAppMainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/img/unnamed.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon6);
        action_7 = new QAction(QAppMainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/img/file_018-delete_file-text-document-doc-remove-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon7);
        action_8 = new QAction(QAppMainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/img/kisspng-globe-computer-icons-globe-black-and-white-5b21c3f7d39ec8.6324961515289395118668.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_8->setIcon(icon8);
        action_9 = new QAction(QAppMainWindow);
        action_9->setObjectName(QStringLiteral("action_9"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/img/1200px-Info_icon-72a7cf.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_9->setIcon(icon9);
        centralWidget = new QWidget(QAppMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(splitter_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(100, 0));
        listWidget->setMaximumSize(QSize(400, 16777215));
        listWidget->setSizeIncrement(QSize(0, 0));
        listWidget->setBaseSize(QSize(0, 0));
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listWidget->setUniformItemSizes(false);
        listWidget->setBatchSize(100);
        splitter_2->addWidget(listWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        graphicsView = new QGraphicsView(splitter);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy2);
        graphicsView->setMinimumSize(QSize(29, 0));
        splitter->addWidget(graphicsView);
        tableWidget = new QTableWidget(splitter);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setMinimumSize(QSize(565, 0));
        splitter->addWidget(tableWidget);
        splitter_2->addWidget(splitter);

        verticalLayout->addWidget(splitter_2);

        QAppMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QAppMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        QAppMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QAppMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy3);
        mainToolBar->setBaseSize(QSize(0, 133));
        mainToolBar->setMovable(false);
        QAppMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QAppMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setLayoutDirection(Qt::RightToLeft);
        QAppMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_2->addAction(action_7);
        menu_3->addAction(action_8);
        menu_3->addAction(action_9);
        mainToolBar->addAction(action);
        mainToolBar->addAction(action_2);
        mainToolBar->addAction(action_3);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_5);
        mainToolBar->addAction(action_6);
        mainToolBar->addAction(action_7);

        retranslateUi(QAppMainWindow);

        QMetaObject::connectSlotsByName(QAppMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QAppMainWindow)
    {
        QAppMainWindow->setWindowTitle(QApplication::translate("QAppMainWindow", "\320\230\320\267\321\203\321\207\320\265\320\275\320\270\320\265 \320\276\320\261\321\212\320\265\321\202\320\276\320\262", Q_NULLPTR));
        action->setText(QApplication::translate("QAppMainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("QAppMainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_2->setText(QApplication::translate("QAppMainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_2->setShortcut(QApplication::translate("QAppMainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_3->setText(QApplication::translate("QAppMainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("QAppMainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_4->setText(QApplication::translate("QAppMainWindow", "\320\222\321\213\320\271\321\202\320\270", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_4->setShortcut(QApplication::translate("QAppMainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_5->setText(QApplication::translate("QAppMainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_5->setShortcut(QApplication::translate("QAppMainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_6->setText(QApplication::translate("QAppMainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_6->setShortcut(QApplication::translate("QAppMainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_7->setText(QApplication::translate("QAppMainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_7->setShortcut(QApplication::translate("QAppMainWindow", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_8->setText(QApplication::translate("QAppMainWindow", "\320\236\320\261\320\267\320\276\321\200", Q_NULLPTR));
        action_9->setText(QApplication::translate("QAppMainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QAppMainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QAppMainWindow", "\320\230\320\274\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QAppMainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QAppMainWindow", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QAppMainWindow", "\320\222\320\265\321\201 \321\202\320\276\320\262\320\260\321\200\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QAppMainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        menu->setTitle(QApplication::translate("QAppMainWindow", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("QAppMainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("QAppMainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QAppMainWindow: public Ui_QAppMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAPPMAINWINDOW_H
