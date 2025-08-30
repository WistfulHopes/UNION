#pragma once
#include "CoreMinimal.h"
#include "UnionRaceReturnDashParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceReturnDashParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RETURNDASH_SCORE_SUCCESSPIVOT_MIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RETURNDASH_SCORE_SUCCESSPIVOT_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RETURNDASH_SCORE_SUCCESSRANGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RETURNDASH_SCORE_SPAWNOFFSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RETURNDASH_SCORE_ACCELE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RETURNDASH_SCORE_RELEASE1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RETURNDASH_SCORE_RELEASE2;
    
    FUnionRaceReturnDashParam();
};

