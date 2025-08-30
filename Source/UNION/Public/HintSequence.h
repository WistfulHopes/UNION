#pragma once
#include "CoreMinimal.h"
#include "OnBackEventDelegate.h"
#include "MenuSequenceSubStateBase.h"
#include "HintSequence.generated.h"

class UHintTop;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UHintSequence : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHintTop> _HintWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintTop* _HintWidget;
    
public:
    UHintSequence(const FObjectInitializer& ObjectInitializer);

};

