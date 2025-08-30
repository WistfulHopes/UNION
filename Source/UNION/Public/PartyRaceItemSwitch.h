#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemSwitchSetting.h"
#include "PartyRaceItemSwitch.generated.h"

class UPartyRaceItemSwitchDetail;
class UPartyRaceItemSwitchWindow;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceItemSwitch : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceItemSwitchWindow* ItemSwitchWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceItemSwitchDetail* ItemSwitchDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSwitchSetting ItemSwitchSettingBackUpSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSwitchSetting ItemSwitchSettingBackUpGroup;
    
    UPartyRaceItemSwitch();

    UFUNCTION(BlueprintCallable)
    void ResetFromBackUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyQuitConfirmWidget();
    
    UFUNCTION(BlueprintCallable)
    void DecideCurrentSetting(bool& IsRuleChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckIsGuest(bool IsGuest);
    
    UFUNCTION(BlueprintCallable)
    void BackupCurrentSetting();
    
};

