#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseAuraData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseAuraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AuraId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseAuraData();
};

