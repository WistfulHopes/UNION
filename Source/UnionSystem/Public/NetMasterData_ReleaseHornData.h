#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseHornData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseHornData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hornId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseHornData();
};

