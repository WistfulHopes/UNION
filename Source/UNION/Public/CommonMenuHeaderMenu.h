#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EAppSupportedPlatform.h"
#include "ECrossplayPlatform.h"
#include "EGroupRaceRule.h"
#include "ERateRank.h"
#include "UnionUISceneBase.h"
#include "CommonMenuHeaderNiceDelegateDelegate.h"
#include "RestoredRule.h"
#include "CommonMenuHeaderMenu.generated.h"

class UCommonMenuRuleTimeTableScene;
class ULobbyMatchingUIState;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuHeaderMenu : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonMenuHeaderNiceDelegate OnRecvNice;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* InfoScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuRuleTimeTableScene* RuleTimeTableScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* EmoteWheelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* JukeBoxButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> ButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* UserInfoScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* HeaderNewsBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyMatchingUIState* MatchingStateScene;
    
public:
    UCommonMenuHeaderMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibilityNewsBtn_NewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHonorTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFestaWinCounts(int32 InWinCounts);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFestaTimeScheduleAndWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityUserInfoScene(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityTeamInfoScene(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRuleTimeTableScene(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRuleTimeTableOverlay(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRuleTimeTableButtonIcon(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRuleTimeRankCalcWidget(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRuleTimeOpenWidget(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityNewsBtn(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityHeaderRightBtn(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetRuleTimeTableFiexed(EGroupRaceRule InFixedRule);
    
    UFUNCTION(BlueprintCallable)
    void SetRuleTimeTable(int32 InTimetableIndex, FDateTime InTime, FRestoredRule InCurrentRule, bool bIsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeaderUserData(const FText& InUserName, int32 InHonorId, ECrossplayPlatform InPlatformId, int32 InWinCounts, ERateRank InRateRank, float InRankPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveFromViewportHeader();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayForceHeaderNoticeOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayButtonAnimationWait(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayButtonAnimationIdle(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetVisibilityRuleTimeTableScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECrossplayPlatform GetConvertPlatform(EAppSupportedPlatform InAppSupportedPlatformId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddToViewportHeader();
    
};

