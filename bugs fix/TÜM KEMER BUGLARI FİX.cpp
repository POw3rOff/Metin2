Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

const int ITEM_BROKEN_METIN_VNUM = 28960;

altýna ekle;

#define ERROR_MSG(exp, msg) \
		if(true==(exp)) \
		{ \
			ChatPacket(CHAT_TYPE_INFO, msg); \
			return false; \
		} \

tekrar arat;

bool CHARACTER::UseItem(TItemPos Cell, TItemPos DestCell)
{

deðiþtir;

bool CHARACTER::UseItem(TItemPos Cell, TItemPos DestCell)
{
	WORD wCell = Cell.cell;
	BYTE window_type = Cell.window_type;
	//WORD wDestCell = DestCell.cell;
	//BYTE bDestInven = DestCell.window_type;
	LPITEM item;

tekrar arat;

bool CHARACTER::UseItem(TItemPos Cell, TItemPos DestCell)

kod bloðunun içinde müsait bir yere ekle;

	if (ITEM_BELT == item->GetType())
		ERROR_MSG(CBeltInventoryHelper::IsExistItemInBeltInventory(this), "Önce kemer slotundaki itemleri almalýsýn.");

Game-Db Source/Server/game/src/input_main.cpp

gir ve arat;

	CSafebox * pkSafebox = ch->GetSafebox();
	LPITEM pkItem = ch->GetItem(p->ItemPos);

	if (!pkSafebox || !pkItem)
		return;

altýna ekle;

	if (pkItem->GetType() == ITEM_BELT && pkItem->IsEquipped())
	{
		ch->ChatPacket(CHAT_TYPE_INFO, "Önce kemer envanterini boþalt!");
		return;
	}

tekrar arat;

	if (!ch->IsEmptyItemGrid(p->ItemPos, pkItem->GetSize()))
		return;

altýna ekle ve derle;

	for (WORD belt_index = BELT_INVENTORY_SLOT_START; belt_index < BELT_INVENTORY_SLOT_END; ++belt_index)
	{
		if (pkItem->GetType() != 3 && p->ItemPos.cell == belt_index)
		{
			if(pkItem->GetSubType() != 0 || pkItem->GetSubType() != 11 || pkItem->GetSubType() != 7)
			{
				ch->ChatPacket(CHAT_TYPE_INFO, "Depodan Kemer envanterine item yerleþtiremezsin.");
				return;
			}
		}
	}