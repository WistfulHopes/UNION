#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "EAppControllerInputType.h"
#include "UnionUISceneBase.h"
#include "EOptionSequenceMainState.h"
#include "ExtraMenuSceneBase.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UExtraMenuSceneBase : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionSequenceMainState ExtraMenuType;
    
    UExtraMenuSceneBase();

private:
    UFUNCTION(BlueprintCallable)
    UWidget* OnExecButtonNavigation(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeControllerInputType(EAppControllerInputType BeforeType, EAppControllerInputType AfterType);
    
};

