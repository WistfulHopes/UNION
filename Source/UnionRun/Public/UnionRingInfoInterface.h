#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UnionTakeRingInfo.h"
#include "UnionRingInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionRingInfoInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionRingInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeTakeRingEvent(int32 RacerIndex, const FUnionTakeRingInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeTakeRedStarRingEvent(int32 RacerIndex, int32 RingIndex);
    
};

