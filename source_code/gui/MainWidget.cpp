#include "MainWidget.h"

MainWidget::MainWidget(QWidget* parent)
{
	fillBackground();
}

MainWidget::~MainWidget()
{

}

void MainWidget::paintEvent(QPaintEvent* event)
{
}

void MainWidget::fillBackground()
{
	QPalette palette;
	palette.setBrush(QPalette::Background, QBrush(Qt::black));
	setPalette(palette);
	setAutoFillBackground(true);
}
