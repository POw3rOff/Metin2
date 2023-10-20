Game-Db Source/Server/common/service.h

gir ve müsait bir yere ekle;

#define ENABLE_CHECK_GHOSTMODE_HACK

Game-Db Source/Server/game/src/input_main.cpp

gir ve arat;

void CInputMain::Move(LPCHARACTER ch, const char * data)
{
	if (!ch->CanMove())
		return;

	struct command_move * pinfo = (struct command_move *) data;

	if (pinfo->bFunc >= FUNC_MAX_NUM && !(pinfo->bFunc & 0x80))
	{
		sys_err("invalid move type: %s", ch->GetName());
		return;
	}

	//enum EMoveFuncType
	//{
	//	FUNC_WAIT,
	//	FUNC_MOVE,
	//	FUNC_ATTACK,
	//	FUNC_COMBO,
	//	FUNC_MOB_SKILL,
	//	_FUNC_SKILL,
	//	FUNC_MAX_NUM,
	//	FUNC_SKILL = 0x80,
	//};

	// ÅÚ·¹Æ÷Æ® ÇÙ Ã¼Å©

//	if (!test_server)
	{

altýna ekle ve derle;

#ifdef ENABLE_CHECK_GHOSTMODE_HACK
		if (ch->IsPC() && ch->IsDead())
		{
			sys_log(0, "MOVE: %s trying to move as dead", ch->GetName());

			ch->Show(ch->GetMapIndex(), ch->GetX(), ch->GetY(), ch->GetZ());
			ch->Stop();
			return;
		}
#endif