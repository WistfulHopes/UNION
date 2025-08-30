#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatHorn.generated.h"

class AMenuRacerBase;

UCLASS(Blueprintable)
class UNION_API UCheatHorn : public UObject {
    GENERATED_BODY()
public:
    UCheatHorn();

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockHorn();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void UnBindRacerHorn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRacerHorn(int32 InRacerIndex, int32 InHornIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllRacerHorn(int32 InHornIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayRandomRacerHorn();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AMenuRacerBase*> GetAllLobbyRacers();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void BindRandomRacerHorn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BindRacerHorn(int32 InRacerNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BindAllRacerHorn();
    
};

