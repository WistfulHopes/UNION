#pragma once
#include "CoreMinimal.h"
#include "HoudiniHLODLayer.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniHLODLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    HOUDINIENGINERUNTIME_API FHoudiniHLODLayer();
};

