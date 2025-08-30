#pragma once
#include "CoreMinimal.h"
#include "UserSavePaidDlcOwnershipsRequest.generated.h"

USTRUCT(BlueprintType)
struct FUserSavePaidDlcOwnershipsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> dlcIds;
    
    UNIONSYSTEM_API FUserSavePaidDlcOwnershipsRequest();
};

