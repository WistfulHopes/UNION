#pragma once
#include "CoreMinimal.h"
#include "HoudiniDataLayer.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniDataLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateIfNeeded;
    
    HOUDINIENGINERUNTIME_API FHoudiniDataLayer();
};

