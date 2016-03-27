#include "MainWindow.h"
#include "MainWidget.h"

MainWindow::MainWindow(QWidget* parent)
{
	setWindowState(Qt::WindowMaximized);
	setCentralWidget(new MainWidget(this));
}
