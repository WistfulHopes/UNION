#pragma once
#include "CoreMinimal.h"
#include "HDVibCueListForViewer.h"
#include "UnionTestUserWidget.h"
#include "UnionTestForceFeedbackViewerUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API UUnionTestForceFeedbackViewerUI : public UUnionTestUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHDVibCueListForViewer> CueList;
    
public:
    UUnionTestForceFeedbackViewerUI();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Quit();
    
    UFUNCTION(BlueprintCallable)
    bool Finalize();
    
};

