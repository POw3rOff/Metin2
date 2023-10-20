Game-Db Source/Server/game/src/messenger_manager.cpp

gir ve arat;

void MessengerManager::RemoveFromList(MessengerManager::keyA account, MessengerManager::keyA companion)
{
	if (companion.size() == 0)
		return;

	sys_log(1, "Messenger Remove %s %s", account.c_str(), companion.c_str());
	DBManager::instance().Query("DELETE FROM messenger_list%s WHERE account='%s' AND companion = '%s'",
			get_table_postfix(), account.c_str(), companion.c_str());

	__RemoveFromList(account, companion);

	TPacketGGMessenger p2ppck;

	p2ppck.bHeader = HEADER_GG_MESSENGER_REMOVE;
	strlcpy(p2ppck.szAccount, account.c_str(), sizeof(p2ppck.szAccount));
	strlcpy(p2ppck.szCompanion, companion.c_str(), sizeof(p2ppck.szCompanion));
	P2P_MANAGER::instance().Send(&p2ppck, sizeof(TPacketGGMessenger));
}

deðiþtir ve derle;

void MessengerManager::RemoveFromList(MessengerManager::keyA account, MessengerManager::keyA companion)
{
	if (companion.empty())
		return;

	// Second fix
	if (m_Relation[account].find(companion) == m_Relation[account].end() || m_InverseRelation[companion].find(account) == m_InverseRelation[companion].end())
	{
		LPCHARACTER ch = CHARACTER_MANAGER::Instance().FindPC(account.c_str());
		if (ch)
		{
			sys_err("MessengerManager::RemoveFromList: %s tries to use messenger sql injection", ch->GetName());

			if (ch->GetDesc())
				ch->GetDesc()->DelayedDisconnect(3);
		}
		else
			sys_err("MessengerManager::RemoveFromList: Omg! The ghost tried to use this function!");
		return;
	}

	sys_log(1, "MessengerManager::RemoveFromList: Remove %s %s", account.c_str(), companion.c_str());
	DBManager::instance().Query("DELETE FROM messenger_list%s WHERE account='%s' AND companion = '%s'", get_table_postfix(), account.c_str(), companion.c_str());
	__RemoveFromList(account, companion);
	TPacketGGMessenger p2ppck;
	p2ppck.bHeader = HEADER_GG_MESSENGER_REMOVE;
	strlcpy(p2ppck.szAccount, account.c_str(), sizeof(p2ppck.szAccount));
	strlcpy(p2ppck.szCompanion, companion.c_str(), sizeof(p2ppck.szCompanion));
	P2P_MANAGER::instance().Send(&p2ppck, sizeof(TPacketGGMessenger));
}