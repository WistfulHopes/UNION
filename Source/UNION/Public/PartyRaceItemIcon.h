#pragma once
#include "CoreMinimal.h"
#include "EItemId.h"
#include "ERaceSettingGrouping.h"
#include "UnionUIButtonBase.h"
#include "EPartyRaceItemSwitchState.h"
#include "PartyRaceItemIcon.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UOverlay;
class UTexture;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceItemIcon : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingGrouping GroupSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> GroupIndex_ItemEnableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRaceItemSwitchState ItemSwitchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ItemSwitchPanalHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NonActiveImagePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CursorPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Select_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NonActive_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ItemIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* DSP_RingNum;
    
    UPartyRaceItemIcon();

    UFUNCTION(BlueprintCallable)
    void UpdateSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetItemTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetItemId(const EItemId InItemId, bool bInMultiple);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSettingAutoGroup(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSetting(int32 GroupIndex, bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetALLGroupSetting(const TMap<int32, bool>& InGroupIndex_ItemEnableMap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckIsGuest(bool IsGuest);
    
    UFUNCTION(BlueprintCallable)
    void ChangeToNextSetting();
    
};

