#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EKeyConfigRace.h"
#include "EOptionLocalPlayerNumber.h"
#include "UnionUISceneBase.h"
#include "KeyConfigCategoryKeyData.h"
#include "KeyConfigCellGuideParam.h"
#include "OptionKeyConfigCellTableRow.h"
#include "OptionWindowKeyConfig.generated.h"

class UDataTable;
class UInputDataAsset;
class UKeyConfigItem;
class UOptionCommonAsset;
class UOptionKeyconfigListItem;
class UPanelWidget;
class UScrollBox;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionWindowKeyConfig : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnExitKeyConfigMenuEvent, bool, Val);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeHoverCellEvent, const FText, Text);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FKeyConfigWindowEvent, EKeyConfigRace, Val);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> DisplayKeyConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> PrevDisplayKeyConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ParentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOptionKeyconfigListItem*> CellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyConfigCellGuideParam> GuideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UKeyConfigItem*> KeyBordKeyMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UKeyConfigItem*> GamePadKeyMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> KeybordPrimaryKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> KeybordSecondaryKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> GamePadKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKeyConfigCategoryKeyData> DisplayKeyMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CreateErrorPopup;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOptionCommonAsset> CommonAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputDataAsset> InputAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CellTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* InnerScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeHoverCellEvent OnChangeHoverCellEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitKeyConfigMenuEvent OnExitWindowEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptionKeyConfigCellTableRow> TableDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TableDataNameArray;
    
    UOptionWindowKeyConfig();

private:
    UFUNCTION(BlueprintCallable)
    void SetupWindow();
    
    UFUNCTION(BlueprintCallable)
    void SetupSwapKey(FName ChangeKeyName, uint8 KeyType, FKey NewKey);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetlistItemFocus();
    
    UFUNCTION(BlueprintCallable)
    void OpenWindow();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFocusButtonItem(UUnionUIButtonBase* InButton);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnBackToCellList();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(EOptionLocalPlayerNumber SelectPlayerNumber);
    
private:
    UFUNCTION(BlueprintCallable)
    void DestroyErrorWindow(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx);
    
};

