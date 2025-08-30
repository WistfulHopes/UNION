#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "FossilTrexAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UFossilTrexAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTypeB;
    
public:
    UFossilTrexAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsTypeB(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDamage(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttack(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTYpeB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAttack();
    
};

