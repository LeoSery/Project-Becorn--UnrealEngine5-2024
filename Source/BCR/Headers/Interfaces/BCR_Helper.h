#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BCR_Helper.generated.h"

//////// INTERFACE DECLARATION ////////

/**
 * @brief Interface class for logging functionality
 * @details Required for Unreal's interface system - no implementation needed
 */
UINTERFACE(MinimalAPI)
class UBCR_Helper : public UInterface
{
    GENERATED_BODY()
};

//////// INTERFACE IMPLEMENTATION ////////

/**
 * @brief Custom logging system interface for BCR project
 * @details Provides static logging functions and customizable log information for objects
 */
class BCR_API IBCR_Helper
{
    GENERATED_BODY()

public:
    
    //////// STATIC LOGGING METHODS ////////
    /// Context-based logging
    static void LogConsole(const UObject* Context, const FString& Message = TEXT(""));
    static void LogScreen(const UObject* Context, const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);
    static void LogAll(const UObject* Context, const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);

    /// Custom logging without context
    virtual void CustomLogConsole(const FString& Message = TEXT(""));
    virtual void CustomLogScreen(const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);
    virtual void CustomLogAll(const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);
    
    //////// VIRTUAL INTERFACE ////////
    /// Customizable log information
    virtual FString GetCustomLogInfo() const = 0;

private:

    //////// UTILITY METHODS ////////
    /// Helper functions
    static FString GetBasicObjectInfo(const UObject* Object);
    FString BuildLogMessage(const FString& Message) const;
};
