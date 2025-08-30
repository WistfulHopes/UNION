#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseDegreeData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseDegreeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 degreeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseDegreeData();
};

