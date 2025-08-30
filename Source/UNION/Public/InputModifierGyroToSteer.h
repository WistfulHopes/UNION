#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "InputModifierGyroToSteer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierGyroToSteer : public UInputModifier {
    GENERATED_BODY()
public:
    UInputModifierGyroToSteer();

};

