Game-Db Source/Server/game/src/battle.cpp

gir ve arat;

bool battle_is_attackable(LPCHARACTER ch, LPCHARACTER victim)
{
	// 상대방이 죽었으면 중단한다.
	if (victim->IsDead())
		return false;

alt�na ekle;

	if (victim->GetMyShop())
		return false;

Game-Db Source/Server/game/src/char_battle.cpp

gir ve arat;

bool CHARACTER::Attack(LPCHARACTER pkVictim, BYTE bType)

kod blo�unun i�inde m�sait bir yere ekle ve derle;

	if (pkVictim->GetMyShop())
		return false;