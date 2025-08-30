#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseRearPartsData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseRearPartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RearPartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseRearPartsData();
};

