#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeGradeTableData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstLegendCompeGradeTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 legendGradeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rateValue;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstLegendCompeGradeTableData();
};

