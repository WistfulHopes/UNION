#pragma once
#include "CoreMinimal.h"
#include "HoldItemQualitySettings.h"
#include "HoldItemSettings.generated.h"

USTRUCT(BlueprintType)
struct FHoldItemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldItemQualitySettings PC[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldItemQualitySettings NonPC[3];
    
    UNIONSYSTEM_API FHoldItemSettings();
};

