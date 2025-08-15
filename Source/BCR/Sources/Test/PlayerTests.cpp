#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(PlayerTests, "BCR.BCR.Sources.Test.PlayerTests",
                                 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool PlayerTests::RunTest(const FString& Parameters)
{
	UWorld* world = FAutomationEditorCommonUtils::CreateNewMap();
	
	AMainPlayer* player = world->SpawnActor<AMainPlayer>();

	if (player->GetCharacterMovement()->JumpZVelocity != 700.f)
	{
		AddError(TEXT("player velocity does not match the correct value."));
	}
	
	return true;
}