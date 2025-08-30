#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_LegendCompeGradeTableData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_LegendCompeGradeTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 legendGradeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rateValue;
    
    UNIONSYSTEM_API FNetMasterData_LegendCompeGradeTableData();
};

