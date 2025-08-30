#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EKeyConfigRace.h"
#include "EMenuInputKey.h"
#include "UserKeyConfigMap.generated.h"

USTRUCT(BlueprintType)
struct FUserKeyConfigMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuInputKey, FKey> MenuKeyConfigGamePad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuInputKey, FKey> MenuKeyConfigKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKeyConfigRace, FKey> RaceKeyConfigGamePad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKeyConfigRace, FKey> RaceKeyConfigKeyboard;
    
    UNIONSYSTEM_API FUserKeyConfigMap();
};

