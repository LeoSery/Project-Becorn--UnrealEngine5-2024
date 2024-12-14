#include "BCR/Headers/System/QTE/QTEConfigurationTypes.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"

FQTEConfiguration UQTEConfigurationAsset::ToRuntimeConfig() const
{
    FQTEConfiguration RuntimeConfig;
    
    RuntimeConfig.ConfigurationName = ConfigurationName;
    RuntimeConfig.TotalTime = Configuration.TotalTime;
    RuntimeConfig.WidgetClass = Configuration.WidgetClass;
    RuntimeConfig.SnapPoints = Configuration.SnapPoints;

    // Validation
    if (RuntimeConfig.SnapPoints.Num() == 0)
    {
        IBCR_Helper::LogScreen(this, TEXT("Configuration invalide : aucun snap point configuré"),
            5.0f, FColor::Red);
    }
    
    if (RuntimeConfig.SnapPoints.Num() > 2)
    {
        IBCR_Helper::LogScreen(this, TEXT("Configuration invalide : trop de snap points configurés"),
            5.0f, FColor::Red);
    }

    return RuntimeConfig;
}
