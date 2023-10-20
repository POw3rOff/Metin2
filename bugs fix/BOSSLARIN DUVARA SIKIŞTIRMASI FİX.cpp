Game-Db Source/Server/game/src/char_skill.cpp

gir ve arat;

				GetDeltaByDegree(degree, fCrushSlidingLength, &fx, &fy);
				sys_log(0, "CRUSH! %s -> %s (%d %d) -> (%d %d)", m_pkChr->GetName(), pkChrVictim->GetName(), pkChrVictim->GetX(), pkChrVictim->GetY(), (long)(pkChrVictim->GetX()+fx), (long)(pkChrVictim->GetY()+fy));
				long tx = (long)(pkChrVictim->GetX()+fx);
				long ty = (long)(pkChrVictim->GetY()+fy);

altýna ekle ve derle;

				while (pkChrVictim->GetSectree()->GetAttribute(tx, ty) & (ATTR_BLOCK | ATTR_OBJECT) && fCrushSlidingLength > 0)
				{
					if (fCrushSlidingLength >= 10)
						fCrushSlidingLength -= 10;
					else
						fCrushSlidingLength = 0;
					GetDeltaByDegree(degree, fCrushSlidingLength, &fx, &fy);
					tx = (long)(pkChrVictim->GetX() + fx);
					ty = (long)(pkChrVictim->GetY() + fy);
				}