#pragma once
#include "CoreMinimal.h"
#include "Common_DegreeData.h"
#include "Common_GadgetData.h"
#include "Common_HistoryData.h"
#include "Common_MachineData.h"
#include "Common_UserCheatParamData.h"
#include "Common_UserOrderData.h"
#include "ResultSaveRankMatchResultRequest.generated.h"

USTRUCT(BlueprintType)
struct FResultSaveRankMatchResultRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entryRaceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserOrderData> UserOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 characterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_MachineData MachineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_GadgetData GadgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_DegreeData degreeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_HistoryData historyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rivalBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserCheatParamData> userCheatParams;
    
    UNIONSYSTEM_API FResultSaveRankMatchResultRequest();
};

