#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StreamingInstallNotice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UStreamingInstallNotice : public UUserWidget {
    GENERATED_BODY()
public:
    UStreamingInstallNotice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDeviceDisconnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNoticeAnimation(bool Display);
    
};

