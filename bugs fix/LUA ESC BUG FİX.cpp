Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

bool CHARACTER::UseItem(TItemPos Cell, TItemPos DestCell)

kod bloğunun içine ekle ve derle;

	if (quest::CQuestManager::instance().GetPCForce(GetPlayerID())->IsRunning() == true)
	{
		ChatPacket(CHAT_TYPE_INFO, LC_TEXT("¾ÆÀÌÅÛ ÀÔ´Ï´Ù."));
		GetDesc()->DelayedDisconnect(3);
		return false;
	}

/usr/game/share/locale/turkey/locale_string.txt

gir ve en alta ekle ardından reboot at;

"¾ÆÀÌÅÛ ÀÔ´Ï´Ù.";
"Yanlış işlem yaptığınızdan dolayı hesabınız kilitlendi. 3 saniye içinde oyundan atılacaksınız.";