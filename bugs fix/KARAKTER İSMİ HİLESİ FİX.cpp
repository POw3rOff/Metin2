Game-Db Source/Server/game/src/input_login.cpp

gir ve arat;

	if (true == g_BlockCharCreation)
	{
		d->Packet(&packFailure, sizeof(packFailure));
		return;
	}

altýna ekle ve derle;

	if (strlen(pinfo->name) > 12)
	{
		d->Packet(&packFailure, sizeof(packFailure));
		return;
	}