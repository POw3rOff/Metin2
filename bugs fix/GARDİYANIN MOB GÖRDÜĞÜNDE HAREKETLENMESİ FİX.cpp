Game-Db Source/Server/game/src/char.cpp

gir ve arat;

	if (IsGuardNPC())
	{
		if (5000 < DISTANCE_APPROX(m_pkMobInst->m_posLastAttacked.x - GetX(), m_pkMobInst->m_posLastAttacked.y - GetY()))
			if (Return())
				return true;
	}

deðiþtir ve derle;

//	if (IsGuardNPC())
//	{
//		if (5000 < DISTANCE_APPROX(m_pkMobInst->m_posLastAttacked.x - GetX(), m_pkMobInst->m_posLastAttacked.y - GetY()))
//			if (Return())
//				return true;
//	}