Game-Db Source/Server/game/src/input_main.cpp

gir ve arat;

void CInputMain::QuickslotAdd(LPCHARACTER ch, const char * data)
{
	struct command_quickslot_add * pinfo = (struct command_quickslot_add *) data;
	ch->SetQuickslot(pinfo->pos, pinfo->slot);
}

deðiþtir ve derle;

void CInputMain::QuickslotAdd(LPCHARACTER ch, const char * data)
{
	struct command_quickslot_add * pinfo = (struct command_quickslot_add *) data;
	if(pinfo->slot.type == QUICKSLOT_TYPE_ITEM)
	{
		LPITEM item = NULL;

		TItemPos srcCell(INVENTORY, pinfo->slot.pos);

		if (!(item = ch->GetItem(srcCell)))
			return;

		if (item->GetType() != ITEM_USE && item->GetType() != ITEM_QUEST)
			return;
	}
	ch->SetQuickslot(pinfo->pos, pinfo->slot);
}