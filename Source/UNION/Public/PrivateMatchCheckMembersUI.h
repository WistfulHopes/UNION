#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnDecidedReadyButtonEventDelegate.h"
#include "PrivateMatchCheckMembersUI.generated.h"

class APlayerController;
class UCommonLineMessageWidget;
class UOnlineReadySceneBase;
class UPrivateMatchLobbyRuleInfo;

UCLASS(Blueprintable)
class UNION_API APrivateMatchCheckMembersUI : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecidedReadyButtonEvent OnDecideStartRaceEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOnlineReadySceneBase> ReadyWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPrivateMatchLobbyRuleInfo> RuleWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineReadySceneBase* ReadyWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrivateMatchLobbyRuleInfo* RuleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonLineMessageWidget> RuleInfoWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLineMessageWidget* RuleInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfoDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleRuleSettingButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitializedParams;
    
public:
    APrivateMatchCheckMembersUI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchVisibileRuleCustomBtn(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchVisibile(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchTextRuleCustomBtn(bool bIsRuleChange);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInitializedParamaters(bool Initialized);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFocusReadyWidget(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RuleUpdated(bool bDisplayInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReadyCheck();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayOutAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayInAnimations();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishDisplayInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JoinWaiting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(bool bIsHost);
    
    UFUNCTION(BlueprintCallable)
    bool GetVisibleRuleCustomBtn();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInitializedParamaters();
    
    UFUNCTION(BlueprintCallable)
    void ForceHideRuleUpdateInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Finalize();
    
};

