Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

bool CHARACTER::UseItem(TItemPos Cell, TItemPos DestCell)

kod blo�unun i�ine ekle ve derle;

	if (quest::CQuestManager::instance().GetPCForce(GetPlayerID())->IsRunning() == true)
	{
		ChatPacket(CHAT_TYPE_INFO, LC_TEXT("������ �Դϴ�."));
		GetDesc()->DelayedDisconnect(3);
		return false;
	}

/usr/game/share/locale/turkey/locale_string.txt

gir ve en alta ekle ard�ndan reboot at;

"������ �Դϴ�.";
"Yanl�� i�lem yapt���n�zdan dolay� hesab�n�z kilitlendi. 3 saniye i�inde oyundan at�lacaks�n�z.";