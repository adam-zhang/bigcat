#include <QObject>

class Database
{
public:
	Database(QObject* parent);
	virtual ~Database();
private:
	bool exists();
	void createDatabase();
	QList<QString> getCreatingStrings();
private:
	const QString databaseName = "stocks_info.db";

};
