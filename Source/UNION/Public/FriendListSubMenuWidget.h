#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "FriendListSubMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFriendListSubMenuWidget : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UFriendListSubMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMainWidget(const TArray<FText>& InButtonText, const TArray<bool>& InButtonSelectable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainWidgetFocus(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUnionUISceneBase* GetMainWidget();
    
};

