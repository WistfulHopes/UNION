#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetVersionResponse_MasterVersionData.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetVersionResponse_MasterVersionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UNIONSYSTEM_API FMasterDataGetVersionResponse_MasterVersionData();
};

