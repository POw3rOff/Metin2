Game-Db Source/Server/game/src/char_affect.cpp

gir ve arat;

bool CHARACTER::UpdateAffect()
{

altýna ekle;

	if (!GetWear(WEAR_WEAPON))
	{
		if (IsAffectFlag(AFF_GEOMGYEONG))
		{
			RemoveAffect(SKILL_GEOMKYUNG);
		}

		if (IsAffectFlag(AFF_GWIGUM))
		{
			RemoveAffect(SKILL_GWIGEOM);
		}
	}

Game-Db Source/Server/game/src/char_skill.cpp

gir ve arat;

bool CHARACTER::UseSkill(DWORD dwVnum, LPCHARACTER pkVictim, bool bUseGrandMaster)
{

altýna ekle ve derle;

	if ((dwVnum == SKILL_GEOMKYUNG || dwVnum == SKILL_GWIGEOM) && !GetWear(WEAR_WEAPON))
		return false;