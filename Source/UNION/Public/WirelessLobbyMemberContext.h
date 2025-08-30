#pragma once
#include "CoreMinimal.h"
#include "CustomMatchLobbyMemberContext.h"
#include "WirelessLobbyMemberContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UWirelessLobbyMemberContext : public UCustomMatchLobbyMemberContext {
    GENERATED_BODY()
public:
    UWirelessLobbyMemberContext();

    UFUNCTION(BlueprintCallable)
    bool ReplyReadyCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
};

