/********************************************************************************
** Form generated from reading UI file 'add_dialog_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DIALOG_MAIN_H
#define UI_ADD_DIALOG_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_dialog_main
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *add_dialog_main)
    {
        if (add_dialog_main->objectName().isEmpty())
            add_dialog_main->setObjectName(QStringLiteral("add_dialog_main"));
        add_dialog_main->resize(400, 215);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_dialog_main->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(add_dialog_main);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox_2 = new QDialogButtonBox(add_dialog_main);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox_2->setCenterButtons(true);

        gridLayout->addWidget(buttonBox_2, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(add_dialog_main);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(add_dialog_main);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(add_dialog_main);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(add_dialog_main);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_5 = new QLabel(add_dialog_main);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(10);
        label_5->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(add_dialog_main);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_7 = new QLabel(add_dialog_main);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        label_3 = new QLabel(add_dialog_main);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        spinBox = new QSpinBox(add_dialog_main);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox);

        label_4 = new QLabel(add_dialog_main);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(add_dialog_main);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox);

        label_6 = new QLabel(add_dialog_main);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        lineEdit_5 = new QLineEdit(add_dialog_main);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(add_dialog_main);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/earth-globe-world-icon-3d-earth.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);

        lineEdit_4 = new QLineEdit(add_dialog_main);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(add_dialog_main);
        QObject::connect(buttonBox_2, SIGNAL(accepted()), add_dialog_main, SLOT(accept()));
        QObject::connect(buttonBox_2, SIGNAL(rejected()), add_dialog_main, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_dialog_main);
    } // setupUi

    void retranslateUi(QDialog *add_dialog_main)
    {
        add_dialog_main->setWindowTitle(QApplication::translate("add_dialog_main", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \320\276\320\261\321\212\320\265\320\272\321\202", Q_NULLPTR));
        label->setText(QApplication::translate("add_dialog_main", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_dialog_main", "\320\230\320\274\321\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_dialog_main", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", Q_NULLPTR));
        lineEdit_3->setInputMask(QString());
        label_7->setText(QApplication::translate("add_dialog_main", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\270", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_dialog_main", "\320\222\320\265\321\201 \321\202\320\276\320\262\320\260\321\200\320\260 (\320\272\320\263)", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_dialog_main", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\260", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("add_dialog_main", "1", Q_NULLPTR)
         << QApplication::translate("add_dialog_main", "2", Q_NULLPTR)
         << QApplication::translate("add_dialog_main", "3", Q_NULLPTR)
         << QApplication::translate("add_dialog_main", "4", Q_NULLPTR)
         << QApplication::translate("add_dialog_main", "5", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("add_dialog_main", "\320\230\320\274\321\217 \320\276\320\261\321\212\320\265\320\272\321\202\320\260", Q_NULLPTR));
        lineEdit_5->setText(QString());
        pushButton->setText(QApplication::translate("add_dialog_main", "Set", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_dialog_main: public Ui_add_dialog_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DIALOG_MAIN_H
