#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NoticeWidget.generated.h"

class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UNoticeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UNoticeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupChallengeClearNotice(UWrapBox* Owner, const int32 InChallengeIndex, const float InTime);
    
};

