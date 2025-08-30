#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_GeneralizedParameterData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_GeneralizedParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UNIONSYSTEM_API FNetMasterData_GeneralizedParameterData();
};

