Game-Db Source/Server/game/src/char_item.cpp

gir ve arat;

				AddAffect(AFFECT_POLYMORPH, POINT_POLYMORPH, dwVnum, AFF_POLYMORPH, iDuration, 0, true);

üstüne ekle ve derle;

				if (IsAffectFlag(AFF_GEOMGYEONG))
					RemoveAffect(SKILL_GEOMKYUNG);
				if (IsAffectFlag(AFF_GWIGUM))
					RemoveAffect(SKILL_GWIGEOM);