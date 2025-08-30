#pragma once
#include "CoreMinimal.h"
#include "OnRemoveFromParentDelegate.h"
#include "UnionUISceneBase.h"
#include "UnionUIPopupWindowBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIPopupWindowBase : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveFromParent OnRemoveFromParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoFocusPrevWidget;
    
    UUnionUIPopupWindowBase();

};

