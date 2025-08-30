#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatPlayerLevel.generated.h"

UCLASS(Blueprintable)
class UCheatPlayerLevel : public UObject {
    GENERATED_BODY()
public:
    UCheatPlayerLevel();

    UFUNCTION(BlueprintCallable, Exec)
    void UseDonpaTicket(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerTotalRaceCount(int32 InPlayerTotalRaceCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOfflineResultForcePressed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFestaPoint(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDonpaTicket(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReactionDebugLogOn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddFestaPoint(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddDonpaTicket(int32 InNum);
    
};

