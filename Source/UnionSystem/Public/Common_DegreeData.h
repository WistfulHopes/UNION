#pragma once
#include "CoreMinimal.h"
#include "Common_DegreeData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_DegreeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 degreeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 plateId;
    
    UNIONSYSTEM_API FCommon_DegreeData();
};

