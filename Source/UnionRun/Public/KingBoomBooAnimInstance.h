#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "KingBoomBooAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UKingBoomBooAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttackEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnd;
    
public:
    UKingBoomBooAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsStart(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMove(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExit(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnd(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttackEnd(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttack(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAttackEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAttack();
    
};

