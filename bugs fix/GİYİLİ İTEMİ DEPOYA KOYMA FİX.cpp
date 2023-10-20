Game-Db Source/Server/game/src/input_main.cpp

gir ve arat;

void CInputMain::SafeboxCheckin(LPCHARACTER ch, const char * c_pData)

fonksiyonun içinde müsait bir yere ekle ve derle;

	if (true == pkItem->IsEquipped())
	{
		ch->ChatPacket(CHAT_TYPE_INFO, "Bu iþlemi yapabilmek için depoya koymak istediðiniz itemi önce çýkarmalýsýnýz.");
		return;
	}