#pragma once
#include "CoreMinimal.h"
#include "PlayLogOption.h"
#include "PlayLogSaveGameCondition.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayTrialTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FriendNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoginDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Revision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogOption Option;
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameCondition();
};

