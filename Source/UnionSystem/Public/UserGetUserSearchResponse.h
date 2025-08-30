#pragma once
#include "CoreMinimal.h"
#include "Common_UserSearchData.h"
#include "UserGetUserSearchResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserSearchResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserSearchData> userSearchDatas;
    
    UNIONSYSTEM_API FUserGetUserSearchResponse();
};

