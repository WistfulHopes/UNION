#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "MenuSequenceSubStateBase.h"
#include "RewardGetWindowParam.h"
#include "GetFreeContentState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGetFreeContentState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGetFreeContentState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetSaveData(TArray<FRewardGetWindowParam> RewardData);
    
    UFUNCTION(BlueprintCallable)
    bool CheckUnlockCutscenCharacter(const TArray<FRewardGetWindowParam>& RewardData, TArray<EDriverId>& CutsceneCharacterList);
    
};

