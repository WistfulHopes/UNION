#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionCameraFocusOnTarget.h"
#include "UnionCameraCarCamOffset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AUnionCameraCarCamOffset : public AUnionCameraFocusOnTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpecialCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySpecialCameraOffsetToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpecialCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialCameraOffsetLerpTime;
    
    AUnionCameraCarCamOffset(const FObjectInitializer& ObjectInitializer);

};

