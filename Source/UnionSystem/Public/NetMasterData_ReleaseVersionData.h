#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseVersionData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseVersionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString versionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseVersionData();
};

