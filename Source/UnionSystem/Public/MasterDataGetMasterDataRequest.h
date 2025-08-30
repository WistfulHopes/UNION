#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataRequest.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> masterDataNames;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataRequest();
};

