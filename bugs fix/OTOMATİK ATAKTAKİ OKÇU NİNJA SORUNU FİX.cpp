Client Source/source/UserInterface/PythonPlayerInput.cpp

gir ve arat;

	if (rkInstMain.IsBowMode())
	{
		if (rkInstMain.IsAttackableInstance(rkInstVictim))
			if (!__CanShot(rkInstMain, rkInstVictim))
				return;
	}

deðiþtir ve derle;

	if (rkInstMain.IsBowMode())
	{
		if (rkInstMain.IsAttackableInstance(rkInstVictim))
		{
			if (!__CanShot(rkInstMain, rkInstVictim))
			{
				m_dwVIDReserved = 0;
				__ClearAutoAttackTargetActorID();
				return;
			}
		}
	}