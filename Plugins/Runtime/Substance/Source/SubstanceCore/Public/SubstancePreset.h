#pragma once
#include "CoreMinimal.h"
#include "SubstancePreset.generated.h"

USTRUCT(BlueprintType)
struct FSubstancePreset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavedPresetString;
    
public:
    SUBSTANCECORE_API FSubstancePreset();
};

