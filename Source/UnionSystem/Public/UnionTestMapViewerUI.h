#pragma once
#include "CoreMinimal.h"
#include "UnionTestUserWidget.h"
#include "UnionTestMapViewerUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API UUnionTestMapViewerUI : public UUnionTestUserWidget {
    GENERATED_BODY()
public:
    UUnionTestMapViewerUI();

    UFUNCTION(BlueprintCallable)
    void EnumerateMaps(TArray<FText>& Maps);
    
};

