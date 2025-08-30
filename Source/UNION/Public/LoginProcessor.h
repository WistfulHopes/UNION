#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CRM_KickStartDelegateDelegate.h"
#include "ESaveDataStatus.h"
#include "FriendGetFriendListResponse.h"
#include "ELoginPointState.h"
#include "LoginProcessor.generated.h"

class UUnionErrorViewer;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Abstract, Blueprintable)
class UNION_API ALoginProcessor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLoginDelegate, bool, IsSuccess, bool, IsEnableOnlinePlay);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginDelegate OnLoginResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCRM_KickStartDelegate CrmKickStartDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionErrorViewer* WarningViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* ServerSavedataDeleteWindow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WindowBodyMaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WindowBodyMaintSchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ServerSaveDataDeleteHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ServerSaveDataDeleteBodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoginPointState LoginPointState;
    
public:
    ALoginProcessor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWarningText(FDateTime FromDateTime, FDateTime ToDateTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTerraLoginComplete(bool bError, bool bSavedataDeleted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartLoginProcess();
    
    UFUNCTION(BlueprintCallable)
    void OnServerSavedataDeleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSendNsaIdTokenComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveUserNetworkSettingsComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnRomVersionComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryServerTimeComplete(FDateTime UtcTimestamp, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyFriendInviteComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnNetDataComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnMasterDataComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnGetFriendListComplete(bool bWasSuccessful, const FFriendGetFriendListResponse& list);
    
    UFUNCTION(BlueprintCallable)
    void OnGetDataComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnEosLogoutComplete(int32 LocalUserNum, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnEosLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnEnsureNsaIdTokenComplete(bool bWasSuccessful, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionServerSaveDataDelete(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCrmKickStart(bool Status);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCheckFairPointComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockListComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnAppDataComplete(ESaveDataStatus Status);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyUI_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateUI_Event();
    
};

