#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SteamController2KeyMapping.generated.h"

USTRUCT(BlueprintType)
struct STEAMCONTROLLER2_API FSteamController2KeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    FSteamController2KeyMapping();
};

