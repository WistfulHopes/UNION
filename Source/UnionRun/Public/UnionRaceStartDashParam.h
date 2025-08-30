#pragma once
#include "CoreMinimal.h"
#include "UnionRaceStartDashParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceStartDashParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_SCORE_ACCELE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_SCORE_RELEASE1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_SCORE_RELEASE2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_LV3_PIVOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_LV3_RANGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_LV2_PIVOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_LV2_RANGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_NG1_PIVOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_NG1_RANGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_NG2_PIVOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float STARTDASH_NG2_RANGE;
    
    FUnionRaceStartDashParam();
};

