Game-Db Source/Server/game/src/questlua_pc.cpp

gir ve arat;

	int pc_set_skillgroup(lua_State* L)
	{
		if (!lua_isnumber(L, 1))
			sys_err("QUEST wrong skillgroup number");
		else
		{
			CQuestManager & q = CQuestManager::Instance();
			LPCHARACTER ch = q.GetCurrentCharacterPtr();

			ch->SetSkillGroup((BYTE) rint(lua_tonumber(L, 1)));
		}
		return 0;
	}

deðiþtir ve derle;

	int pc_set_skillgroup(lua_State* L)
	{
		if (!lua_isnumber(L, 1))
			sys_err("QUEST wrong skillgroup number");
		else
		{
			CQuestManager & q = CQuestManager::Instance();
			LPCHARACTER ch = q.GetCurrentCharacterPtr();
			ch->RemoveGoodAffect();
			ch->SetSkillGroup((BYTE) rint(lua_tonumber(L, 1)));
		}
		return 0;
	}