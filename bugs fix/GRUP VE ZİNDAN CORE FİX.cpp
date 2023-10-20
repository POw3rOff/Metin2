Game-Db Source/Server/game/src/party.cpp

gir ve arat;

void CParty::UpdateOfflineState(DWORD dwPID)
{
	//const TMember& r = m_memberMap[dwPID];

	TPacketGCPartyAdd p;
	p.header = HEADER_GC_PARTY_ADD;
	p.pid = dwPID;
	memset(p.name, 0, CHARACTER_NAME_MAX_LEN+1);

	for (TMemberMap::iterator it = m_memberMap.begin(); it != m_memberMap.end(); ++it)
	{
		if (it->second.pCharacter && it->second.pCharacter->GetDesc())
			it->second.pCharacter->GetDesc()->Packet(&p, sizeof(p));
	}
}

deðiþtir ve derle;

void CParty::UpdateOfflineState(DWORD dwPID)
{
	TPacketGCPartyAdd p;
	p.header = HEADER_GC_PARTY_ADD;
	p.pid = dwPID;
	memset(p.name, 0, CHARACTER_NAME_MAX_LEN + 1);
	for (TMemberMap::iterator it = m_memberMap.begin(); it != m_memberMap.end(); ++it)
	{
		if (it->second.pCharacter && it->second.pCharacter->GetDesc())
		{
			if (it->second.pCharacter->GetDungeon())
				it->second.pCharacter->GetDungeon()->ExitAllToStartPosition();
			else
				it->second.pCharacter->GetDesc()->Packet(&p, sizeof(p));
		}
	}
}