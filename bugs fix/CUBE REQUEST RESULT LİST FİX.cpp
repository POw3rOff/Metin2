Game-Db Source/Server/game/src/cube.cpp

gir ve arat;

		if (resultText.size() - 20 >= CHAT_MAX_LEN)
		{
			sys_err("[CubeInfo] Too long cube result list text. (NPC: %d, length: %d)", npcVNUM, resultText.size());
			resultText.clear();
			resultCount = 0;
		}

deðiþtir ve derle;

		int WildFantasytFIXED;
		if (resultText.size() < 20)
		{
			WildFantasytFIXED = 20 - resultText.size();
		}
		else
		{
			WildFantasytFIXED = resultText.size() - 20;
		}
		if (WildFantasytFIXED >= CHAT_MAX_LEN)
		{
			sys_err("[CubeInfo] Too long cube result list text. (NPC: %d, FIXED_size_value_exygo: %d, length: %d)", npcVNUM, WildFantasytFIXED, resultText.size());
			resultText.clear();
			resultCount = 0;
		}