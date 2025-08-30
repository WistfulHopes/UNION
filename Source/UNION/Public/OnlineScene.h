#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EOnlineGameMode.h"
#include "EOnlineSequenceState.h"
#include "LobbySceneBase.h"
#include "OnDecideGameModeEventDelegate.h"
#include "OnlineScene.generated.h"

class UCommonMenuSubMenu;
class UOnlineGameModeButton;
class UUnionUIButtonsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UOnlineScene : public ULobbySceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOnlineGameModeButton*> GameModeButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuSubMenu* SubMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideGameModeEvent OnDecideGameModeEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineSequenceState MainState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* GameModeButtonsPanel;
    
public:
    UOnlineScene();

    UFUNCTION(BlueprintCallable)
    void SetVisibleSubButtons(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleModeButtons(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupGameMode();
    
    UFUNCTION(BlueprintCallable)
    void SetNotOpenTipsWindow(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetBackFlagEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IstNotOpenTipsWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeGameMode(const TArray<EOnlineGameMode>& BeltButtonTypeArr, const bool FocusMainButton);
    
};

