#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SummonRingAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API USummonRingAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExit;
    
public:
    USummonRingAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsStart(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExit(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExit();
    
};

