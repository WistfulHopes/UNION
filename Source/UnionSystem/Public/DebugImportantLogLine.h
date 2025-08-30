#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugImportantLogLine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API UDebugImportantLogLine : public UUserWidget {
    GENERATED_BODY()
public:
    UDebugImportantLogLine();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLog(const FString& ClassName, const FString& LogString, const FString& DateTimeString);
    
};

