Game-Db Source/Server/game/src/char_affect.cpp

gir ve arat;

	if (AFFECT_REVIVE_INVISIBLE != pkAff->dwType)
	{
		ComputePoints();
	}

de�i�tir ve derle;

	if (AFFECT_REVIVE_INVISIBLE != pkAff->dwType)
		ComputePoints();
	else
		UpdatePacket();