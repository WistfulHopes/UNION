#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChallengeNoticeWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UChallengeNoticeWindow : public UUserWidget {
    GENERATED_BODY()
public:
    UChallengeNoticeWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnChallengeNotice(int32 ChallengeId, float Time);
    
};

