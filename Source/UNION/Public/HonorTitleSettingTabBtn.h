#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "HonorTitleSettingTabBtn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHonorTitleSettingTabBtn : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHonorTitleSettingTabBtnDelegateEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHonorTitleSettingTabBtnDelegateEvent OnActivateTabButtonEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHonorTitleSettingTabBtnDelegateEvent OnDeactivateTabButtonEvent;
    
    UHonorTitleSettingTabBtn();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTabButtonImage(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupNewIcon(bool New);
    
};

