Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

									if (item2->GetSocketCount() == 0)
										return false;

alt�na ekle;

									if (item2->IsEquipped())
										return false;

tekrar arat;

							if (item2->GetVnum() >= 28330 && item2->GetVnum() <= 28343) // ����+3
							{
								ChatPacket(CHAT_TYPE_INFO, LC_TEXT("+3 ������ �� ���������� ������ �� �����ϴ�"));
								return false;
							}

�st�ne ekle ve derle;

							if (item2->IsEquipped())
								return false;