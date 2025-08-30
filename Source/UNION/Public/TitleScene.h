#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "TitleScene.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UTitleScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Out;
    
public:
    UTitleScene();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipAuotSaveInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDevInfoText(UTextBlock* InVersionText, UTextBlock* InEOSRelayControlText, UTextBlock* InNetworkSettingText, UTextBlock* InCRMInfoText, UTextBlock* InMatchingSettingText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedTitleAcceptButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedLicenseButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVersion();
    
};

