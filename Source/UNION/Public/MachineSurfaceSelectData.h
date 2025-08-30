#pragma once
#include "CoreMinimal.h"
#include "MachineSurfaceSelectData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineSurfaceSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MachineSurfaceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FMachineSurfaceSelectData();
};

