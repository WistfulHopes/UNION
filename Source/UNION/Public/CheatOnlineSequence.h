#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatOnlineSequence.generated.h"

UCLASS(Blueprintable)
class UCheatOnlineSequence : public UObject {
    GENERATED_BODY()
public:
    UCheatOnlineSequence();

    UFUNCTION(BlueprintCallable, Exec)
    void EnableOldOnlineSequence(const bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableEnterLobbyAlone(const bool Enable);
    
};

