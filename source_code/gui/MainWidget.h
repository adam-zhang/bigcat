#include <QWidget>

class MainWidget : public QWidget
{
public:
	MainWidget(QWidget* parent);
	virtual ~MainWidget();
public:
	void paintEvent(QPaintEvent* event);
private:
	void fillBackground();

public:
	enum OperatingStatus
	{
		Moving,
		Operating,
	};

public:

};
