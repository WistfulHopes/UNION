#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStageId.h"
#include "GrandPrixTravelStageSetting.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FGrandPrixTravelStageSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId TravelStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIrregular;
    
    FGrandPrixTravelStageSetting();
};

