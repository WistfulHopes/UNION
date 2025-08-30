#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UnionTestUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API UUnionTestUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUnionTestUserWidget();

    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

