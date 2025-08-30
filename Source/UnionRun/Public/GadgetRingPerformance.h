#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GadgetRingPerformance.generated.h"

class UCurveFloat;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGadgetRingPerformance : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RingMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotateCurve;
    
    AGadgetRingPerformance(const FObjectInitializer& ObjectInitializer);

};

