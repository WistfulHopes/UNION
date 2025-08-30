#pragma once
#include "CoreMinimal.h"
#include "DeviceChangeInterfacesPerPlayer.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDeviceChangeInterfacesPerPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> DeviceChangesIF;
    
    UNIONSYSTEM_API FDeviceChangeInterfacesPerPlayer();
};

