#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StaticBodyBoxParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FStaticBodyBoxParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfExtents;
    
    FStaticBodyBoxParam();
};

