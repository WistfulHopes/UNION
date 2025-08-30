#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/LatentActionManager.h"
#include "CreateOrConnectLobbyResult.h"
#include "LobbyId.h"
#include "ELobbyType.h"
#include "OnWirelessModeOperarionCompleteDelegate.h"
#include "Templates/SubclassOf.h"
#include "NetDataManageSubsystem.generated.h"

class UConsecutiveRaceDataContext;
class UDebugSquadAutoPlay;
class UFont;
class ULobbyContextBase;
class ULobbyJoinInfo;

UCLASS(Blueprintable, Config=UnionNetwork)
class UNION_API UNetDataManageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyContextBase* CurrentPublicLobbyContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyContextBase* CurrentPrivateLobbyContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UConsecutiveRaceDataContext* ConsecutiveRaceDataContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyJoinInfo* AcceptLobbyInviteInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLobbyId SearchLobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugSquadAutoPlay* SquadAutoPlay;
    
public:
    UNetDataManageSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSearchLobbyId(const FLobbyId& InLobbyId);
    
    UFUNCTION(BlueprintCallable)
    void SetPublicLobbyContext(ULobbyContextBase* LobbyContext);
    
    UFUNCTION(BlueprintCallable)
    void SetPrivateLobbyContext(ULobbyContextBase* LobbyContext);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceptLobbyInviteInfo(ULobbyJoinInfo* InAcceptLobbyInviteInfo);
    
    UFUNCTION(BlueprintCallable)
    void SendDebugChangeFairPlayPoint(int32 NewPoint);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void QuitPublicLobby(FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void QuitPrivateLobby(FLatentActionInfo LatentInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSendDebugChangeRankMatchRate(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnSendDebugChangeFairPlayPoint(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningPublicLobby(TSubclassOf<ULobbyContextBase> LobbyContextClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningPrivateLobby(TSubclassOf<ULobbyContextBase> LobbyContextClass) const;
    
    UFUNCTION(BlueprintCallable)
    void GetSearchLobbyId(FLobbyId& OutLobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyContextBase* GetPublicLobbyContextByClass(TSubclassOf<ULobbyContextBase> LobbyContextClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyContextBase* GetPublicLobbyContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyContextBase* GetPrivateLobbyContextByClass(TSubclassOf<ULobbyContextBase> LobbyContextClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyContextBase* GetPrivateLobbyContext() const;
    
    UFUNCTION(BlueprintCallable)
    ULobbyContextBase* GetCurrentJoinedLobbyForMatchmaking(TSubclassOf<ULobbyContextBase> LobbyContextClass, bool& bIsPublicLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UConsecutiveRaceDataContext* GetConsecutiveRaceDataContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyJoinInfo* GetAcceptLobbyInviteInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void FinalizeWirelessMode(const FOnWirelessModeOperarionComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void DeleteConsecutiveRaceDataContext();
    
    UFUNCTION(BlueprintCallable)
    ULobbyContextBase* CreatePublicLobbyContextByMatchmakingResult(TSubclassOf<ULobbyContextBase> LobbyContextClass, int32 LocalUserNum, const FCreateOrConnectLobbyResult& MatchmakingResult);
    
    UFUNCTION(BlueprintCallable)
    ULobbyContextBase* CreatePublicLobbyContext(TSubclassOf<ULobbyContextBase> LobbyContextClass);
    
    UFUNCTION(BlueprintCallable)
    ULobbyContextBase* CreatePrivateLobbyContext(TSubclassOf<ULobbyContextBase> LobbyContextClass);
    
    UFUNCTION(BlueprintCallable)
    UConsecutiveRaceDataContext* CreateConsecutiveRaceDataContext(TSubclassOf<UConsecutiveRaceDataContext> RaceDataContextClass);
    
    UFUNCTION(BlueprintCallable)
    bool CheckVaildLobbyInviteInfo(ULobbyContextBase* LobbyContext, ELobbyType TargetLobbyType);
    
};

