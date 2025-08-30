#pragma once
#include "CoreMinimal.h"
#include "ECommonMenuButtonType.h"
#include "UnionUIButtonStandard.h"
#include "EOptionSequenceMainState.h"
#include "ExtraMenuButton.generated.h"

class UExtraMenuSceneBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UExtraMenuButton : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonMenuButtonType ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionSequenceMainState ExtraMenuType;
    
    UExtraMenuButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewIcon(bool IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableButton(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetButtonType(EOptionSequenceMainState InExtraMenuType, UExtraMenuSceneBase* Parent);
    
};

