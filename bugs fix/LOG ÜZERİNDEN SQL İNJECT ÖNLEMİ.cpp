Game-Db Source/Server/game/src/log.cpp

gir ve arat;

void LogManager::Query(const char * c_pszFormat, ...)
{
	LOG_LEVEL_CHECK_N_RET(LOG_LEVEL_MIN);

	char szQuery[4096];
	va_list args;

	va_start(args, c_pszFormat);
	vsnprintf(szQuery, sizeof(szQuery), c_pszFormat, args);
	va_end(args);

	if (test_server)
		sys_log(0, "LOG: %s", szQuery);

	m_sql.AsyncQuery(szQuery);
}

deðiþtir ve derle;

void LogManager::Query(const char * c_pszFormat, ...)
{
	char szQuery[4096];
	va_list args;

	va_start(args, c_pszFormat);
	vsnprintf(szQuery, sizeof(szQuery), c_pszFormat, args);
	va_end(args);

	if (test_server)
		sys_log(0, "LOG: %s", szQuery);

	std::string sQuery(szQuery);
	m_sql.AsyncQuery(sQuery.substr(0, sQuery.find_first_of(";") == std::string::npos ? sQuery.length(): sQuery.find_first_of(";")).c_str());
}