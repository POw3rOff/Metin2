Game-Db Source/Server/game/src/char.cpp

gir ve arat;

int CHARACTER::GetQuestFlag(const std::string& flag) const
{
	quest::CQuestManager& q = quest::CQuestManager::instance();
	quest::PC* pPC = q.GetPC(GetPlayerID());
	return pPC->GetFlag(flag);
}

deðiþtir ve derle;

int CHARACTER::GetQuestFlag(const std::string& flag) const
{
	quest::CQuestManager& q = quest::CQuestManager::instance();
	quest::PC* pPC = q.GetPC(GetPlayerID());
	if(!pPC)
	{
		sys_err("Nullpointer in CHARACTER::GetQuestFlag %lu", GetPlayerID());
		return 0;
	}
	return pPC->GetFlag(flag);
}