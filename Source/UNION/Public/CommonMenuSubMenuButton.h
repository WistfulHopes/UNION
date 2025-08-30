#pragma once
#include "CoreMinimal.h"
#include "CommonMenuButtonBase.h"
#include "CommonMenuSubMenuButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuSubMenuButton : public UCommonMenuButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableCancelSE;
    
public:
    UCommonMenuSubMenuButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSpIcon(bool bIsSpIconVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeNewIcon();
    
};

