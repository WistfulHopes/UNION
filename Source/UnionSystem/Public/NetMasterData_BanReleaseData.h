#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_BanReleaseData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_BanReleaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 banLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 banUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 releaseHour;
    
    UNIONSYSTEM_API FNetMasterData_BanReleaseData();
};

