Game-Db Source/Server/game/src/input_main.cpp

gir ve arat;

void CInputMain::SafeboxCheckin(LPCHARACTER ch, const char * c_pData)

fonksiyonun i�inde m�sait bir yere ekle ve derle;

	if (true == pkItem->IsEquipped())
	{
		ch->ChatPacket(CHAT_TYPE_INFO, "Bu i�lemi yapabilmek i�in depoya koymak istedi�iniz itemi �nce ��karmal�s�n�z.");
		return;
	}