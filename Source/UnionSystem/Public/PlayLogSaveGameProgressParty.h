#pragma once
#include "CoreMinimal.h"
#include "PlayLogSpeedSelectPlayCount.h"
#include "PlayLogSaveGameProgressParty.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameProgressParty {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSpeedSelectPlayCount SpeedSelect[17];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameProgressParty();
};

