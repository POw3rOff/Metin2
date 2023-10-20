Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

									if (item2->GetSocketCount() == 0)
										return false;

altına ekle;

									if (item2->IsEquipped())
										return false;

tekrar arat;

							if (item2->GetVnum() >= 28330 && item2->GetVnum() <= 28343) // ¿µ¼®+3
							{
								ChatPacket(CHAT_TYPE_INFO, LC_TEXT("+3 ¿µ¼®Àº ÀÌ ¾ÆÀÌÅÛÀ¸·Î °³·®ÇÒ ¼ö ¾ø½À´Ï´Ù"));
								return false;
							}

üstüne ekle ve derle;

							if (item2->IsEquipped())
								return false;