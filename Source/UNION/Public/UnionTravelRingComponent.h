#pragma once
#include "CoreMinimal.h"
#include "SceneCaptureComponentEx.h"
#include "UnionTravelRingComponent.generated.h"

class AUnionTravelRingActor;
class AUnionTravelRingLevelActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UUnionTravelRingComponent : public USceneCaptureComponentEx {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionTravelRingLevelActor* OwnerTravelRingLevelActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionTravelRingActor* OwnerRingActor_;
    
public:
    UUnionTravelRingComponent(const FObjectInitializer& ObjectInitializer);

};

