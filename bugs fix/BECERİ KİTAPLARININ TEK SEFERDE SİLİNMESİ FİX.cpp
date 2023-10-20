Game-Db Source/Server/common/service.h

gir ve müsait bir yere ekle;

#define ENABLE_BOOKS_STACKFIX

Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

				if (true == LearnSkillByBook(dwVnum))
				{
					ITEM_MANAGER::instance().RemoveItem(item);

deðiþtir ve derle;

				if (true == LearnSkillByBook(dwVnum))
				{
#ifdef ENABLE_BOOKS_STACKFIX
					item->SetCount(item->GetCount() - 1);
#else
					ITEM_MANAGER::instance().RemoveItem(item);
#endif