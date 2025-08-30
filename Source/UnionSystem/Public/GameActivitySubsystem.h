#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActivityObjectIdData.h"
#include "EndActivityOption.h"
#include "GameActivitySubsystemOnChangeActivityAvailabilityCompleteDelegate.h"
#include "GameActivitySubsystemOnEndActivityCompleteDelegate.h"
#include "GameActivitySubsystemOnStartActivityCompleteDelegate.h"
#include "StartActivityOption.h"
#include "GameActivitySubsystem.generated.h"

UCLASS(Blueprintable, Config=UnionNetwork)
class UNIONSYSTEM_API UGameActivitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameActivitySubsystem();

    UFUNCTION(BlueprintCallable)
    void StartActivity(int32 LocalUserNum, const FActivityObjectIdData& ActivityIdData, const FStartActivityOption& Option, FGameActivitySubsystemOnStartActivityComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(int32 LocalUserNum, const FActivityObjectIdData& ActivityIdData, const FEndActivityOption& Option, FGameActivitySubsystemOnEndActivityComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActivityAvailability(int32 LocalUserNum, const FActivityObjectIdData& ActivityIdData, FGameActivitySubsystemOnChangeActivityAvailabilityComplete OnComplete);
    
};

