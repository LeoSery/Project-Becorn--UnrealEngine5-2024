#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "Engine/World.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "BCR/Headers/System/Pickable/PickableItem.h"
#include "GameFramework/CharacterMovementComponent.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPlayerPickupIntegrationTest, "BCR.Integration.Player.PickupSystem",
                                 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPlayerBasicPropertiesTest, "BCR.Unit.Player.BasicProperties",
								 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBasicCooperationTest, "BCR.Integration.Cooperation.TwoPlayers",
								 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPlayerPickupIntegrationTest::RunTest(const FString& Parameters)
{
    UWorld* TestWorld = FAutomationEditorCommonUtils::CreateNewMap();
	
    AMainPlayer* Player = TestWorld->SpawnActor<AMainPlayer>();
    APickableItem* PickupItem = TestWorld->SpawnActor<APickableItem>();
	
    PickupItem->name = TEXT("TestItem");
    PickupItem->SetActorLocation(FVector(100, 0, 0));
    Player->SetActorLocation(FVector(0, 0, 0));
	
    TestNull("Player should not hold anything initially", Player->PickedUpObject);
    TestFalse("Player pickup state should be false", Player->GetPickedUpSomething());
	
    Player->SetActorLocation(FVector(80, 0, 0));
	
    Player->PickUp_Implementation();
	
    TestNotNull("Player should now hold an object", Player->PickedUpObject);
    TestTrue("Player pickup state should be updated", Player->GetPickedUpSomething());
    TestEqual("Player should hold the correct object", Player->PickedUpObject, Cast<AActor>(PickupItem));
	
    Player->PickUp_Implementation();
    TestNull("Object should be released", Player->PickedUpObject);
    TestFalse("Pickup state should be reset", Player->GetPickedUpSomething());

    return true;
}

bool FPlayerBasicPropertiesTest::RunTest(const FString& Parameters)
{
    UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();
    
    AMainPlayer* Player = World->SpawnActor<AMainPlayer>();
	
    TestTrue("Player should have CharacterMovement component", Player->GetCharacterMovement() != nullptr);
    
    if (Player->GetCharacterMovement())
    {
        TestEqual("Jump velocity should be configured correctly", Player->GetCharacterMovement()->JumpZVelocity, 700.f);
    }
	
    TestNull("Player should not hold any object initially", Player->PickedUpObject);
    TestFalse("Player pickup state should be false initially", Player->GetPickedUpSomething());
    
    return true;
}

bool FBasicCooperationTest::RunTest(const FString& Parameters)
{
    UWorld* TestWorld = FAutomationEditorCommonUtils::CreateNewMap();
	
    AMainPlayer* Player1 = TestWorld->SpawnActor<AMainPlayer>();
    AMainPlayer* Player2 = TestWorld->SpawnActor<AMainPlayer>();
    APickableItem* Item1 = TestWorld->SpawnActor<APickableItem>();
    APickableItem* Item2 = TestWorld->SpawnActor<APickableItem>();
	
    Item1->name = TEXT("Item1");
    Item2->name = TEXT("Item2");
    Item1->SetActorLocation(FVector(100, 0, 0));
    Item2->SetActorLocation(FVector(200, 0, 0));
	
    Player1->SetActorLocation(FVector(80, 0, 0));
    Player1->PickUp_Implementation();
    
    Player2->SetActorLocation(FVector(180, 0, 0));
    Player2->PickUp_Implementation();
	
    TestNotNull("Player1 should hold an object", Player1->PickedUpObject);
    TestNotNull("Player2 should hold an object", Player2->PickedUpObject);
    TestTrue("Players should hold different objects", Player1->PickedUpObject != Player2->PickedUpObject);
	
    Player1->SetActorLocation(FVector(50, 0, 0));
    Player2->SetActorLocation(FVector(150, 0, 0));
    
    float Distance = FVector::Dist(Player1->GetActorLocation(), Player2->GetActorLocation());
    TestTrue("Players should be able to cooperate when close", Distance < 200.0f);
    
    return true;
}
