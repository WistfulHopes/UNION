#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "HeadButtTrexAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UHeadButtTrexAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAppear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMirror;
    
public:
    UHeadButtTrexAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsMirror(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDamage(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttack(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAppear(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMirror();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAppear();
    
};

