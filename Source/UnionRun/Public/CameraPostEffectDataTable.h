#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CameraPostEffectDataTable.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCameraPostEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PostEffectMaterialInterface;
    
    UNIONRUN_API FCameraPostEffectDataTable();
};

