Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

		if (item1->EquipTo(this, bEquipCell))
			item2->AddToCharacter(this, TItemPos(INVENTORY, bInvenCell));
		else
			sys_err("SwapItem cannot equip %s! item1 %s", item2->GetName(), item1->GetName());

deðiþtir ve derle;

		if (item1->EquipTo(this, bEquipCell)) 
		{
			item2->AddToCharacter(this, TItemPos(INVENTORY, bInvenCell));
			item2->ModifyPoints(false); //item_swap fix ds_aim
			ComputePoints();			// item_swap fix ds_aim
		} 
		else
		{
			sys_err("SwapItem cannot equip %s! item1 %s", item2->GetName(), item1->GetName());
		}