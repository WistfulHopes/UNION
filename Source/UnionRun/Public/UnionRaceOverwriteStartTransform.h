#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionRaceOverwriteStartTransform.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceOverwriteStartTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
    FUnionRaceOverwriteStartTransform();
};

