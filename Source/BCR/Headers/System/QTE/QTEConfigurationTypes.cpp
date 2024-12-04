
#include "QTEConfigurationTypes.h"
#include "BCR/Headers/Interfaces/BCR_Helper.h"
#include "BCR/Headers/Player/MainPlayer.h"
#include "UObject/ObjectMacros.h"

/**
* @brief Creates runtime config from asset data
* Validates player indices and converts all sequences/actions
* Handles widget overrides and parameter mapping
*/
FQTEConfiguration UQTEConfigurationAsset::ToRuntimeConfig(const TArray<AMainPlayer*>& Players)
{
	FQTEConfiguration RuntimeConfig;
    
    RuntimeConfig.RepeatCount = RepeatCount;
    RuntimeConfig.TotalTime = TotalTimeLimit;
    RuntimeConfig.WidgetClass = DefaultWidgetClass;
    
    for (const FQTESequenceData& SequenceData : Sequences)
    {
        FQTESequence RuntimeSequence;
        
        if (SequenceData.CustomWidget)
        {
            RuntimeConfig.WidgetClass = SequenceData.CustomWidget;
        }
        
        for (const FQTEPlayerSequenceData& PlayerSeq : SequenceData.PlayerSequences)
        {
            if (!Players.IsValidIndex(PlayerSeq.PlayerIndex))
            {
                IBCR_Helper::LogScreen(this, 
                    FString::Printf(TEXT("Index de joueur invalide %d dans la séquence %s"), 
                        PlayerSeq.PlayerIndex, *SequenceData.SequenceName),
                    5.0f, FColor::Red);
                continue;
            }
            
            AMainPlayer* Player = Players[PlayerSeq.PlayerIndex];
            FPlayerSubSequence RuntimeSubSequence;
            
            for (const FQTEActionData& ActionData : PlayerSeq.Actions)
            {
                FQTEInputStep Step;
                Step.InputType = ActionData.InputType;
                Step.RequiredInput = ActionData.RequiredKey;
                Step.TimeWindow = ActionData.TimeWindow;
                
                switch (ActionData.InputType)
                {
                case EQTEInputType::Hold:
                    Step.Parameters.Add("HoldTime", ActionData.HoldDuration);
                    break;

                case EQTEInputType::StickMove:
                    Step.Parameters.Add("DirX", ActionData.StickDirection.X);
                    Step.Parameters.Add("DirY", ActionData.StickDirection.Y);
                    Step.Parameters.Add("Tolerance", ActionData.DirectionTolerance);
                    break;
                }

                RuntimeSubSequence.Steps.Add(Step);
            }

            RuntimeSequence.PlayerSubSequences.Add(Player, RuntimeSubSequence);
        }

        RuntimeConfig.Sequences.Add(RuntimeSequence);
    }

    return RuntimeConfig;
}
