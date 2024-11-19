#include "BCR/Headers/System/QTE/QTE_System.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"

UQTE_System* UQTE_System::Instance = nullptr;

UQTE_System* UQTE_System::Get()
{
	if (!Instance)
	{
		Instance = NewObject<UQTE_System>();
		Instance->AddToRoot(); // Prevents garbage collectors from destroying it
	}
	return Instance;
}

void UQTE_System::StartQTE(const FQTEConfiguration& Config)
{
	if (!CurrentConfig.Sequences.IsEmpty())
	{
		IBCR_Helper::LogScreen(this, "Trying to start QTE while another is running", 5.0f, FColor::Red);
		return;
	}

	CurrentConfig = Config;
	bIsPaused = false;
	
	if (CurrentConfig.Sequences.IsEmpty())
	{
		IBCR_Helper::LogScreen(this, "Invalid QTE Configuration: No sequences", 5.0f, FColor::Red);
		OnQTEComplete.Broadcast(false);
		return;
	}

	IBCR_Helper::LogScreen(this, "QTE Started", 2.0f, FColor::Green);
}

void UQTE_System::StopQTE()
{
	if (CurrentConfig.Sequences.IsEmpty())
	{
		return;
	}
	
	CurrentConfig.Sequences.Empty();
	bIsPaused = false;

	OnQTEComplete.Broadcast(false);
	IBCR_Helper::LogScreen(this, "QTE Stopped", 2.0f, FColor::Yellow);
}

void UQTE_System::SetQTEPaused(bool bPause)
{
	if (CurrentConfig.Sequences.IsEmpty())
	{
		return;
	}

	bIsPaused = bPause;
	IBCR_Helper::LogScreen(this, FString::Printf(TEXT("QTE %s"), bPause ? TEXT("Paused") : TEXT("Resumed")), 
		2.0f, bPause ? FColor::Yellow : FColor::Green);
}