#pragma once
#include "CoreMinimal.h"
#include "OptionSequenceBase.h"
#include "OptionLanguageSequence.generated.h"

class UUnionUIButtonBase;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionLanguageSequence : public UOptionSequenceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ReloadLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ReloadPopup;
    
public:
    UOptionLanguageSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadSetteings();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReloadPopupDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnIndicatorMoveEvent(uint8 kind, uint8 Val);
    
    UFUNCTION(BlueprintCallable)
    void OnIndicatorDecisionEvent(uint8 kind, uint8 Val);
    
    UFUNCTION(BlueprintCallable)
    void CreateReloadWindow();
    
};

