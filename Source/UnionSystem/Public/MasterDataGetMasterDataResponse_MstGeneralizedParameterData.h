#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstGeneralizedParameterData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse_MstGeneralizedParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse_MstGeneralizedParameterData();
};

