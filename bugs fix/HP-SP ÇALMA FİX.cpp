Game-Db Source/Server/game/src/char_battle.cpp

gir ve arat;

			if (pAttacker->GetPoint(POINT_STEAL_HP))
			{
				int pct = 1;

				if (number(1, 10) <= pct)
				{
					int iHP = MIN(dam, MAX(0, iCurHP)) * pAttacker->GetPoint(POINT_STEAL_HP) / 100;

					if (iHP > 0 && GetHP() >= iHP)
					{
						CreateFly(FLY_HP_SMALL, pAttacker);
						pAttacker->PointChange(POINT_HP, iHP);
						PointChange(POINT_HP, -iHP);
					}
				}
			}

			// SP ½ºÆ¿
			if (pAttacker->GetPoint(POINT_STEAL_SP))
			{
				int pct = 1;

				if (number(1, 10) <= pct)
				{
					int iCur;

					if (IsPC())
						iCur = iCurSP;
					else
						iCur = iCurHP;

					int iSP = MIN(dam, MAX(0, iCur)) * pAttacker->GetPoint(POINT_STEAL_SP) / 100;

					if (iSP > 0 && iCur >= iSP)
					{
						CreateFly(FLY_SP_SMALL, pAttacker);
						pAttacker->PointChange(POINT_SP, iSP);

						if (IsPC())
							PointChange(POINT_SP, -iSP);
					}
				}
			}

deðiþtir ve derle;

			int iStealHP_ptr = pAttacker->GetPoint(POINT_STEAL_HP);
			if (iStealHP_ptr)
			{
				if (number(1, 100) <= iStealHP_ptr)
				{
					int iHP = MIN(dam, MAX(0, GetHP())) * pAttacker->GetPoint(POINT_STEAL_HP) / 100;


					if ((pAttacker->GetHP() > 0) && (pAttacker->GetHP() + iHP < pAttacker->GetMaxHP()) && (GetHP() > 0) && (iHP > 0))
					{
						CreateFly(FLY_HP_MEDIUM, pAttacker);


						pAttacker->PointChange(POINT_HP, iHP);
						PointChange(POINT_HP, -iHP);
					}
				}
			}


			// SP ½ºÆ¿
			int iStealSP_ptr = pAttacker->GetPoint(POINT_STEAL_SP);
			if (iStealSP_ptr)
			{
				if (IsPC() && pAttacker->IsPC())
				{
					if (number(1, 100) <= iStealSP_ptr)
					{
						int iSP = MIN(dam, MAX(0, GetSP())) * pAttacker->GetPoint(POINT_STEAL_SP) / 100;


						if ((pAttacker->GetSP() > 0) && (pAttacker->GetSP() + iSP < pAttacker->GetMaxSP()) && (GetSP() > 0) && (iSP > 0))
						{
							CreateFly(FLY_SP_MEDIUM, pAttacker);
							pAttacker->PointChange(POINT_SP, iSP);


							PointChange(POINT_SP, -iSP);
						}
					}
				}
			}