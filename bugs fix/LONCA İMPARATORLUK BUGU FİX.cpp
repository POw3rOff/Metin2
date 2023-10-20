Game-Db Source/Server/game/src/char_change_empire.cpp

gir ve arat;

		if (msg->Get()->uiAffectedRows > 0)
		{
			SetChangeEmpireCount();
			SetEmpire(empire);
			return 999;
		}

deðiþtir ve derle;

		if (msg->Get()->uiAffectedRows > 0)
		{
			SetChangeEmpireCount();
			SetEmpire(empire); // bug fix ds_aim
			UpdatePacket();  // bug fix ds_aim thanks .Alpha
			return 999;
		}