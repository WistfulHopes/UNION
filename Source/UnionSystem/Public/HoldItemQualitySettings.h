#pragma once
#include "CoreMinimal.h"
#include "EHoldItemMeshType.h"
#include "HoldItemQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct FHoldItemQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHoldItemMeshType> HoldItemQualities;
    
    UNIONSYSTEM_API FHoldItemQualitySettings();
};

