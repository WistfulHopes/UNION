#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseGadgetData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseGadgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseGadgetData();
};

