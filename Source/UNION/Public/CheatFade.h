#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatFade.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatFade : public UObject {
    GENERATED_BODY()
public:
    UCheatFade();

    UFUNCTION(BlueprintCallable, Exec)
    void ForceCallFinishedFadeEvent(const FString& InputParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FadeOut(const FString& InputParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FadeIn(const FString& InputParam);
    
};

