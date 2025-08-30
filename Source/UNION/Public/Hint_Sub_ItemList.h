#pragma once
#include "CoreMinimal.h"
#include "UnionUIInputWidget.h"
#include "ItemListSubMenuInputEventDispatcherDelegate.h"
#include "Hint_Sub_ItemList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHint_Sub_ItemList : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemListSubMenuInputEventDispatcher OnSubMenuPressBackKeyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemListSubMenuInputEventDispatcher OnSubMenuPressTabRightKeyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemListSubMenuInputEventDispatcher OnSubMenuPressTabLeftKeyEvent;
    
    UHint_Sub_ItemList();

};

