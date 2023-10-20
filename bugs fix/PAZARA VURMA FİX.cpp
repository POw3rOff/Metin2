Game-Db Source/Server/game/src/battle.cpp

gir ve arat;

bool battle_is_attackable(LPCHARACTER ch, LPCHARACTER victim)
{
	// »ó´ë¹æÀÌ Á×¾úÀ¸¸é Áß´ÜÇÑ´Ù.
	if (victim->IsDead())
		return false;

altýna ekle;

	if (victim->GetMyShop())
		return false;

Game-Db Source/Server/game/src/char_battle.cpp

gir ve arat;

bool CHARACTER::Attack(LPCHARACTER pkVictim, BYTE bType)

kod bloðunun içinde müsait bir yere ekle ve derle;

	if (pkVictim->GetMyShop())
		return false;