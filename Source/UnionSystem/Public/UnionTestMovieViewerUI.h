#pragma once
#include "CoreMinimal.h"
#include "UnionTestUserWidget.h"
#include "UnionTestMovieViewerUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API UUnionTestMovieViewerUI : public UUnionTestUserWidget {
    GENERATED_BODY()
public:
    UUnionTestMovieViewerUI();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Quit();
    
    UFUNCTION(BlueprintCallable)
    bool Finalize();
    
};

