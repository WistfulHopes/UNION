#pragma once
#include "CoreMinimal.h"
#include "NetMasterDataVersion.h"
#include "NetMasterDataVersionData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterDataVersionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterDataVersion> masterVersionData;
    
    UNIONSYSTEM_API FNetMasterDataVersionData();
};

