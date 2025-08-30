#pragma once
#include "CoreMinimal.h"
#include "EItemId.h"
#include "ItemSwitchSettingSingle.h"
#include "UnionUISceneBase.h"
#include "EPartyRaceItemSwitchWindowButton.h"
#include "PartyRaceItemSwitchWindow.generated.h"

class UPartyRaceItemIcon;
class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceItemSwitchWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> DisableItemArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UPartyRaceItemIcon*> ItemId_IconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceItemIcon*> ItemIconArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> WindowButtonNameArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> ItemSwitchWindowButtonArr;
    
    UPartyRaceItemSwitchWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartRandomBP();
    
    UFUNCTION(BlueprintCallable)
    bool IsSameButtonPressing(EPartyRaceItemSwitchWindowButton InWindowButtonSetting);
    
    UFUNCTION(BlueprintCallable)
    bool IsButtonChanged(TArray<FItemSwitchSettingSingle> BackupSetting);
    
    UFUNCTION(BlueprintCallable)
    void HideCertainItems(int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWindowButtonSetting(EPartyRaceItemSwitchWindowButton InWindowButtonSetting);
    
    UFUNCTION(BlueprintCallable)
    void ApplyItemSwitchEnablePattern(const TArray<EItemId>& InPatternArr);
    
    UFUNCTION(BlueprintCallable)
    void AddIcon(const TArray<UPartyRaceItemIcon*>& InIconArr);
    
};

