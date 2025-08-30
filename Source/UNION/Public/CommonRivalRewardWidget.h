#pragma once
#include "CoreMinimal.h"
#include "ERewardType.h"
#include "CommonUserWidget.h"
#include "CommonUserWidgetAnimFinishedDynamicEventDelegate.h"
#include "ECommonRivalRewardState.h"
#include "CommonRivalRewardWidget.generated.h"

class UCommonItemIcon;
class UTexture2D;
class UUnionUITextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonRivalRewardWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonItemIcon* _ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _CurrentWinCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _NecessaryWinCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Get_InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Get_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CountUp_InOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Lock_Loop;
    
public:
    UCommonRivalRewardWidget();

    UFUNCTION(BlueprintCallable)
    void SetWinCount(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetState(ECommonRivalRewardState State);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetCost(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplay(int32 CurrentWinCount, int32 NecessaryWinCount, ERewardType rewardType, UTexture2D* RewardTexture, int32 NumRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDetailTextIndex(const int32& Index);
    
    UFUNCTION(BlueprintCallable)
    void PlayGetting(const FCommonUserWidgetAnimFinishedDynamicEvent& OnFinished);
    
    UFUNCTION(BlueprintCallable)
    void PlayCountUp(int32 NewValue, const FCommonUserWidgetAnimFinishedDynamicEvent& OnFinished);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCountDisplayEvent();
    
};

