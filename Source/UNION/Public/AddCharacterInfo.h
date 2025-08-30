#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "AddCharacterInfo.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UAddCharacterInfo : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> SubWidgetList;
    
public:
    UAddCharacterInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupCharacter(EDriverId characterId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& TopText, const FText& BottomText, const FText& NameText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubWidgetTexture(UUserWidget* SubWidget, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLastCutTexture(UTexture2D* Texture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open(EDriverId characterId);
    
};

