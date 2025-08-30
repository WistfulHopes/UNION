#pragma once
#include "CoreMinimal.h"
#include "OnlineErrorBP.h"
#include "SequenceStateNetworkCleanup.h"
#include "WirelessSequenceStateToOffline.generated.h"

class UWirelessLobbyContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UWirelessSequenceStateToOffline : public USequenceStateNetworkCleanup {
    GENERATED_BODY()
public:
    UWirelessSequenceStateToOffline(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteInitializeWirelessMode(UWirelessLobbyContext* WirelessLobbyContext, const FOnlineErrorBP& Error);
    
};

