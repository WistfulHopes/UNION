#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugImportantLogPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API UDebugImportantLogPanel : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEntryCount;
    
    UDebugImportantLogPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddLog(const FString& ClassName, const FString& LogString, const FString& DateTimeString);
    
};

