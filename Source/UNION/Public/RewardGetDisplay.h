#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMachineId.h"
#include "RewardAchievementData.h"
#include "RewardGetWindowParam.h"
#include "RewardGetDisplay.generated.h"

class UHintPopupWindow;
class URewardGetWindow;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API URewardGetDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRewardDisplayEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardDisplayEndDelegate OnRewardDisplayEndDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardGetWindow* RewardGetWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardGetWindowParam> ParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardGetWindowTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWindowTimeClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRewardGetWindowSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindowCloseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowZOrder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardGetWindow* RewardCompleteWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintPopupWindow* TipsWindow;
    
public:
    URewardGetDisplay();

    UFUNCTION(BlueprintCallable)
    void StartDisplay();
    
    UFUNCTION(BlueprintCallable)
    void SetWindowParamFromAchievementData(const TArray<FRewardAchievementData>& InAchievementDataArray, bool bInWindowTimeClose, bool bInIgnoreRivalReward, int32 InWindowZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowParam(const TArray<FRewardGetWindowParam>& InParamArray, bool bInWindowTimeClose, int32 InWindowZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardGetWindowTitleText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardCompleteWindowTitleText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableTipsCheck(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void OnTipsWindowClose();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowClose();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRewardCompleteWindowClose();
    
    UFUNCTION(BlueprintCallable)
    void EndDisplay(bool bInShiftCompleteDisplay);
    
    UFUNCTION(BlueprintCallable)
    void DebugForceDisplayRewardCompleteWindow(EMachineId InDisplayMachineId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateRewardGetWindow(bool bInSetFocus);
    
};

