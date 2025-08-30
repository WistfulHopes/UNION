#pragma once
#include "CoreMinimal.h"
#include "CreateItemInfo.generated.h"

class UItemObjectLayer;

USTRUCT(BlueprintType)
struct FCreateItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* uclass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemObjectLayer* objLayer;
    
    UNIONRUN_API FCreateItemInfo();
};

