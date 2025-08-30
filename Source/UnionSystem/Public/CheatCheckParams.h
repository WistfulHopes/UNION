#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECheatCheckParamType.h"
#include "CheatCheckParams.generated.h"

USTRUCT(BlueprintType)
struct FCheatCheckParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheatCheckParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UNIONSYSTEM_API FCheatCheckParams();
};

