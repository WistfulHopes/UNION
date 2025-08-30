#pragma once
#include "CoreMinimal.h"
#include "PlayLogSpeedSelectPlayCount.h"
#include "PlayLogSaveGameProgressGrandprix.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameProgressGrandprix {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSpeedSelectPlayCount SpeedSelectClear[15];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameProgressGrandprix();
};

