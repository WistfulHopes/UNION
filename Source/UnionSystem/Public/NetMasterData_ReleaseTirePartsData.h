#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseTirePartsData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseTirePartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TirePartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseTirePartsData();
};

