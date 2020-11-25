/********************************************************************************
** Form generated from reading UI file 'about_dialog_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_MAIN_H
#define UI_ABOUT_DIALOG_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialog_main
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *dialog_main)
    {
        if (dialog_main->objectName().isEmpty())
            dialog_main->setObjectName(QStringLiteral("dialog_main"));
        dialog_main->resize(292, 233);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/1200px-Info_icon-72a7cf.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialog_main->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(dialog_main);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(dialog_main);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/img/Creative_Team-512 (1).png")));

        verticalLayout->addWidget(label_2);

        label = new QLabel(dialog_main);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(dialog_main);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(dialog_main);

        QMetaObject::connectSlotsByName(dialog_main);
    } // setupUi

    void retranslateUi(QDialog *dialog_main)
    {
        dialog_main->setWindowTitle(QApplication::translate("dialog_main", "\320\236 \320\275\320\260\321\201", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("dialog_main", "<html><head/><body><p align=\"center\"><span style=\" color:#000000;\">\320\234\321\213 \320\275\320\265\321\201\321\221\320\274 \320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\265\320\275\320\275\320\276\321\201\321\202\321\214 \320\267\320\260 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\265 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \320\262\321\213\321\201\320\276\320\272\320\270\320\274 </span></p><p align=\"center\"><span style=\" color:#000000;\">\321\202\321\200\320\265\320\261\320\276\320\262\320\260\320\275\320\270\321\217\320\274 \320\272\320\276\320\275\321\204\320\270\320\264\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270, \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270 \320\270 \320\272\320\260\321\207\320\265\321\201\321\202\320\262\320\260"
                        " \320\272\320\276\320\275\321\202\320\265\320\275\321\202\320\260. </span></p><p align=\"center\"><span style=\" color:#000000;\">\320\237\320\276\321\202\320\276\320\274\321\203 \321\207\321\202\320\276 \320\264\320\273\321\217 \320\275\320\260\321\201 \320\275\320\265\321\202 \320\275\320\270\321\207\320\265\320\263\320\276 \320\262\320\260\320\266\320\275\320\265\320\265, \321\207\320\265\320\274 \320\264\320\276\320\262\320\265\321\200\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271.</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dialog_main", "\320\236\320\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialog_main: public Ui_dialog_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_MAIN_H
