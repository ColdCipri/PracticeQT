/********************************************************************************
** Form generated from reading UI file 'PracticeQT.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICEQT_H
#define UI_PRACTICEQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PracticeQTClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *description;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTextEdit *act;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *accept;
    QPushButton *update;
    QPushButton *save;

    void setupUi(QWidget *PracticeQTClass)
    {
        if (PracticeQTClass->objectName().isEmpty())
            PracticeQTClass->setObjectName(QString::fromUtf8("PracticeQTClass"));
        PracticeQTClass->resize(640, 651);
        layoutWidget = new QWidget(PracticeQTClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 621, 633));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(label);

        description = new QTextEdit(layoutWidget);
        description->setObjectName(QString::fromUtf8("description"));
        description->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(description);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(label_2);

        act = new QTextEdit(layoutWidget);
        act->setObjectName(QString::fromUtf8("act"));
        act->setEnabled(true);
        act->setMaximumSize(QSize(595, 25));

        horizontalLayout_3->addWidget(act);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(layoutWidget);
        add->setObjectName(QString::fromUtf8("add"));

        horizontalLayout->addWidget(add);

        accept = new QPushButton(layoutWidget);
        accept->setObjectName(QString::fromUtf8("accept"));

        horizontalLayout->addWidget(accept);

        update = new QPushButton(layoutWidget);
        update->setObjectName(QString::fromUtf8("update"));

        horizontalLayout->addWidget(update);

        save = new QPushButton(layoutWidget);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout->addWidget(save);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(PracticeQTClass);

        QMetaObject::connectSlotsByName(PracticeQTClass);
    } // setupUi

    void retranslateUi(QWidget *PracticeQTClass)
    {
        PracticeQTClass->setWindowTitle(QApplication::translate("PracticeQTClass", "PracticeQT", nullptr));
        label->setText(QApplication::translate("PracticeQTClass", "Description", nullptr));
        label_2->setText(QApplication::translate("PracticeQTClass", "Act", nullptr));
        add->setText(QApplication::translate("PracticeQTClass", "Add", nullptr));
        accept->setText(QApplication::translate("PracticeQTClass", "Accept Idea", nullptr));
        update->setText(QApplication::translate("PracticeQTClass", "Update", nullptr));
        save->setText(QApplication::translate("PracticeQTClass", "Save Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PracticeQTClass: public Ui_PracticeQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICEQT_H
