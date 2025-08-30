#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LobbySequenceBaseInterface.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;

UINTERFACE(Blueprintable, MinimalAPI)
class ULobbySequenceBaseInterface : public UInterface {
    GENERATED_BODY()
};

class ILobbySequenceBaseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberUpdateFromComponent(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberPromoteFromComponent(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberDisconnectFromComponent(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext, bool bWasKicked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberConnectFromComponent(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyUpdateFromComponent(ULobbyContextBase* LobbyContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyDeleteFromComponent(ULobbyContextBase* LobbyContext);
    
};

