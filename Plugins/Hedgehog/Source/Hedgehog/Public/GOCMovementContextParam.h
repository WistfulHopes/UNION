#pragma once
#include "CoreMinimal.h"
#include "GOCMovementTRData.h"
#include "GOCMovementContextParam.generated.h"

USTRUCT(BlueprintType)
struct HEDGEHOG_API FGOCMovementContextParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGOCMovementTRData prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGOCMovementTRData Current;
    
    FGOCMovementContextParam();
};

