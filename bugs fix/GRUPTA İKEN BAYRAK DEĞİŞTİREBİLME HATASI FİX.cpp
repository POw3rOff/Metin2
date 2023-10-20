Game-Db Source/Server/game/src/questlua_pc.cpp

gir ve arat;

		lua_pushnumber(L, ch->ChangeEmpire((unsigned char)lua_tonumber(L, 1)));

üstüne ekle ve derle;

		if(ch->GetParty())
		{
			ch->ChatPacket(1, "text");
			lua_pushnumber(L, 4);
			return 0;
		}