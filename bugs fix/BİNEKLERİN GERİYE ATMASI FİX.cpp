Game-Db Source/Server/game/src/char_affect.cpp

gir ve arat;

	if (AFFECT_REVIVE_INVISIBLE != pkAff->dwType)
		ComputePoints();
	else
		UpdatePacket();

deðiþtir ve derle;

	if (AFFECT_REVIVE_INVISIBLE != pkAff->dwType && AFFECT_MOUNT != pkAff->dwType)
		ComputePoints();
	else
		UpdatePacket();