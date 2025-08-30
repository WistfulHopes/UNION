#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CreateOrConnectLobbyResult.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "OnGameMatchmakingCompleteDelegate.h"
#include "AppNetOnErrorDelegate.h"
#include "EAppNetErrorCode.h"
#include "ECommonLobbyMemberState.h"
#include "LobbyPlayerData.h"
#include "NetLobbyControlComponent.generated.h"

class UCommonLobbyContext;
class UCommonLobbyMemberContext;
class ULobbyContextBase;
class ULobbyMemberContextBase;
class UMatchmakingRequestContext;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UNetLobbyControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNetOnError NetLobbyControlOnError;
    
public:
    UNetLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartMatchmakingForLobbyMember(UCommonLobbyContext* LobbyContext, FOnGameMatchmakingComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(int32 LocalUserNum, FOnGameMatchmakingComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool SetupLocalMemberRaceAttributes(FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateFromOwnerBP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberUpdate(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberPromote(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberDisconnect(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext, bool bWasKicked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberConnect(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyUpdate(ULobbyContextBase* LobbyContext);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyDelete(ULobbyContextBase* LobbyContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeFromOwnerBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalizeFromOwnerBP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnErrorFromLobbyContext(int32 ErrorCode, EAppNetErrorCode ErrorCodeEnum, const FString& ErrorMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsLobbyHostLocalMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitLobbyContext(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    void HandleError(int32 ErrorCode, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetSquadPlayerData(int32 PlayerLobbyIndex, FLobbyPlayerData& OutLobbyPlayerData, bool& bOutIsOwnPlayer, ECommonLobbyMemberState& OutMemberState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonLobbyContext* GetPrimaryLobbyContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLocalPlayerData(FLobbyPlayerData& OutLobbyPlayerData, bool& bOutIsOwnPlayer, ECommonLobbyMemberState& OutMemberState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLobbyPlayerData(int32 PlayerLobbyIndex, FLobbyPlayerData& OutLobbyPlayerData, bool& bOutIsOwnPlayer, ECommonLobbyMemberState& OutMemberState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonLobbyContext* CreatePrimaryLobbyContextByMatchmakingResult(int32 LocalUserNum, const FCreateOrConnectLobbyResult& MatchmakingResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonLobbyContext* CreatePrimaryLobbyContext(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UMatchmakingRequestContext* CreateMatchmakingContext(int32 LocalUserNum) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool ConvertRacerNameToLobbyName(UCommonLobbyMemberContext* MemberContext, FString& OutName);
    
};

