#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "NalAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UNalAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UNalAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTakeDamageMotion() const;
    
};

