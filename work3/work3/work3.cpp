#include "work3.h"

work3::work3(QWidget *parent)
	: QWidget(parent)
{
	QGridLayout *grid = new QGridLayout;
	grid->addWidget(box1(), 0, 0);
	grid->addWidget(box2(), 0, 1);
	this->setLayout(grid);
}

QGroupBox *work3::box1()
{
	QGroupBox *box = new QGroupBox("label_");
	QLabel *label_ = new QLabel(QString::fromLocal8Bit("输出A"));
	QPushButton *btn_a = new QPushButton(QString::fromLocal8Bit("点击输出A"));
	QVBoxLayout *vlayout = new QVBoxLayout;
	connect(btn_a, &QPushButton::clicked, [=]()
	{
		label_->setText("A");
	});
	vlayout->addWidget(label_);
	vlayout->addWidget(btn_a);
	box->setLayout(vlayout);
	return box;
}

QGroupBox *work3::box2()
{
	QGroupBox *box = new QGroupBox("label_");
	QLabel *label_ = new QLabel(QString::fromLocal8Bit("输出B"));
	QPushButton *btn_b = new QPushButton(QString::fromLocal8Bit("点击输出B"));
	QVBoxLayout *vlayout = new QVBoxLayout;
	connect(btn_b, &QPushButton::clicked, [=]()
	{
		label_->setText("B");
	});
	vlayout->addWidget(label_);
	vlayout->addWidget(btn_b);
	box->setLayout(vlayout);
	return box;
}



