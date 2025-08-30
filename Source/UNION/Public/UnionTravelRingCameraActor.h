#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETravelRingType.h"
#include "UnionRingGateCameraInterface.h"
#include "UnionTravelRingCameraActor.generated.h"

class UUnionTravelRingComponent;

UCLASS(Blueprintable)
class UNION_API AUnionTravelRingCameraActor : public AActor, public IUnionRingGateCameraInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionTravelRingComponent* RootScene_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingType TravelRingType_;
    
public:
    AUnionTravelRingCameraActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

