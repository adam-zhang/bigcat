#include <QtCore>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <iostream>

int main(int argc, char** argv)
{
	QCoreApplication app(argc, argv);
	QUrl url("http://hq.sinajs.cn/list=sh601006");
	QEventLoop loop;
	QNetworkAccessManager manager;
	QNetworkRequest request(url);
	QNetworkReply* reply = manager.get(request);
	QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
	loop.exec();

	QString content = reply->readAll();
	
	std::cout << content.toStdString();
	return 0;
}
