#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ERaceInfoStateType.h"
#include "UnionRaceInfoInterface.generated.h"

class UUnionRaceInfo;

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionRaceInfoInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionRaceInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRaceInfo(UUnionRaceInfo* InRaceInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeRaceFinishEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeChangeRaceStateEvent(ERaceInfoStateType InNewState, ERaceInfoStateType InOldState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeChangeCountDownEvent(int32 InNewValue, int32 InOldValue);
    
};

