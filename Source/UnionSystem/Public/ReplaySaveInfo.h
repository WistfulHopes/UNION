#pragma once
#include "CoreMinimal.h"
#include "ReplayEventDataBuffer.h"
#include "ReplayHeader.h"
#include "ReplayMachineData.h"
#include "ReplayStatusDataBuffer.h"
#include "ReplaySaveInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FReplaySaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayHeader Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayMachineData MachineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayStatusDataBuffer StatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayEventDataBuffer ReplayEventData;
    
    FReplaySaveInfo();
};

