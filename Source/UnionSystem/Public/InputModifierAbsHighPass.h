#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "InputModifierAbsHighPass.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputModifierAbsHighPass : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UInputModifierAbsHighPass();

};

