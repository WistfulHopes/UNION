#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MachineSurfaceData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct UNION_API FMachineSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionParam;
    
    FMachineSurfaceData();
};

