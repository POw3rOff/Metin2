Game-Db Source/Server/game/src/char_skill.cpp

gir ve arat;

	if (false == bCanUseHorseSkill && true == IsRiding())
		return BATTLE_NONE;

	if (IsPolymorphed())
		return BATTLE_NONE;

	if (g_bSkillDisable)
		return BATTLE_NONE;

	CSkillProto* pkSk = CSkillManager::instance().Get(dwVnum);

	if (!pkSk)
		return BATTLE_NONE;

	if (bCanUseHorseSkill && pkSk->dwType != SKILL_TYPE_HORSE)
		return BATTLE_NONE;

	if (!bCanUseHorseSkill && pkSk->dwType == SKILL_TYPE_HORSE)
		return BATTLE_NONE;

deðiþtir ve derle;

	if(dwVnum!=SKILL_MUYEONG)
	{
		if (false == bCanUseHorseSkill && true == IsRiding())
		{
			return BATTLE_NONE;
		}
	}

	if (IsPolymorphed())
	{
		return BATTLE_NONE;
	}

	if (g_bSkillDisable)
	{
		return BATTLE_NONE;
	}

	CSkillProto* pkSk = CSkillManager::instance().Get(dwVnum);

	if (!pkSk)
	{
		return BATTLE_NONE;
	}

	if(dwVnum!=SKILL_MUYEONG)
	{
		if (bCanUseHorseSkill && pkSk->dwType != SKILL_TYPE_HORSE)
		{
			return BATTLE_NONE;
		}

		if (!bCanUseHorseSkill && pkSk->dwType == SKILL_TYPE_HORSE)
		{
			return BATTLE_NONE;
		}
	}