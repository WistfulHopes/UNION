#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AppUserBaseData.h"
#include "AuthSubsystemOnLoginCompleteDelegate.h"
#include "AuthSubsystemOnLogoutCompleteDelegate.h"
#include "FairPointCheckFairPointResponse.h"
#include "UserGetDataResponse.h"
#include "AuthSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAuthSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAuthSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartLogout(int32 LocalUserNum, FAuthSubsystemOnLogoutComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void StartLogin(int32 LocalUserNum, FAuthSubsystemOnLoginComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetupCachedAppUserBaseData();
    
    UFUNCTION(BlueprintCallable)
    void SetCachedAppUserFairPlayPointData(const FFairPointCheckFairPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedAppUserBaseData(const FUserGetDataResponse& Response);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteUserGetDataRequest(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchLoggedInUserId(const FString& ProductUserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlatformToken(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnlineTokenFromnUniqueNetId(const FUniqueNetIdRepl& UserId, FString& outToken);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnlineToken(int32 LocalUserNum, FString& outToken);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOnlineEnvironment(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoggedInUserIdString(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetLoggedInUserId(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoggedInPlayerNickname(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetExternalAccountId(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEOSAuthToken(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FAppUserBaseData GetCachedAppUserBaseData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAuthenticatedWith(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintLoggedInUserInfo(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    void DebugGetOnlineToken(const FString& Endpoint, int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl CreateUniquePlayerId(const FString& PlayerIdString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl CreatePlatformUniquePlayerId(const FString& PlayerIdString) const;
    
};

