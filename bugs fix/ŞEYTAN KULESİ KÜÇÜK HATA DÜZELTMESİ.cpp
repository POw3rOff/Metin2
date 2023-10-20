Game-Db Source/Server/game/src/input_main.cpp

gir ve arat;

				if (ch->GetQuestFlag("deviltower_zone.can_refine"))
				{
					ch->DoRefine(item, true);
					ch->SetQuestFlag("deviltower_zone.can_refine", 0);
				}

deðiþtir ve derle;

				if (ch->GetQuestFlag("deviltower_zone.can_refine"))
				{
					if (ch->DoRefine(item, true))
					{
						ch->SetQuestFlag("deviltower_zone.can_refine", 0);
					}
				}