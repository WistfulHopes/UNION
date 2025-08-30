#pragma once
#include "CoreMinimal.h"
#include "LoginCheckResponse_MasterVersionDatas.generated.h"

USTRUCT(BlueprintType)
struct FLoginCheckResponse_MasterVersionDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UNIONSYSTEM_API FLoginCheckResponse_MasterVersionDatas();
};

