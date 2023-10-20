Game-Db Source/Server/game/src/char_battle.cpp

gir ve arat;

			if (pAttacker->GetPoint(POINT_HIT_HP_RECOVERY) && number(0, 4) > 0) // 80% È®·ü
			{
				int i = MIN(dam, iCurHP) * pAttacker->GetPoint(POINT_HIT_HP_RECOVERY) / 100;


				if (i)
				{
					CreateFly(FLY_HP_SMALL, pAttacker);
					pAttacker->PointChange(POINT_HP, i);
				}
			}


			// Ä¥ ¶§¸¶´Ù SPÈ¸º¹
			if (pAttacker->GetPoint(POINT_HIT_SP_RECOVERY) && number(0, 4) > 0) // 80% È®·ü
			{
				int i = MIN(dam, iCurHP) * pAttacker->GetPoint(POINT_HIT_SP_RECOVERY) / 100;


				if (i)
				{
					CreateFly(FLY_SP_SMALL, pAttacker);
					pAttacker->PointChange(POINT_SP, i);
				}
			}

deðiþtir;

			int iAbsoHP_ptr = pAttacker->GetPoint(POINT_HIT_HP_RECOVERY);
			if (iAbsoHP_ptr)
			{
				if (number(1, 100) <= iAbsoHP_ptr)
				{
					int iHPAbso = MIN(dam, GetHP()) * pAttacker->GetPoint(POINT_HIT_HP_RECOVERY) / 100;

					if ((pAttacker->GetHP() > 0) && (pAttacker->GetHP() + iHPAbso < pAttacker->GetMaxHP()) && (GetHP() > 0) && (iHPAbso > 0))
					{
						CreateFly(FLY_HP_SMALL, pAttacker);
						pAttacker->PointChange(POINT_HP, iHPAbso);
					}
				}
			}


			// Ä¥ ¶§¸¶´Ù SPÈ¸º¹
			int iAbsoSP_ptr = pAttacker->GetPoint(POINT_HIT_SP_RECOVERY);
			if (iAbsoSP_ptr)
			{
				if (number(1, 100) <= iAbsoSP_ptr)
				{
					int iSPAbso = MIN(dam, GetSP()) * pAttacker->GetPoint(POINT_HIT_SP_RECOVERY) / 100;

					if ((pAttacker->GetSP() > 0) && (pAttacker->GetSP() + iSPAbso < pAttacker->GetMaxSP()) && (GetSP() > 0) && (iSPAbso > 0))
					{
						CreateFly(FLY_SP_SMALL, pAttacker);
						pAttacker->PointChange(POINT_SP, iSPAbso);
					}
				}
			}

Game-Db Source/Server/game/src/char.cpp

gir ve arat;

		sys_err("POINT_ERROR: %s type %d val %d (max: %d)", GetName(), val, max_val);

deðiþtir;

		sys_err("POINT_ERROR: %s type %d val %d (max: %d)", GetName(), type, val, max_val);

tekrar arat;

		sys_err("POINT_ERROR: %s type %d val %d (max: %d)", GetName(), val, max_val);

deðiþtir ve derle;

		sys_err("POINT_ERROR: %s type %d val %d (max: %d)", GetName(), type, val, max_val);