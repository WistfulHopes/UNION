#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMachineAuraId.h"
#include "CheatAura.generated.h"

UCLASS(Blueprintable)
class UCheatAura : public UObject {
    GENERATED_BODY()
public:
    UCheatAura();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAura();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayRandomAuraEffect();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayAuraEffectID(EMachineAuraId InAuraID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayAuraEffect();
    
};

