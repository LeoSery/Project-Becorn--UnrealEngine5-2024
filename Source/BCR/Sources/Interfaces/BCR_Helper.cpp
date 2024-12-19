#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "GameFramework/Actor.h"

void IBCR_Helper::LogConsole(const UObject* Context, const FString& Message)
{
    if (!Context) return;

    FString OutputMessage = GetBasicObjectInfo(Context);
    if (!Message.IsEmpty())
    {
        OutputMessage += FString::Printf(TEXT("\nMessage: %s"), *Message);
    }

    UE_LOG(LogTemp, Log, TEXT("[BCR] %s"), *OutputMessage);
}

void IBCR_Helper::LogScreen(const UObject* Context, const FString& Message,
    float Duration, FColor Color)
{
    if (!Context || !GEngine) return;

    FString OutputMessage = GetBasicObjectInfo(Context);
    if (!Message.IsEmpty())
    {
        OutputMessage += FString::Printf(TEXT("\nMessage: %s"), *Message);
    }

    GEngine->AddOnScreenDebugMessage(-1, Duration, Color,
        FString::Printf(TEXT("[BCR] %s"), *OutputMessage));
}

void IBCR_Helper::LogAll(const UObject* Context, const FString& Message,
    float Duration, FColor Color)
{
    LogConsole(Context, Message);
    LogScreen(Context, Message, Duration, Color);
}

void IBCR_Helper::CustomLogConsole(const FString& Message)
{
    FString OutputMessage = BuildLogMessage(Message);
    UE_LOG(LogTemp, Log, TEXT("[BCR] %s"), *OutputMessage);
}

void IBCR_Helper::CustomLogScreen(const FString& Message, float Duration, FColor Color)
{
    if (!GEngine) return;

    FString OutputMessage = BuildLogMessage(Message);
    GEngine->AddOnScreenDebugMessage(-1, Duration, Color,
        FString::Printf(TEXT("[BCR] %s"), *OutputMessage));
}

void IBCR_Helper::CustomLogAll(const FString& Message, float Duration, FColor Color)
{
    CustomLogConsole(Message);
    CustomLogScreen(Message, Duration, Color);
}

FString IBCR_Helper::GetBasicObjectInfo(const UObject* Object)
{
    return FString::Printf(TEXT("Name: %s | Class: %s"),
        *Object->GetName(),
        *Object->GetClass()->GetName());
}

FString IBCR_Helper::BuildLogMessage(const FString& Message) const
{
    const UObject* ThisObject = Cast<UObject>(this);
    if (!ThisObject) return TEXT("");

    FString OutputMessage = GetBasicObjectInfo(ThisObject);

    const FString CustomInfo = GetCustomLogInfo();
    if (!CustomInfo.IsEmpty())
    {
        OutputMessage += TEXT("\n") + CustomInfo;
    }

    if (const AActor* Actor = Cast<AActor>(ThisObject))
    {
        const FVector Location = Actor->GetActorLocation();
        OutputMessage += FString::Printf(TEXT("\nLocation: X=%.0f Y=%.0f Z=%.0f"),
            Location.X, Location.Y, Location.Z);
    }

    if (!Message.IsEmpty())
    {
        OutputMessage += FString::Printf(TEXT("\nMessage: %s"), *Message);
    }

    return OutputMessage;
}