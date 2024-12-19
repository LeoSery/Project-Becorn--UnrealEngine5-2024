#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BCR_Helper.generated.h"

UINTERFACE(MinimalAPI)
class UBCR_Helper : public UInterface
{
    GENERATED_BODY()
};

class BCR_API IBCR_Helper
{
    GENERATED_BODY()

public:
    // Méthodes statiques
    static void LogConsole(const UObject* Context, const FString& Message = TEXT(""));
    static void LogScreen(const UObject* Context, const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);
    static void LogAll(const UObject* Context, const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);

    // Méthodes d'interface
    virtual void CustomLogConsole(const FString& Message = TEXT(""));
    virtual void CustomLogScreen(const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);
    virtual void CustomLogAll(const FString& Message = TEXT(""),
        float Duration = 5.0f, FColor Color = FColor::White);

protected:
    // Fonction à override pour personnaliser les infos
    virtual FString GetCustomLogInfo() const = 0;

private:
    static FString GetBasicObjectInfo(const UObject* Object);
    FString BuildLogMessage(const FString& Message) const;
};
