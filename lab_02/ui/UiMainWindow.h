/********************************************************************************
** Form generated from reading UI file 'design.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DESIGN_H
#define DESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *root;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *plot;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *center_l;
    QLabel *center_coord_data;
    QFrame *movement_frame;
    QGridLayout *gridLayout;
    QLabel *movement_y_l;
    QLabel *movement_label;
    QPushButton *movevemt_apply;
    QLabel *movement_x_l;
    QDoubleSpinBox *movement_y;
    QDoubleSpinBox *movement_x;
    QFrame *rotation_frame;
    QGridLayout *gridLayout_2;
    QPushButton *rotation_apply;
    QLabel *rotation_x_l;
    QDoubleSpinBox *rotation_x;
    QLabel *rotation_y_l;
    QLabel *rotation_angle_l;
    QLabel *rotation_label;
    QDoubleSpinBox *rotation_angle;
    QDoubleSpinBox *rotation_y;
    QFrame *resizing_frame;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *resizing_x;
    QLabel *resizing_label;
    QPushButton *resizing_apply;
    QDoubleSpinBox *resizing_ky;
    QLabel *resizing_y_l;
    QLabel *resizing_kx_l;
    QDoubleSpinBox *resizing_y;
    QLabel *resizing_x_l;
    QDoubleSpinBox *resizing_kx;
    QLabel *resizing_ky_l;
    QPushButton *step_forward_apply;
    QPushButton *step_backward_apply;
    QPushButton *reset_apply;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(826, 735);
        MainWindow->setMinimumSize(QSize(826, 0));
        MainWindow->setMaximumSize(QSize(826, 16777215));
        MainWindow->setDockNestingEnabled(true);
        root = new QWidget(MainWindow);
        root->setObjectName(QString::fromUtf8("root"));
        horizontalLayout = new QHBoxLayout(root);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        plot = new QCustomPlot(root);
        QSizePolicy sizePolicy0(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy0.setHorizontalStretch(0);
        sizePolicy0.setVerticalStretch(0);
        sizePolicy0.setHeightForWidth(plot->sizePolicy().hasHeightForWidth());
        plot->setSizePolicy(sizePolicy0);
        plot->setObjectName(QString::fromUtf8("canvas"));
        QFont font;
        font.setPointSize(10);
        plot->setFont(font);

        horizontalLayout->addWidget(plot);

        frame = new QFrame(root);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        center_l = new QLabel(frame);
        center_l->setObjectName(QString::fromUtf8("center_l"));

        verticalLayout->addWidget(center_l);

        center_coord_data = new QLabel(frame);
        center_coord_data->setObjectName(QString::fromUtf8("center_coord_data"));

        verticalLayout->addWidget(center_coord_data);

        movement_frame = new QFrame(frame);
        movement_frame->setObjectName(QString::fromUtf8("movement_frame"));
        movement_frame->setFont(font);
        movement_frame->setFrameShape(QFrame::StyledPanel);
        movement_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(movement_frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        movement_y_l = new QLabel(movement_frame);
        movement_y_l->setObjectName(QString::fromUtf8("movement_y_l"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(movement_y_l->sizePolicy().hasHeightForWidth());
        movement_y_l->setSizePolicy(sizePolicy1);
        movement_y_l->setFont(font);

        gridLayout->addWidget(movement_y_l, 3, 0, 1, 1);

        movement_label = new QLabel(movement_frame);
        movement_label->setObjectName(QString::fromUtf8("movement_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(movement_label->sizePolicy().hasHeightForWidth());
        movement_label->setSizePolicy(sizePolicy2);
        movement_label->setFont(font);

        gridLayout->addWidget(movement_label, 0, 0, 1, 2);

        movevemt_apply = new QPushButton(movement_frame);
        movevemt_apply->setObjectName(QString::fromUtf8("movevemt_apply"));
        movevemt_apply->setFont(font);

        gridLayout->addWidget(movevemt_apply, 4, 0, 1, 2);

        movement_x_l = new QLabel(movement_frame);
        movement_x_l->setObjectName(QString::fromUtf8("movement_x_l"));
        sizePolicy1.setHeightForWidth(movement_x_l->sizePolicy().hasHeightForWidth());
        movement_x_l->setSizePolicy(sizePolicy1);
        movement_x_l->setFont(font);

        gridLayout->addWidget(movement_x_l, 1, 0, 1, 1);

        movement_y = new QDoubleSpinBox(movement_frame);
        movement_y->setObjectName(QString::fromUtf8("movement_y"));
        movement_y->setFont(font);
        movement_y->setMinimum(-10000.000000000000000);
        movement_y->setMaximum(10000.000000000000000);

        gridLayout->addWidget(movement_y, 3, 1, 1, 1);

        movement_x = new QDoubleSpinBox(movement_frame);
        movement_x->setObjectName(QString::fromUtf8("movement_x"));
        movement_x->setFont(font);
        movement_x->setMinimum(-10000.000000000000000);
        movement_x->setMaximum(10000.000000000000000);

        gridLayout->addWidget(movement_x, 1, 1, 1, 1);


        verticalLayout->addWidget(movement_frame);

        rotation_frame = new QFrame(frame);
        rotation_frame->setObjectName(QString::fromUtf8("rotation_frame"));
        rotation_frame->setFont(font);
        rotation_frame->setFrameShape(QFrame::StyledPanel);
        rotation_frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(rotation_frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rotation_apply = new QPushButton(rotation_frame);
        rotation_apply->setObjectName(QString::fromUtf8("rotation_apply"));
        rotation_apply->setFont(font);

        gridLayout_2->addWidget(rotation_apply, 4, 0, 1, 2);

        rotation_x_l = new QLabel(rotation_frame);
        rotation_x_l->setObjectName(QString::fromUtf8("rotation_x_l"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rotation_x_l->sizePolicy().hasHeightForWidth());
        rotation_x_l->setSizePolicy(sizePolicy3);
        rotation_x_l->setFont(font);

        gridLayout_2->addWidget(rotation_x_l, 1, 0, 1, 1);

        rotation_x = new QDoubleSpinBox(rotation_frame);
        rotation_x->setObjectName(QString::fromUtf8("rotation_x"));
        rotation_x->setFont(font);
        rotation_x->setMinimum(-10000.000000000000000);
        rotation_x->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(rotation_x, 1, 1, 1, 1);

        rotation_y_l = new QLabel(rotation_frame);
        rotation_y_l->setObjectName(QString::fromUtf8("rotation_y_l"));
        sizePolicy3.setHeightForWidth(rotation_y_l->sizePolicy().hasHeightForWidth());
        rotation_y_l->setSizePolicy(sizePolicy3);
        rotation_y_l->setFont(font);

        gridLayout_2->addWidget(rotation_y_l, 2, 0, 1, 1);

        rotation_angle_l = new QLabel(rotation_frame);
        rotation_angle_l->setObjectName(QString::fromUtf8("rotation_angle_l"));
        sizePolicy2.setHeightForWidth(rotation_angle_l->sizePolicy().hasHeightForWidth());
        rotation_angle_l->setSizePolicy(sizePolicy2);
        rotation_angle_l->setFont(font);

        gridLayout_2->addWidget(rotation_angle_l, 3, 0, 1, 1);

        rotation_label = new QLabel(rotation_frame);
        rotation_label->setObjectName(QString::fromUtf8("rotation_label"));
        sizePolicy2.setHeightForWidth(rotation_label->sizePolicy().hasHeightForWidth());
        rotation_label->setSizePolicy(sizePolicy2);
        rotation_label->setFont(font);

        gridLayout_2->addWidget(rotation_label, 0, 0, 1, 2);

        rotation_angle = new QDoubleSpinBox(rotation_frame);
        rotation_angle->setObjectName(QString::fromUtf8("rotation_angle"));
        rotation_angle->setFont(font);
        rotation_angle->setMinimum(-10000.000000000000000);
        rotation_angle->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(rotation_angle, 3, 1, 1, 1);

        rotation_y = new QDoubleSpinBox(rotation_frame);
        rotation_y->setObjectName(QString::fromUtf8("rotation_y"));
        rotation_y->setFont(font);
        rotation_y->setMinimum(-10000.000000000000000);
        rotation_y->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(rotation_y, 2, 1, 1, 1);


        verticalLayout->addWidget(rotation_frame);

        resizing_frame = new QFrame(frame);
        resizing_frame->setObjectName(QString::fromUtf8("resizing_frame"));
        resizing_frame->setFont(font);
        resizing_frame->setFrameShape(QFrame::StyledPanel);
        resizing_frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(resizing_frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        resizing_x = new QDoubleSpinBox(resizing_frame);
        resizing_x->setObjectName(QString::fromUtf8("resizing_x"));
        resizing_x->setFont(font);
        resizing_x->setMinimum(-10000.000000000000000);
        resizing_x->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(resizing_x, 1, 1, 1, 1);

        resizing_label = new QLabel(resizing_frame);
        resizing_label->setObjectName(QString::fromUtf8("resizing_label"));
        sizePolicy2.setHeightForWidth(resizing_label->sizePolicy().hasHeightForWidth());
        resizing_label->setSizePolicy(sizePolicy2);
        resizing_label->setFont(font);

        gridLayout_3->addWidget(resizing_label, 0, 0, 1, 2);

        resizing_apply = new QPushButton(resizing_frame);
        resizing_apply->setObjectName(QString::fromUtf8("resizing_apply"));
        resizing_apply->setFont(font);

        gridLayout_3->addWidget(resizing_apply, 5, 0, 1, 2);

        resizing_ky = new QDoubleSpinBox(resizing_frame);
        resizing_ky->setObjectName(QString::fromUtf8("resizing_ky"));
        resizing_ky->setFont(font);
        resizing_ky->setMinimum(-10000.000000000000000);
        resizing_ky->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(resizing_ky, 4, 1, 1, 1);

        resizing_y_l = new QLabel(resizing_frame);
        resizing_y_l->setObjectName(QString::fromUtf8("resizing_y_l"));
        sizePolicy.setHeightForWidth(resizing_y_l->sizePolicy().hasHeightForWidth());
        resizing_y_l->setSizePolicy(sizePolicy);
        resizing_y_l->setFont(font);

        gridLayout_3->addWidget(resizing_y_l, 2, 0, 1, 1);

        resizing_kx_l = new QLabel(resizing_frame);
        resizing_kx_l->setObjectName(QString::fromUtf8("resizing_kx_l"));
        sizePolicy.setHeightForWidth(resizing_kx_l->sizePolicy().hasHeightForWidth());
        resizing_kx_l->setSizePolicy(sizePolicy);
        resizing_kx_l->setFont(font);

        gridLayout_3->addWidget(resizing_kx_l, 3, 0, 1, 1);

        resizing_y = new QDoubleSpinBox(resizing_frame);
        resizing_y->setObjectName(QString::fromUtf8("resizing_y"));
        resizing_y->setFont(font);
        resizing_y->setMinimum(-10000.000000000000000);
        resizing_y->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(resizing_y, 2, 1, 1, 1);

        resizing_x_l = new QLabel(resizing_frame);
        resizing_x_l->setObjectName(QString::fromUtf8("resizing_x_l"));
        sizePolicy.setHeightForWidth(resizing_x_l->sizePolicy().hasHeightForWidth());
        resizing_x_l->setSizePolicy(sizePolicy);
        resizing_x_l->setFont(font);

        gridLayout_3->addWidget(resizing_x_l, 1, 0, 1, 1);

        resizing_kx = new QDoubleSpinBox(resizing_frame);
        resizing_kx->setObjectName(QString::fromUtf8("resizing_kx"));
        resizing_kx->setFont(font);
        resizing_kx->setMinimum(-10000.000000000000000);
        resizing_kx->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(resizing_kx, 3, 1, 1, 1);

        resizing_ky_l = new QLabel(resizing_frame);
        resizing_ky_l->setObjectName(QString::fromUtf8("resizing_ky_l"));
        sizePolicy.setHeightForWidth(resizing_ky_l->sizePolicy().hasHeightForWidth());
        resizing_ky_l->setSizePolicy(sizePolicy);
        resizing_ky_l->setFont(font);

        gridLayout_3->addWidget(resizing_ky_l, 4, 0, 1, 1);


        verticalLayout->addWidget(resizing_frame);

        step_forward_apply = new QPushButton(frame);
        step_forward_apply->setObjectName(QString::fromUtf8("step_forward_apply"));

        verticalLayout->addWidget(step_forward_apply);

        step_backward_apply = new QPushButton(frame);
        step_backward_apply->setObjectName(QString::fromUtf8("step_backward_apply"));

        verticalLayout->addWidget(step_backward_apply);

        reset_apply = new QPushButton(frame);
        reset_apply->setObjectName(QString::fromUtf8("rese_apply"));

        verticalLayout->addWidget(reset_apply);


        horizontalLayout->addWidget(frame, 0, Qt::AlignHCenter|Qt::AlignTop);

        MainWindow->setCentralWidget(root);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 826, 23));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 1", nullptr));
        center_l->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \321\204\320\270\320\263\321\203\321\200\321\213", nullptr));
        center_coord_data->setText(QString());
        movement_y_l->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        movement_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\321\211\320\265\320\274\320\265\320\275\320\270\320\265", nullptr));
        movevemt_apply->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        movement_x_l->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        rotation_apply->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        rotation_x_l->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        rotation_y_l->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        rotation_angle_l->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        rotation_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        resizing_label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        resizing_apply->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        resizing_y_l->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        resizing_kx_l->setText(QCoreApplication::translate("MainWindow", "Kx", nullptr));
        resizing_x_l->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        resizing_ky_l->setText(QCoreApplication::translate("MainWindow", "Ky", nullptr));
        step_forward_apply->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \320\262\320\277\320\265\321\200\320\265\320\264", nullptr));
        step_backward_apply->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \320\275\320\260\320\267\320\260\320\264", nullptr));
        reset_apply->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGN_H
