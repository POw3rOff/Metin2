Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

			LPCHARACTER owner = funcFindOwnership.owner;
			// @fixme115
			if (!owner)
				return false;

			int iEmptyCell;

altýna ekle ve derle;

			if (owner)
			{
				if (item->IsStackable() && !IS_SET(item->GetAntiFlag(), ITEM_ANTIFLAG_STACK))
				{
					BYTE bCount = item->GetCount();
					for (int i = 0; i < INVENTORY_MAX_NUM; ++i)
					{
						LPITEM item2 = owner->GetInventoryItem(i);

						if (!item2)
							continue;
						if (item2->GetVnum() == item->GetVnum())
						{
							int j;

							for (j = 0; j < ITEM_SOCKET_MAX_NUM; ++j)
							if (item2->GetSocket(j) != item->GetSocket(j))
								break;

							if (j != ITEM_SOCKET_MAX_NUM)
								continue;

							BYTE bCount2 = MIN(200 - item2->GetCount(), bCount);
							bCount -= bCount2;

							item2->SetCount(item2->GetCount() + bCount2);

							if (bCount == 0)
							{
								owner->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("??? ??: %s ????? %s"), GetName(), item2->GetName());
								ChatPacket(CHAT_TYPE_INFO, LC_TEXT("??? ??: %s ??? %s"), owner->GetName(), item2->GetName());
								M2_DESTROY_ITEM(item);
								if (item2->GetType() == ITEM_QUEST)
									quest::CQuestManager::instance().PickupItem(owner->GetPlayerID(), item2);
								return true;
							}
						}
					}
					item->SetCount(bCount);

				}

			}