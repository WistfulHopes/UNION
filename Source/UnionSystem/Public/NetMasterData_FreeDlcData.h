#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_FreeDlcData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_FreeDlcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dlcId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endTime;
    
    UNIONSYSTEM_API FNetMasterData_FreeDlcData();
};

