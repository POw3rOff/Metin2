Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

				if (tree->IsAttr((long)(GetX()+fx), (long)(GetY()+fy), ATTR_WATER))
				{
					ChatPacket(CHAT_TYPE_INFO, LC_TEXT("�� �ӿ� ��ں��� �ǿ� �� �����ϴ�."));
					return false;
				}

alt�na ekle ve derle;

				if (get_global_time() - GetQuestFlag("kamp.ates") < 60)
				{
					ChatPacket(CHAT_TYPE_INFO, "<Sistem> Bunu yapabilmek i�in 60 saniye beklemelisin!");
					return false;
				}

				SetQuestFlag("kamp.ates", get_global_time());