#pragma once
#include "CoreMinimal.h"
#include "Common_HistoryData_CharacterUsage.generated.h"

USTRUCT(BlueprintType)
struct FCommon_HistoryData_CharacterUsage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 characterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 usageCount;
    
    UNIONSYSTEM_API FCommon_HistoryData_CharacterUsage();
};

