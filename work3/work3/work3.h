#pragma once

#include <QtWidgets/QWidget>
#include "qlabel.h"
#include "qpushbutton.h"
#include "qgroupbox.h"
#include "qgridlayout.h"
#include <QHBoxLayout>  // ˮƽ����
#include <QVBoxLayout>  // ��ֱ����


class work3 : public QWidget
{
	Q_OBJECT

public:
	work3(QWidget *parent = Q_NULLPTR);
	QGroupBox *box1();
	QGroupBox *box2();
};
