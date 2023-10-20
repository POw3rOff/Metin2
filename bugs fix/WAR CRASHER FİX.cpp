Game-Db Source/Server/game/src/cmd_general.cpp

gir ve arat;

	if (*arg2)
	{
		str_to_number(type, arg2);

		if (type >= GUILD_WAR_TYPE_MAX_NUM || type < 0)
			type = GUILD_WAR_TYPE_FIELD;
	}

deðiþtir ve derle;

	if (*arg2)
	{
		str_to_number(type, arg2);

		if(type < 0)
		{
			ch->ChatPacket(CHAT_TYPE_INFO, "<error> can't declare war with type less than zero.");
			return;
		}

		if (type >= GUILD_WAR_TYPE_MAX_NUM || type == 0)
			type = GUILD_WAR_TYPE_FIELD;
	}