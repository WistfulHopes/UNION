#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnlineMatchSubsystem.generated.h"

class UFont;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UOnlineMatchSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPeerChangeStatusClosed, const FUniqueNetIdRepl&, UserId, bool, bIsConnecting);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPeerChangeStatusClosed PeerChangeStatusClosedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
public:
    UOnlineMatchSubsystem();

    UFUNCTION(BlueprintCallable)
    bool ShutdownMatch();
    
    UFUNCTION(BlueprintCallable)
    void SetupLocalUser(const FUniqueNetIdRepl LocalUserId);
    
    UFUNCTION(BlueprintCallable)
    void SetHostRemoteUser(const FUniqueNetIdRepl UserId);
    
    UFUNCTION(BlueprintCallable)
    void SetHostLocalUser();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCheckNetworkOnlineComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetupLocalUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableOnlineSinglePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FUniqueNetIdRepl GetOnlineIndexToPeerUserId(int32 OnlineIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineIndex(const FUniqueNetIdRepl& UserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineConnectPeerCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLocalUser();
    
};

