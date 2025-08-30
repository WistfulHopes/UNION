#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LineGuideData.generated.h"

class ULineGuideDataAsset;

USTRUCT(BlueprintType)
struct UNIONRUN_API FLineGuideData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULineGuideDataAsset* SonicSpeedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULineGuideDataAsset* SuperSonicSpeedData;
    
    FLineGuideData();
};

