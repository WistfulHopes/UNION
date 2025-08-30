#pragma once
#include "CoreMinimal.h"
#include "ECommonMenuButtonType.h"
#include "UnionUISceneBase.h"
#include "ETopMenuGameMode.h"
#include "ETopMenuPlayMode.h"
#include "ETopMenuSequenceState.h"
#include "TopMenuScene.generated.h"

class UCommonMenuSubMenu;
class UTopMenuGameModeMenu;
class UTopMenuPlayModeButton;
class UUnionUIButtonsPanel;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UTopMenuScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTopMenuPlayModeButton*> PlayModeButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopMenuGameModeMenu* GameModeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuSubMenu* SubMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnPlay_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnPlay_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnPlay_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnPlay_to_BtnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnMode_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnMode_Change_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnMode_Change_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnMode_to_BtnPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BtnMode_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugUnLockWireless;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuSequenceState TopMenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* PlayModeButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* PlayerNumButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* GameModeButtonsPanel;
    
public:
    UTopMenuScene();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPlayMode(const TArray<ETopMenuPlayMode>& TopMenuPlayModeArr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTopMenuSequenceState(ETopMenuSequenceState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextModeInfo(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextGameModeTitle(const ETopMenuPlayMode PlayMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconGameMode(const ETopMenuPlayMode PlayMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeTopMenu(ETopMenuSequenceState InitState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializePlayMode(ETopMenuSequenceState PrevState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializePlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeModeMenu(const ETopMenuPlayMode PlayMode, const TArray<ETopMenuGameMode>& BeltButtonTypeArr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeGameMode(const ETopMenuPlayMode PlayMode, const TArray<ETopMenuGameMode>& BeltButtonTypeArr, ETopMenuSequenceState PrevState);
    
    UFUNCTION(BlueprintCallable)
    ECommonMenuButtonType CalcTopMenuSequenceSubMenuToCommonMenuButtonType(ETopMenuSequenceState PrevSequence);
    
    UFUNCTION(BlueprintCallable)
    bool CalcTopMenuSequenceSubMenu(ETopMenuSequenceState PrevSequence);
    
};

