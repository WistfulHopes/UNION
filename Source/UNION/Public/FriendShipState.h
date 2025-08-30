#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "MenuSequenceSubStateBase.h"
#include "FriendShipState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UFriendShipState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UFriendShipState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGivedTicket(EDriverId ID, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    float PlayVoice(EDriverId InDriverId, bool bVeryHappy);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGivedTicket(EDriverId ID);
    
};

