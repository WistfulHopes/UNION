#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EGroupRaceRule.h"
#include "FestaPointRewardUIData.h"
#include "FestaRankingRewardUIData.h"
#include "FestaStreakRewardUIData.h"
#include "FriendSubsystem.h"
#include "EEventInfoWidgetPageCategory.h"
#include "EEventInfomationType.h"
#include "EventInfoScheduleData.h"
#include "EventInfoTitleText.h"
#include "FestaRuleInfomation.h"
#include "Templates/SubclassOf.h"
#include "FestaInfoWidgetBase.generated.h"

class AUnionCrossPlayResolveWindowManager;
class UEventInfoRanking;
class UStatusInfoPlayerDetail;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFestaInfoWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFriendSubsystem::FOnExternalIdMappingsComplete ExternalIdMappingsCompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFriendSubsystem::FOnReadFriendsComplete PFFriendReadCompleteDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventInfomationType InfomationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventInfoScheduleData EventInfoScheduleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventInfoTitleText EventInfoTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFestaPointRewardUIData> PointRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_StatusInfo_Sub_Point_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_EventEndInfo_Sub_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventInfoRanking* WBP_StatusInfo_Sub_Ranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventInfoRanking* WBP_StatusInfo_Sub_Ranking_Friend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_StatusInfo_Sub_Honor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_StatusInfo_Sub_RaceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_StasusInfo_Sub_RaceRuleDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusInfoPlayerDetail* WBP_StatusInfo_PlayerDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUnionCrossPlayResolveWindowManager> CrossPlayResolveUIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionCrossPlayResolveWindowManager* m_CrossPlayResolveUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEventInfoWidgetPageCategory> EnablePageCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectRuleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableInputRankingPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableInputPlatformSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFestaRuleInfomation> RuleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRankingAllPlatform;
    
public:
    UFestaInfoWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StartUpKeyPress();
    
    UFUNCTION(BlueprintCallable)
    void StartRightShoulderPress();
    
    UFUNCTION(BlueprintCallable)
    void StartRightKeyPress();
    
    UFUNCTION(BlueprintCallable)
    void StartLeftShoulderPress();
    
    UFUNCTION(BlueprintCallable)
    void StartLeftKeyPress();
    
    UFUNCTION(BlueprintCallable)
    void StartDownKeyPress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupWorldRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTab();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupShedule(FDateTime StartTime, FDateTime endTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupRuleInfomation(EGroupRaceRule DefaultRule, const TArray<FFestaRuleInfomation>& RuleDataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupRankingClac();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPointResult(int32 Point, const TArray<FFestaPointRewardUIData>& InPointRewardData, UTexture2D* TextureBG);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupOtherResult(const TArray<FFestaStreakRewardUIData>& InStreakRewardData, const TArray<FFestaRankingRewardUIData>& InRankingRewardData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupFriendRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupFinalResult(int32 Ranking, int32 Point, UTexture2D* TextureBG);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleText(FText RuleTitle, FText PointRewardTitle, FText WorldRankingTitle, FText FriendRankingTitle, FText OtherTitle, FText FinalResultTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void SetNextPage();
    
    UFUNCTION(BlueprintCallable)
    void SetInfomationType(EEventInfomationType InInfomationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFooterSetting(EEventInfoWidgetPageCategory NextPage);
    
    UFUNCTION(BlueprintCallable)
    void SelectWorldRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectPrevRule();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectPage(EEventInfoWidgetPageCategory NextPage, int32 TabIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectNextRule();
    
    UFUNCTION(BlueprintCallable)
    void SelectFriendRanking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseUpKey();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseRightShoulder();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseRightKey();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseLeftShoulder();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseLeftKey();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseDownKey();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllInputLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformCrossPlayResolveComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnPFFriendReadComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteMakePlatformPuidList(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpKeyPressLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightShoulderPressLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightKeyPressLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftShoulderPressLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftKeyPressLoop() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnablePlatformSwitch();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownKeyPressLoop() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispPFButton(const FString& TagetServerPFCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTabIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOpenUserNoteTargetData(FString& outPlatformUserID, FString& ServerPFCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEventInfoWidgetPageCategory GetCurrentPage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString FormatDateTime(const FDateTime& DateTime, const FString& Format);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayRankingUserNote();
    
    UFUNCTION(BlueprintCallable)
    void DisplayPFProfile(const FString& PlatformUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearRequestWaitTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnablePlatformSwitch();
    
};

