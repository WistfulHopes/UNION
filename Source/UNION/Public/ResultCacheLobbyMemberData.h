#pragma once
#include "CoreMinimal.h"
#include "EAppSupportedPlatform.h"
#include "EDriverId.h"
#include "ResultCacheLobbyMemberData.generated.h"

USTRUCT(BlueprintType)
struct FResultCacheLobbyMemberData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppSupportedPlatform PlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankRate;
    
    UNION_API FResultCacheLobbyMemberData();
};

