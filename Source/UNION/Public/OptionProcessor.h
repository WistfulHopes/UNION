#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EOptionTab.h"
#include "OptionProcessor.generated.h"

class UOptionAudioSequence;
class UOptionControlSequence;
class UOptionGraphicSequence;
class UOptionLanguageSequence;
class UOptionOnlineSequence;
class UOptionRaceSequence;
class UOptionSequenceBase;
class UOptionWidget;

UCLASS(Blueprintable)
class UNION_API AOptionProcessor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitMenuEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionRaceSequence* RaceSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionControlSequence* ControlSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionLanguageSequence* LanguageSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionGraphicSequence* GraphicSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionAudioSequence* AudioSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionOnlineSequence* OnlineSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOptionWidget> OptionWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitMenuEvent OnExitMenuEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionWidget* OptionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionSequenceBase* CurrentSequence;
    
public:
    AOptionProcessor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnExitFromWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTab(EOptionTab prev, EOptionTab Next);
    
    UFUNCTION(BlueprintCallable)
    void ChangeButtonImageEvent();
    
};

