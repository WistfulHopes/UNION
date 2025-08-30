#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LobbyId.h"
#include "LobbyJoinInfo.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API ULobbyJoinInfo : public UObject {
    GENERATED_BODY()
public:
    ULobbyJoinInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccepted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSessionInvite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetSourceUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourceDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPasswrod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyId GetLobbyId() const;
    
};

