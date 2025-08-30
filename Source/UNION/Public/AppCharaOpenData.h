#pragma once
#include "CoreMinimal.h"
#include "AppCharaOpenData.generated.h"

USTRUCT(BlueprintType)
struct FAppCharaOpenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharaFullOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharaHoverFullOpen;
    
    UNION_API FAppCharaOpenData();
};

