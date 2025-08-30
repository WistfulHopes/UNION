#pragma once
#include "CoreMinimal.h"
#include "NetMasterDataVersion.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterDataVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UNIONSYSTEM_API FNetMasterDataVersion();
};

