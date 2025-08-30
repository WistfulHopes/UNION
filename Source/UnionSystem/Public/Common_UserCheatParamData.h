#pragma once
#include "CoreMinimal.h"
#include "Common_UserCheatParamData_CheatParamData.h"
#include "Common_UserCheatParamData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_UserCheatParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString cheatUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserCheatParamData_CheatParamData> cheatParams;
    
    UNIONSYSTEM_API FCommon_UserCheatParamData();
};

