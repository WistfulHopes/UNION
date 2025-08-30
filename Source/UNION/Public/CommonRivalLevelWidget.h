#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalTeamId.h"
#include "CommonRivalLevelWidget.generated.h"

class UCommonRivalLevelContentWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonRivalLevelWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelContentWidget* WBP_CMN_RivalLevel_Sub_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHigh;
    
public:
    UCommonRivalLevelWidget();

    UFUNCTION(BlueprintCallable)
    void SetupSettingsForPartyRace(int32 InMaxRivalLevel, int32 InRivalLevel, int32 InBlankIconHideCount, bool bIsRivalPowerFlag, ERivalTeamId InTeamID, bool bPlayInitAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetupSettingsForFriendMatch(int32 InMaxRivalLevel, int32 InRivalLevel, int32 InRivalBaseLevel, bool bIsRivalPowerFlag, bool bPlayInitAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetupSettings(int32 InMaxRivalLevel, int32 InRivalLevel, int32 InBlankIconHideCount, int32 InBaseRivalLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSeEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationFinishedLoop();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitAnimIcons();
    
};

