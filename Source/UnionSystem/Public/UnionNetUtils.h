#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ELobbyErrorType.h"
#include "LobbyDoesMatchOnlineSettings.h"
#include "LobbyId.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "LobbySubsystemOnSearchLobbyCompleteDelegate.h"
#include "OnlineErrorBP.h"
#include "UnionNetUtils.generated.h"

class ULobbyContextBase;
class ULobbyJoinInfo;
class ULobbyMemberContextBase;
class UObject;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionNetUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionNetUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELobbyErrorType ToLobbyErrorType(const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SearchLobbyByHostUserId(const UObject* WorldContextObject, int32 LocalUserNum, const FUniqueNetIdRepl& HostProductUserId, FLobbySubsystemOnSearchLobbyComplete OnComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeLobbyOperationResultByLobbyErrorType(ELobbyErrorType LobbyErrorType, FLobbyOperationResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidLobbyId(const FLobbyId& LobbyId);
    
    UFUNCTION(BlueprintPure)
    static int64 GetTickMilliseconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetServerStagingName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNetworkSettingName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMatchSettingString(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetEOSRelayControlString(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetComputerNameString();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_P2P_UpdateConnectMemberSquad(const UObject* WorldContextObject, const ULobbyContextBase* LobbyContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_P2P_StartConnectSquad(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_P2P_StartConnectionP2P(const UObject* WorldContextObject, const FLobbyId& LobbyId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_P2P_StartConnect(const UObject* WorldContextObject, bool bIsHost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_P2P_EndConnectSquadRequest(const UObject* WorldContextObject, const ULobbyContextBase* LobbyContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_P2P_DelConnectMemberSquad(const UObject* WorldContextObject, const ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_Lobby_SyncInitMemberAttributes(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbySubsystemOnLobbyOperationComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_Lobby_Seach(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbySubsystemOnSearchLobbyComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_Lobby_JoinByLobbyId(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbyId& LobbyId, const FLobbySubsystemOnLobbyOperationComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_Lobby_Join(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, ULobbyJoinInfo* JoinInfo, const FLobbySubsystemOnLobbyOperationComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_Lobby_Exit(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, const FLobbySubsystemOnLobbyOperationComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_Lobby_Create(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext, bool bLocked, bool bPublic, bool bHostMigration, const FString& Password, const FLobbySubsystemOnLobbyOperationComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CRM_PutConnectionError_Minimum(const UObject* WorldContextObject, int32 ErrorNumber, int32 ErrorCode, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CRM_PutConnectionError_Full(const UObject* WorldContextObject, int32 ErrorNumber, int32 ErrorCode, const FString& ErrorMessage, const FString& OpponentUserId, const FString& entryRaceId, int32 UserSlotId, int32 DisconnectionReason, const FString& DisconnectionReasonInfo, const FString& ApiName, int32 Elapsed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CRM_PutConnectionError_Api(const UObject* WorldContextObject, int32 ErrorNumber, int32 ErrorCode, const FString& ErrorMessage, const FString& ApiName, int32 Elapsed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertUserIdToString(const FUniqueNetIdRepl& UserId, FString& OutUserIdString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertLobbyIdToString(const FLobbyId& LobbyId, FString& OutUserIdString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareUserId(const FUniqueNetIdRepl& UserId1, const FUniqueNetIdRepl& UserId2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareLobbyId(const FLobbyId& LobbyId, const FLobbyId& OtherLobbyId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckOnlineSettingsForLobby(const UObject* WorldContextObject, int32 LocalUserNum, const FLobbyId& LobbyId, FLobbyDoesMatchOnlineSettings& OutDoesMatch);
    
};

