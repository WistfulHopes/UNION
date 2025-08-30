#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EStageId.h"
#include "GimmickMessageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGimmickMessageInterface : public UInterface {
    GENERATED_BODY()
};

class IGimmickMessageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyStartGimmickEvent(EStageId StageId, int32 EventId, int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyStartGimmick();
    
};

