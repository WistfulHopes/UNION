#pragma once
#include "CoreMinimal.h"
#include "OnBackEventDelegate.h"
#include "MenuSequenceSubStateBase.h"
#include "OptionState.generated.h"

class AOptionProcessor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AOptionProcessor> OptionActorClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOptionProcessor* OptionActor;
    
public:
    UOptionState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnExitMenu();
    
};

