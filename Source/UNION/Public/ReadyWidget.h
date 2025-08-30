#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUnionUISceneAnimation.h"
#include "ReadyWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UReadyWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UReadyWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireSceneAnim(EUnionUISceneAnimation AnimType);
    
};

