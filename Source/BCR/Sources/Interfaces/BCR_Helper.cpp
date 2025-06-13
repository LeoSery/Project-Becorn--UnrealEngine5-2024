#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "GameFramework/Actor.h"

/**
 * @brief Logs a message to the console with object context
 * @details Outputs formatted log information including object name and class to the console
 * 
 * @param Context The object providing context for the log message
 * @param Message The message to log
 */
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

/**
 * @brief Logs a message to the screen with object context
 * @details Displays formatted log information as an on-screen debug message
 * 
 * @param Context The object providing context for the log message
 * @param Message The message to log
 * @param Duration How long to display the message on screen
 * @param Color Color of the on-screen message
 */
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

/**
 * @brief Logs a message to both console and screen with object context
 * @details Combines LogConsole and LogScreen functionality
 * 
 * @param Context The object providing context for the log message
 * @param Message The message to log
 * @param Duration How long to display the message on screen
 * @param Color Color of the on-screen message
 */
void IBCR_Helper::LogAll(const UObject* Context, const FString& Message,
    float Duration, FColor Color)
{
    LogConsole(Context, Message);
    LogScreen(Context, Message, Duration, Color);
}

/**
 * @brief Logs a custom message to the console without object context
 * @details Simple console logging for standalone messages
 * 
 * @param Message The message to log
 */
void IBCR_Helper::CustomLogConsole(const FString& Message)
{
    FString OutputMessage = BuildLogMessage(Message);
    UE_LOG(LogTemp, Log, TEXT("[BCR] %s"), *OutputMessage);
}

/**
 * @brief Logs a custom message to the screen without object context
 * @details Simple on-screen logging for standalone messages
 * 
 * @param Message The message to log
 * @param Duration How long to display the message on screen
 * @param Color Color of the on-screen message
 */
void IBCR_Helper::CustomLogScreen(const FString& Message, float Duration, FColor Color)
{
    if (!GEngine) return;

    FString OutputMessage = BuildLogMessage(Message);
    GEngine->AddOnScreenDebugMessage(-1, Duration, Color,
        FString::Printf(TEXT("[BCR] %s"), *OutputMessage));
}

/**
 * @brief Logs a custom message to both console and screen without object context
 * @details Combines CustomLogConsole and CustomLogScreen functionality
 * 
 * @param Message The message to log
 * @param Duration How long to display the message on screen
 * @param Color Color of the on-screen message
 */
void IBCR_Helper::CustomLogAll(const FString& Message, float Duration, FColor Color)
{
    CustomLogConsole(Message);
    CustomLogScreen(Message, Duration, Color);
}

/**
 * @brief Extracts basic information from a UObject
 * @details Gets object name and class name for logging purposes
 * 
 * @param Object The object to extract information from
 * @return Formatted string with object name and class
 */
FString IBCR_Helper::GetBasicObjectInfo(const UObject* Object)
{
    return FString::Printf(TEXT("Name: %s | Class: %s"),
        *Object->GetName(),
        *Object->GetClass()->GetName());
}

/**
 * @brief Builds a comprehensive log message with object context
 * @details Combines object info, custom info, location (for actors), and message
 * 
 * @param Message The message to include in the log
 * @return Complete formatted log message
 */
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