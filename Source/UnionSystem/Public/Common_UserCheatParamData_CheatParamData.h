#pragma once
#include "CoreMinimal.h"
#include "Common_UserCheatParamData_CheatParamData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_UserCheatParamData_CheatParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UNIONSYSTEM_API FCommon_UserCheatParamData_CheatParamData();
};

