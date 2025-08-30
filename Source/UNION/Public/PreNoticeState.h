#pragma once
#include "CoreMinimal.h"
#include "CompensationGetCompensationsResponse_ReceivableCompensationData.h"
#include "ESaveDataStatus.h"
#include "MenuSequenceSubStateBase.h"
#include "RewardGetWindowParamWithTitle.h"
#include "PreNoticeState.generated.h"

class UResultDonpaTicket;
class URewardGetWindow;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;
class UUserWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPreNoticeState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompensationGetCompensationsResponse_ReceivableCompensationData> ReceiveCompensationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompensationGetCompensationsResponse_ReceivableCompensationData> CanUseCompensationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardGetWindowParamWithTitle> CompensationItemGetWindowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingCompensationCommunication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingCompensationCommunicationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WaitingCompensationCommunicationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URewardGetWindow> CompensationWindowSoftRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardGetWindow* CompensationWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResultDonpaTicket> ResultDonpaTicketWindowSoftRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResultDonpaTicket* ResultDonpaTicketWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeCompensationDonpaTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* ErrorPopupWindow;
    
public:
    UPreNoticeState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSaveDataPeriod();
    
    UFUNCTION(BlueprintCallable)
    void StartTutorialVideo();
    
    UFUNCTION(BlueprintCallable)
    void StartCompensationWindow(bool& OutIsOpenWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideUpperText(const int32 InTextId);
    
    UFUNCTION(BlueprintCallable)
    void SetCompensationTitleText(const int32 InTextId);
    
    UFUNCTION(BlueprintCallable)
    void SendCheckFestaRewardRequest();
    
    UFUNCTION(BlueprintCallable)
    void SendCheckCompensationRequest(bool& OutSendSuccess);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWaitingCompensationCommunicationUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveCheckFestaReward(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveCheckCompensation(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateTutorialVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeFlow_Compensation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateTutorialVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnErrorPopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartNoticeEventEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartLegendInfomation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartGetDLCFreeContent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartGetDLCContent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartFreecontentInfomation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartFestaInfomation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartDLCInfomation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSendFestaEndResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTicketNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRewardTitleHonorList(TArray<int32>& RewardTitleHonorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastOrder();
    
    UFUNCTION(BlueprintCallable)
    void FinishedSaveCompensationSaveData(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void FinishedResultDonpaTicketWindow();
    
    UFUNCTION(BlueprintCallable)
    void FinishedCompensation();
    
    UFUNCTION(BlueprintCallable)
    void EndTutorialVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoCompensationNext();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DelayOpenWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWaitingCompensationCommunicationUI();
    
    UFUNCTION(BlueprintCallable)
    bool CreateLoggedinErrorPopupWindow(const FText& InErrorTitle, const FText& InErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void CreateCanUseCompensationDataArray(const TArray<FCompensationGetCompensationsResponse_ReceivableCompensationData>& InReceiveData, TArray<FCompensationGetCompensationsResponse_ReceivableCompensationData>& OutCanUseReceiveData, TArray<FRewardGetWindowParamWithTitle>& OutWindowParamData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLoggedin();
    
};

