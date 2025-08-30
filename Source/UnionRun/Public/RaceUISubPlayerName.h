#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerNameInterface.h"
#include "RaceUISubPlayerName.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubPlayerName : public UUserWidget, public IPlayerNameInterface {
    GENERATED_BODY()
public:
    URaceUISubPlayerName();

    UFUNCTION(BlueprintCallable)
    int32 GetGhostPfId();
    

    // Fix for true pure virtual functions not being implemented
};

