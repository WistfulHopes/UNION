#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETravelRingType.h"
#include "TravelRingPostProcessActor.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API ATravelRingPostProcessActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingType TravelRingType;
    
public:
    ATravelRingPostProcessActor(const FObjectInitializer& ObjectInitializer);

};

