#pragma once
#include "CoreMinimal.h"
#include "SimpleAnimationComponent.h"
#include "UnionSimpleAnimEvent.h"
#include "SimpleAnimEventComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API USimpleAnimEventComponent : public USimpleAnimationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionSimpleAnimEvent> AnimEventSequence;
    
    USimpleAnimEventComponent(const FObjectInitializer& ObjectInitializer);

};

