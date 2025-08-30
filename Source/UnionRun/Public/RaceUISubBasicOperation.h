#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubBasicOperation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubBasicOperation : public UUserWidget {
    GENERATED_BODY()
public:
    URaceUISubBasicOperation();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboard() const;
    
};

