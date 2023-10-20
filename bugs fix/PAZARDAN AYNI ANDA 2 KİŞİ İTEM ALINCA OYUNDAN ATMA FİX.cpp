Game-Db Source/Server/game/src/shop.cpp

gir ve arat;

	LPITEM pkSelectedItem = ITEM_MANAGER::instance().Find(r_item.itemid);

altýna ekle ve derle;

	if (IsPCShop())
	{
		if (!pkSelectedItem)
		{
			sys_log(0, "Shop::Buy : Critical: This user seems to be a hacker : invalid pcshop item : BuyerPID:%d SellerPID:%d",
					ch->GetPlayerID(),
					m_pkPC->GetPlayerID());

			return SHOP_SUBHEADER_GC_SOLD_OUT; // @fixme132 false to SHOP_SUBHEADER_GC_SOLD_OUT
		}

		if ((pkSelectedItem->GetOwner() != m_pkPC))
		{
			sys_log(0, "Shop::Buy : Critical: This user seems to be a hacker : invalid pcshop item : BuyerPID:%d SellerPID:%d",
					ch->GetPlayerID(),
					m_pkPC->GetPlayerID());

			return SHOP_SUBHEADER_GC_SOLD_OUT; // @fixme132 false to SHOP_SUBHEADER_GC_SOLD_OUT
		}
	}