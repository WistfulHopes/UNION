#pragma once
#include "CoreMinimal.h"
#include "ItemPerformanceBase.h"
#include "FootcutWarpRingPerformance.generated.h"

class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNION_API AFootcutWarpRingPerformance : public AItemPerformanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* WarpStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* WarpEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarInvisibleTimeRatio;
    
    AFootcutWarpRingPerformance(const FObjectInitializer& ObjectInitializer);

};

