Game-Db Source/Server/game/src/packet.h

gir ve arat;

typedef struct packet_update_char

kod bloðunun içinde bul;

	short	sAlignment;

altýna ekle;

	DWORD	dwLevel;

Game-Db Source/Server/game/src/char.cpp

gir ve arat;

void CHARACTER::UpdatePacket()

kod bloðunun içinde bul;

	pack.sAlignment	= m_iAlignment / 10;

altýna ekle ve Game-Db Source'yi derle;

	pack.dwLevel	= GetLevel();

Client Source/source/UserInterface/Packet.h

gir ve arat;

typedef struct packet_update_char

kod bloðunun içinde bul;

	short		sAlignment;

altýna ekle;

	DWORD		dwLevel;

Client Source/source/UserInterface/PythonNetworkStreamPhaseGameActor.cpp

gir ve arat;

bool CPythonNetworkStream::RecvCharacterUpdatePacket()

kod bloðunun içinde bul;

	kNetUpdateActorData.m_sAlignment=chrUpdatePacket.sAlignment;

altýna ekle;

	kNetUpdateActorData.m_dwLevel=chrUpdatePacket.dwLevel;

Client Source/source/UserInterface/NetworkActorManager.cpp

gir ve arat;

void CNetworkActorManager::UpdateActor(const SNetworkUpdateActorData& c_rkNetUpdateActorData)

kod bloðunun içinde bul;

		pkInstFind->SetAlignment(c_rkNetUpdateActorData.m_sAlignment);

altýna ekle;

		pkInstFind->SetLevel(c_rkNetUpdateActorData.m_dwLevel);

Client Source/source/UserInterface/NetworkActorManager.h

gir ve arat;

struct SNetworkUpdateActorData

kod bloðunun içinde bul;

	short m_sAlignment;

altýna ekle;

	DWORD m_dwLevel;

Client Source/source/UserInterface/InstanceBase.cpp

gir ve arat;

void CInstanceBase::SetAlignment(short sAlignment)
{
	m_sAlignment = sAlignment;
	RefreshTextTailTitle();
}

altýna ekle;

void CInstanceBase::SetLevel(DWORD level)
{
	m_dwLevel = level;
	UpdateTextTailLevel(m_dwLevel);
}

Client Source/source/UserInterface/InstanceBaseEffect.cpp

gir ve arat;

void CInstanceBase::UpdateTextTailLevel(DWORD level)
{
	//static D3DXCOLOR s_kLevelColor = D3DXCOLOR(119.0f/255.0f, 246.0f/255.0f, 168.0f/255.0f, 1.0f);
	static D3DXCOLOR s_kLevelColor = D3DXCOLOR(152.0f/255.0f, 255.0f/255.0f, 51.0f/255.0f, 1.0f);

	char szText[256];
	sprintf(szText, "Lv %d", level);
	CPythonTextTail::Instance().AttachLevel(GetVirtualID(), szText, s_kLevelColor);
}

deðiþtir;

void CInstanceBase::UpdateTextTailLevel(DWORD level)
{
	if (IsPC())
	{
		static D3DXCOLOR s_kLevelColor = D3DXCOLOR(152.0f/255.0f, 255.0f/255.0f, 51.0f/255.0f, 1.0f);

		char szText[256];
		sprintf(szText, "Lv.%d", level);
		CPythonTextTail::Instance().AttachLevel(GetVirtualID(), szText, s_kLevelColor);
	}
}

Client Source/source/UserInterface/InstanceBase.h

gir ve arat;

		void					SetAlignment(short sAlignment);

altýna ekle ve Client Source'yi derle;

		void					SetLevel(DWORD level);