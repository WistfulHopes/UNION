#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ObakeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UObakeAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIdle;
    
public:
    UObakeAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsIdle(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttack(bool flag);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsIdle();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAttack();
    
};

