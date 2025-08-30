#pragma once
#include "CoreMinimal.h"
#include "EventInfoFinalResultData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEventInfoFinalResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BGTexture;
    
    UNION_API FEventInfoFinalResultData();
};

