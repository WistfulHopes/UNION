#pragma once
#include "CoreMinimal.h"
#include "ConsecutiveRaceDataContext.h"
#include "FestaConsecutiveRaceDataContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UFestaConsecutiveRaceDataContext : public UConsecutiveRaceDataContext {
    GENERATED_BODY()
public:
    UFestaConsecutiveRaceDataContext();

    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinalRace();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConsecutiveWinNum(int32 SquadIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void AddConsecutiveWinNum(int32 SquadIndex);
    
};

