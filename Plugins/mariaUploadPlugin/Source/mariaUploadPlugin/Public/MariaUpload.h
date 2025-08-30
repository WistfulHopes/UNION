#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EMariaDevMode.h"
#include "EMariaDevelopLogCategory.h"
#include "EMariaEpicLoginType.h"
#include "EMariaInitializeAuthResult.h"
#include "EMariaXboxUserPickMode.h"
#include "MariaAsyncCompletedDelegateDelegate.h"
#include "MariaDevelopLogCallbackDelegate.h"
#include "MariaInitializeAuthSeqIdCallbackDelegate.h"
#include "MariaInitializeAuthSeqUrlCallbackDelegate.h"
#include "MariaQRCode.h"
#include "MariaTableRow.h"
#include "MariaUpload.generated.h"

class APlayerController;
class UObject;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class MARIAUPLOADPLUGIN_API UMariaUpload : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMariaUpload();

    UFUNCTION(BlueprintCallable)
    static void UseSegaAccountOnWindows(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void UseEnsureNSAAvailable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void UseAccountAuthInteraction_Switch(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void TerminateUltThread();
    
    UFUNCTION(BlueprintCallable)
    static void TerminateNNLibraries();
    
    UFUNCTION(BlueprintCallable)
    static bool StartLogging();
    
    UFUNCTION(BlueprintCallable)
    static void ShutdownLogging();
    
    UFUNCTION(BlueprintCallable)
    static void SetUserPickMode_GDK(EMariaXboxUserPickMode PickMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserID(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserAllowGuests_GDK(bool Allow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupSteamEncryptedAppTicketAsync(UObject* WorldContextObject, FMariaAsyncCompletedDelegate Completed);
    
    UFUNCTION(BlueprintCallable)
    static void SetSuspended(bool Suspended);
    
    UFUNCTION(BlueprintCallable)
    static void SetSteamEncryptedAppTicket(const TArray<uint8>& Ticket);
    
    UFUNCTION(BlueprintCallable)
    static void SetSendQueueDelay(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetSegaAccountDevMode(EMariaDevMode DevMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveSlot(int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    static void SetPendingUntilNetworkAvailable_Switch(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNetworkAccountFromUniqueNetID_Epic(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNetworkAccountFromPlayerController_Epic(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SetNetworkAccount_Epic(const FString& EpicAccountID);
    
    UFUNCTION(BlueprintCallable)
    static void SetManualHeartbeatMode();
    
    UFUNCTION(BlueprintCallable)
    static void SetLogCategoryThreshold(EMariaDevelopLogCategory LogCategory);
    
    UFUNCTION(BlueprintCallable)
    static void SetLogCallback(const FMariaDevelopLogCallback& LogCallback);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitializeParamUserHandle(bool& Success, bool& Cancelled, bool ShowUserSelector);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitializeParamApplicationId_Switch(const FString& ApplicationID);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitializeParamApplicationId_GDK(const FString& MSAAppID);
    
    UFUNCTION(BlueprintCallable)
    static void SetInFocus(bool InFocus);
    
    UFUNCTION(BlueprintCallable)
    static void SetHeartbeatDelay(int32 Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void SetHaltSending(bool Halt);
    
    UFUNCTION(BlueprintCallable)
    static void SetDevMode(EMariaDevMode LogAuthDevMode, EMariaDevMode SegaAccountDevMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetAuthenticateDevMode_Switch(EMariaDevMode DevMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetAuthenticateDevMode_Steam(EMariaDevMode DevMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetAuthenticateDevMode_GDK(EMariaDevMode DevMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppInformations(const FString& AppID, const FString& PlatformId, const FString& Language, const FString& Region);
    
    UFUNCTION(BlueprintCallable)
    static void SetActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    static void SetAccessEndpointDevMode(EMariaDevMode DevMode);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetSegaAccountID();
    
    UFUNCTION(BlueprintCallable)
    static void RegenerateSessionID();
    
    UFUNCTION(BlueprintCallable)
    static void PushMessage(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static void PushHeartbeatManually();
    
    UFUNCTION(BlueprintCallable)
    static bool PreInitializeAuthSeq(int32 Phase);
    
    UFUNCTION(BlueprintCallable)
    static void PostInitializeAuthSeq();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenConsole(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void nn_nifm_SubmitNetworkRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool nn_nifm_IsNetworkRequestOnHold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool nn_nifm_IsNetworkAvailable();
    
    UFUNCTION(BlueprintCallable)
    static void nn_nifm_CancelNetworkRequest();
    
    UFUNCTION(BlueprintCallable)
    static FString MakeQRCodeSvgString(const FMariaQRCode& QRCode, int32 Border);
    
    UFUNCTION(BlueprintCallable)
    static FMariaQRCode MakeQRCode(const FString& Text, int32 ErrorCorrectionLevel);
    
    UFUNCTION(BlueprintCallable)
    static EMariaInitializeAuthResult LoopInitializeAuthSeq(const FMariaInitializeAuthSeqUrlCallback& UrlCallback, const FMariaInitializeAuthSeqIdCallback& IdCallback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogoutEOSAsync_Epic(UObject* WorldContextObject, APlayerController* PlayerController, FMariaAsyncCompletedDelegate Completed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoginEOSAsync_Epic(UObject* WorldContextObject, APlayerController* PlayerController, EMariaEpicLoginType LoginType, const FString& ID, const FString& Token, FMariaAsyncCompletedDelegate Completed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSegaAccountLinkStatusChecking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSegaAccountLinkPending();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningUploading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnXbox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnMSPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoggingAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInRecoveryWaitMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInitializeAuthSeqNeeded();
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeUltThread();
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeNNLibraries();
    
    UFUNCTION(BlueprintCallable)
    static bool Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSegaAccountID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecoveryWaitModeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPostNgCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPostErrorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlatformString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNetworkAccountString_Switch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNetworkAccountString_Steam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNetworkAccountString_PS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNetworkAccountString_GDK();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNetworkAccount_Epic();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMessagesNumInQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMariaDevelopLogCategory GetLogCategoryThreshold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessTokenNgCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessTokenErrorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessTokenElapsedSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GenerateTemporaryAccount();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2DDynamic* CreateQRCodeTextureDynamic(const FMariaQRCode& QRCode, int32 Border);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckSegaAccountLinkStatus();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeInitializeAuthSeqPhaseTo0();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStartLogging();
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterTable(const FString& Key, const TArray<FMariaTableRow>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterStrings(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterMapStrings(const FString& Key, const TMap<FString, FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterMapString(const FString& Key, const TMap<FString, FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterMapInteger(const FString& Key, const TMap<FString, int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterMapFloat(const FString& Key, const TMap<FString, float>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterInteger(const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterFloat(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterArrayStrings(const FString& Key, const TArray<FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterArrayInteger(const FString& Key, const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddUserParameterArrayFloat(const FString& Key, const TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterTable(const FString& Key, const TArray<FMariaTableRow>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterStrings(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterMapStrings(const FString& Key, const TMap<FString, FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterMapString(const FString& Key, const TMap<FString, FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterMapInteger(const FString& Key, const TMap<FString, int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterMapFloat(const FString& Key, const TMap<FString, float>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterInteger(const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterFloat(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterArrayStrings(const FString& Key, const TArray<FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterArrayInteger(const FString& Key, const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventParameterArrayFloat(const FString& Key, const TArray<float>& Value);
    
};

