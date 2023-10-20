Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

	if (item->GetWearFlag() & WEARABLE_UNIQUE)
	{
		if ((GetWear(WEAR_UNIQUE1) && GetWear(WEAR_UNIQUE1)->IsSameSpecialGroup(item)) ||
			(GetWear(WEAR_UNIQUE2) && GetWear(WEAR_UNIQUE2)->IsSameSpecialGroup(item)))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("°°Àº Á¾·ùÀÇ À¯´ÏÅ© ¾ÆÀÌÅÛ µÎ °³¸¦ µ¿½Ã¿¡ ÀåÂøÇÒ ¼ö ¾ø½À´Ï´Ù."));
			return false;
		}

		if (marriage::CManager::instance().IsMarriageUniqueItem(item->GetVnum()) &&
			!marriage::CManager::instance().IsMarried(GetPlayerID()))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("°áÈ¥ÇÏÁö ¾ÊÀº »óÅÂ¿¡¼­ ¿¹¹°À» Âø¿ëÇÒ ¼ö ¾ø½À´Ï´Ù."));
			return false;
		}

	}

altýna ekle ve derle;

	if (item->GetType() == ITEM_COSTUME && item->GetSubType() == COSTUME_BODY)
	{
		LPITEM atakanxd = GetWear(WEAR_BODY);
		if (atakanxd && (atakanxd->GetVnum() >= 11901 && atakanxd->GetVnum() <= 11914))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("ÅÛ ÀÔ´Ï´Ù."));
			return false;
		}
	}

	if (item->GetVnum() >= 11901 && item->GetVnum() <= 11914)
	{
		LPITEM atakan = GetWear(WEAR_COSTUME_BODY);
		if (atakan && (atakan->GetType() == ITEM_COSTUME && atakan->GetSubType() == COSTUME_BODY))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("ÀÔ´Ï´Ù."));
			return false;
		}
	}


/usr/game/share/locale/turkey/locale_string.txt

gir ve en alta ekle ardýndan reboot at;

"ÅÛ ÀÔ´Ï´Ù.";
"Üzerinde gelinlik veya smokin varken kostüm giyemezsin.";

"ÀÔ´Ï´Ù.";
"Üzerinde kostüm varken smokin veya gelinlik giyemezsin.";