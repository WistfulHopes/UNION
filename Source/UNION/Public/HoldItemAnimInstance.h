#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ActivateItemDispatherDelegate.h"
#include "HoldItemAnimInstance.generated.h"

class IHoldItemAnimator;
class UHoldItemAnimator;

UCLASS(Blueprintable, NonTransient)
class UNION_API UHoldItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHoldItemAnimator> HoldItemAnimator;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivateItemDispather OnActivateItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyAtEndAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingUses;
    
    UHoldItemAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsed() const;
    
};

