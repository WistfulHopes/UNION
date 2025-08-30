#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HonorTitleSettingTab.generated.h"

class UHonorTitleSettingTabBtn;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHonorTitleSettingTab : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHonorTitleSettingTabDelegate, int32, CurrentTab);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHonorTitleSettingTabDelegate OnChangeTabEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHonorTitleSettingTabBtn*> HonorTitleSettingTabButtonArray;
    
    UHonorTitleSettingTab();

    UFUNCTION(BlueprintCallable)
    void SetupNewTabIcons(TArray<bool> NewArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup();
    
};

