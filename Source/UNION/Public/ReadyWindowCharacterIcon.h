#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReadyWindowCharacterIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UReadyWindowCharacterIcon : public UUserWidget {
    GENERATED_BODY()
public:
    UReadyWindowCharacterIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterIconTexture(const TSoftObjectPtr<UTexture2D>& Texture, const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterIconData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterIconCheckMark(bool bIsCheck);
    
};

