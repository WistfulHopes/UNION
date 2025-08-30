#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ETeamBoostType.h"
#include "UnionGroupInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionGroupInfoInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionGroupInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeCompletedChargeGroupEvent(int32 RacerIndex, ETeamBoostType TeamBoostType);
    
};

