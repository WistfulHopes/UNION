#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "RewardGetWindowParam.h"
#include "NoticeEventEndState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UNoticeEventEndState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UNoticeEventEndState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetSaveData(TArray<FRewardGetWindowParam> RewardDataList);
    
};

