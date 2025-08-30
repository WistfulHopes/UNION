#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseFrontPartsData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseFrontPartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrontPartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseFrontPartsData();
};

