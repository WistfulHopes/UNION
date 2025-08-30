#pragma once
#include "CoreMinimal.h"
#include "OnlineErrorBP.h"
#include "CustomMatchLobbyControlComponent.h"
#include "OnWirelessModeOperarionCompleteDelegate.h"
#include "Templates/SubclassOf.h"
#include "WirelessLobbyControlComponent.generated.h"

class UWirelessLobbyContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UWirelessLobbyControlComponent : public UCustomMatchLobbyControlComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWirelessLobbyContext> LobbyContextClass;
    
public:
    UWirelessLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteJoinWirelessSession(UWirelessLobbyContext* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteCreateWirelessSession(UWirelessLobbyContext* LobbyContext, const FOnlineErrorBP& Error);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeWirelessMode(int32 LocalUserNum, const FOnWirelessModeOperarionComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeWirelessMode(const FOnWirelessModeOperarionComplete& OnComplete);
    
};

