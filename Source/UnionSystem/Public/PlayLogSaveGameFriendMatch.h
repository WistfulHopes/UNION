#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameFriendMatch.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameFriendMatch {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresetPlayCount[17];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresetPlayTime[17];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameFriendMatch();
};

