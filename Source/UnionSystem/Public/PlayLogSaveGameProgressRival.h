#pragma once
#include "CoreMinimal.h"
#include "PlayLogSpeedSelectPlayCount.h"
#include "PlayLogSaveGameProgressRival.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameProgressRival {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSpeedSelectPlayCount PlayCount[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSpeedSelectPlayCount ClearCount[10];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameProgressRival();
};

