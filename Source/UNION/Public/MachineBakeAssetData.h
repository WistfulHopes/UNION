#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MachineBakeAssetData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct UNION_API FMachineBakeAssetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> BaseMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> BaseMaterialInstancePP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> BaseMaterialInstance2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> BaseMaterialInstancePP2;
    
    FMachineBakeAssetData();
};

