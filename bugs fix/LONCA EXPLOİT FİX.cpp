Game-Db Source/Server/game/src/input_main.cpp

gir ve arat;

	if (ch->GetGold() < 200000)
		return;

deðiþtir ve derle;

	if (ch->GetGold() < 200000)
	{
		ch->ChatPacket(CHAT_TYPE_INFO, "Yetersiz yang!");
		return;
	}

	if (ch->GetLevel() < 40)
	{
		ch->ChatPacket(CHAT_TYPE_INFO, "Yetersiz level!");
		return;
	}