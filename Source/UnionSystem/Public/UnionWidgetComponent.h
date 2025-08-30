#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "UnionWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UUnionWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

