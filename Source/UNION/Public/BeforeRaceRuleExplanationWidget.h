#pragma once
#include "CoreMinimal.h"
#include "UnionUISequenceInterface.h"
#include "AnimFinishedDelegateDelegate.h"
#include "CommonUserWidget.h"
#include "BeforeRaceRuleExplanationWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UBeforeRaceRuleExplanationWidget : public UCommonUserWidget, public IUnionUISequenceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimFinishedDelegate OnAnimFinished;
    
    UBeforeRaceRuleExplanationWidget();


    // Fix for true pure virtual functions not being implemented
};

