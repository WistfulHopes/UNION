#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "WhaleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UWhaleAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsJamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsJampTwist;
    
public:
    UWhaleAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsJampTwist(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsJamp(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsJampTwist();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsJamp();
    
};

