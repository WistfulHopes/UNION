#pragma once
#include "CoreMinimal.h"
#include "EGUNHunterShootState.h"
#include "EGUNHunterStartType.h"
#include "EnemyAnimInstance.h"
#include "GUNHunterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UGUNHunterAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAttackCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDownAttack;
    
    UGUNHunterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsDead(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttackCharge(bool isChange);
    
    UFUNCTION(BlueprintCallable)
    void OnStartShootEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartMotion(EGUNHunterStartType Motion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootState(EGUNHunterShootState State, bool isDown) const;
    
};

