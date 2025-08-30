#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GhostMachineMaterialData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGhostMachineMaterialData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontOpacity;
    
    FGhostMachineMaterialData();
};

