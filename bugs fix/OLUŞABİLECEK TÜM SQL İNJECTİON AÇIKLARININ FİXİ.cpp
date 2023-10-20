Game-Db Source/Server/game/src/db.cpp

gir ve arat;

void DBManager::Query(const char * c_pszFormat, ...)

fonksiyonu komple deðiþtir;

void DBManager::Query(const char * c_pszFormat, ...)
{
	char szQuery[4096];
	va_list args;

	va_start(args, c_pszFormat);
	vsnprintf(szQuery, sizeof(szQuery), c_pszFormat, args);
	va_end(args);

	std::string sQuery(szQuery);
	m_sql.AsyncQuery(sQuery.substr(0,sQuery.find_first_of(";") == std::string::npos ? sQuery.length(): sQuery.find_first_of(";")).c_str());
}

tekrar arat;

SQLMsg * DBManager::DirectQuery(const char * c_pszFormat, ...)

fonksiyonu komple deðiþtir ve derle;

SQLMsg * DBManager::DirectQuery(const char * c_pszFormat, ...)
{
	char szQuery[4096];
	va_list args;

	va_start(args, c_pszFormat);
	vsnprintf(szQuery, sizeof(szQuery), c_pszFormat, args);
	va_end(args);

	std::string sQuery(szQuery);
	return m_sql_direct.DirectQuery(sQuery.substr(0, sQuery.find_first_of(";") == std::string::npos ? sQuery.length(): sQuery.find_first_of(";")).c_str());
}