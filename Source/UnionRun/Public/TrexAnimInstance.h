#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "TrexAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UTrexAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTurnEnd;
    
public:
    UTrexAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsTurnEnd(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTurn(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMove(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDamage(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttack(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTurnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAttack();
    
};

