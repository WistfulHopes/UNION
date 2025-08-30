#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EventEndInfoWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UEventEndInfoWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UEventEndInfoWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString FormatDateTime(const FDateTime& DateTime, const FString& Format);
    
};

