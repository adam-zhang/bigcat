#include "database.h"

Database::Database(QObject* parent)
{
	if (!exists())	
		createDatabase();
}

bool Database::exists()
{
	QFile file(databaseName);
	return file.exists();
}

void Database::createDatabase()
{
	QList<QString> list = getCreatingStrings();
}

QList<QString> Database::getCreatingStrings()
{
	QList<QString> list;
	list.push_back("create table stocks_list"
			"(id binary(16),"
			"name nchar(4),"
			"pinyin char(4),"
			"code char(6));"

	list.push_bakc("create candle_data"
		"(id binary(16),"
		"stock_id binary(16) forein key(stocks_list.id),"
		"openPrice single,"
		"highestPrice single,"
		"lowestPrice single,"
		"closePrice single);"



}
