#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_FairPlayPointData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_FairPlayPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UNIONSYSTEM_API FNetMasterData_FairPlayPointData();
};

