Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

	if (item->GetWearFlag() & WEARABLE_UNIQUE)
	{
		if ((GetWear(WEAR_UNIQUE1) && GetWear(WEAR_UNIQUE1)->IsSameSpecialGroup(item)) ||
			(GetWear(WEAR_UNIQUE2) && GetWear(WEAR_UNIQUE2)->IsSameSpecialGroup(item)))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("���� ������ ����ũ ������ �� ���� ���ÿ� ������ �� �����ϴ�."));
			return false;
		}

		if (marriage::CManager::instance().IsMarriageUniqueItem(item->GetVnum()) &&
			!marriage::CManager::instance().IsMarried(GetPlayerID()))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("��ȥ���� ���� ���¿��� ������ ������ �� �����ϴ�."));
			return false;
		}

	}

alt�na ekle ve derle;

	if (item->GetType() == ITEM_COSTUME && item->GetSubType() == COSTUME_BODY)
	{
		LPITEM atakanxd = GetWear(WEAR_BODY);
		if (atakanxd && (atakanxd->GetVnum() >= 11901 && atakanxd->GetVnum() <= 11914))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("�� �Դϴ�."));
			return false;
		}
	}

	if (item->GetVnum() >= 11901 && item->GetVnum() <= 11914)
	{
		LPITEM atakan = GetWear(WEAR_COSTUME_BODY);
		if (atakan && (atakan->GetType() == ITEM_COSTUME && atakan->GetSubType() == COSTUME_BODY))
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("�Դϴ�."));
			return false;
		}
	}


/usr/game/share/locale/turkey/locale_string.txt

gir ve en alta ekle ard�ndan reboot at;

"�� �Դϴ�.";
"�zerinde gelinlik veya smokin varken kost�m giyemezsin.";

"�Դϴ�.";
"�zerinde kost�m varken smokin veya gelinlik giyemezsin.";