#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStageId.h"
#include "TravelRingAnotherCourseParamTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FTravelRingAnotherCourseParamTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    FTravelRingAnotherCourseParamTable();
};

