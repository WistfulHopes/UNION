#pragma once
#include "CoreMinimal.h"
#include "UserRedStarRingAcquisitionProperty.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserRedStarRingAcquisitionProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> Acquisition;
    
    FUserRedStarRingAcquisitionProperty();
};

