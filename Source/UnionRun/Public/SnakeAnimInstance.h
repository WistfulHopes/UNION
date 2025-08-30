#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "SnakeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API USnakeAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDamage;
    
public:
    USnakeAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsIdle(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDamage(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttack(bool flag);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDamage();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAttack();
    
};

