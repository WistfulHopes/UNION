#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "HierarchicalStateMachine.h"
#include "OnBackEventDelegate.h"
#include "UnionPlatformEventInfo.h"
#include "ETopMenuGameMode.h"
#include "ETopMenuPlayMode.h"
#include "ETopMenuSequenceState.h"
#include "MenuSequenceUIInterface.h"
#include "Templates/SubclassOf.h"
#include "TopMenuSequence.generated.h"

class AFullGameStoreDialogActor;
class AMenuRacerBase;
class UCharaMachineSelectStateBase;
class UCommonMenuHeaderMenu;
class UCommonMenuSubMenu;
class UGarageState;
class UMenuInputRecieveObject;
class UMenuRacerParameterDataAsset;
class UNoticePopupState;
class UObject;
class UTopMenuScene;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API ATopMenuSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFinishedTopMenuEvent, ETopMenuPlayMode, TopMenuPlayMode, ETopMenuGameMode, TopMenuGameMode);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedTopMenuEvent OnFinishedTopMenuEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCharaMachineSelectStateBase> CharaMachineSelectComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineSelectStateBase* CharaMachineSelectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGarageState> GarageComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageState* GarageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNoticePopupState* NoticePopupStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTopMenuScene> UISceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopMenuScene* UIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonMenuSubMenu> CommonMenuSubMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuSequenceState PrevSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuPlayMode SelectedPlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuGameMode SelectedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuButtonInputReceiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TransformMenuRacers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuRacerParameterDataAsset* DefaultMenuRacerParameterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuRacerParameterDataAsset* FestaMenuRacerParameterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RuleVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFullGameStoreDialogActor* FullGameStorePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* ErrorPopupWindow;
    
public:
    ATopMenuSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void XboxControllerAssignEndDelicate();
    
    UFUNCTION(BlueprintCallable)
    void XboxAddUserEndDelicate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnBindMenuInputReceive();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUpHeaderTopMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextTopMenuSequenceState(ETopMenuSequenceState InState, ETopMenuSequenceState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNewsUIVisibility(ESlateVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    bool SelectPlayerNumApplet(int32 PlayerCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void PreloadAssets();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialPressedTopMenu(UObject* Object);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeftStickButtonPressedTopMenu(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateTopMenuTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateTipsWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateStore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectPlayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectPlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFaceButtonTopPressedTopMenu(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFaceButtonLeftPressedTopMenu(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateTipsWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectPlayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectPlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnErrorPopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNews();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTransformMenuRacers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GotoOnlineFromFriendList();
    
protected:
    UFUNCTION(BlueprintCallable)
    UCommonMenuHeaderMenu* GetHeaderMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETopMenuSequenceState GetCurrentTopMenuState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DecisionStoreEvent(bool IsAccept);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AMenuRacerBase*> CreateMenuRacers();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CreateLoggedinErrorPopupWindow(const FText& InErrorTitle, const FText& InErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLoggedinForDisplayNews();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindMenuInputReceive();
    

    // Fix for true pure virtual functions not being implemented
};

