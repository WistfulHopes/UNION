#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RaceActionTutorialStageData.h"
#include "RaceActionTutorialData.generated.h"

UCLASS(Blueprintable)
class URaceActionTutorialData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceActionTutorialStageData RaceActionTutorial[94];
    
    URaceActionTutorialData();

    UFUNCTION(BlueprintCallable)
    void LoadStageId();
    
};

