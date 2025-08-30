#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AppUserBaseData.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "LobbyMemberContextBase.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;
class ULobbyMemberTransactionParam;

UCLASS(Abstract, Blueprintable, Config=UnionNetwork)
class UNIONSYSTEM_API ULobbyMemberContextBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyContextBase* LobbyContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyMemberTransactionParam* TransactionParam;
    
public:
    ULobbyMemberContextBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupLocalMemberAttributeInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateMemberSelfComplete(bool bSuccessful, const FLobbyOperationResult& Result, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberUpdateInternal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValetCom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUserIdString(FString& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUserIdRepl(FUniqueNetIdRepl& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetSystemMiscVersions(int32& romType, int32& RomVersion, int32& MasterDataVersion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyMemberIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInternalUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetAppUserBaseData(FAppUserBaseData& OutAppUserBaseData) const;
    
    UFUNCTION(BlueprintCallable)
    bool EndTransaction_NoCallback();
    
    UFUNCTION(BlueprintCallable)
    bool EndTransaction(FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Compare(ULobbyMemberContextBase* Other) const;
    
    UFUNCTION(BlueprintCallable)
    bool BeginTransaction();
    
};

