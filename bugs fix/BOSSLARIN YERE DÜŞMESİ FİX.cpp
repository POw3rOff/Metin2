Client Source/source/GameLib/ActorInstanceBattle.cpp

gir ve arat;

void CActorInstance::__HitGreate(CActorInstance& rVictim)
{
	// DISABLE_KNOCKDOWN_ATTACK
	if (rVictim.IsKnockDown())
		return;
	if (rVictim.__IsStandUpMotion())
		return;
	// END_OF_DISABLE_KNOCKDOWN_ATTACK

altýna ekle ve derle;

	extern bool IS_HUGE_RACE(unsigned int vnum);
	if (IS_HUGE_RACE(rVictim.GetRace()))
		return;