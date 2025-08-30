#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PartyRaceSubRivalAllWinWidget.generated.h"

class UButton;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UPartyRaceSubRivalAllWinWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceSubRivalAllWinWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceSubRivalAllWinWidgetOnFinished OnPlayFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceSubRivalAllWinWidgetOnFinished OnPlayOutFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceSubRivalAllWinWidgetOnFinished OnForceCloseEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* _InputButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Out;
    
public:
    UPartyRaceSubRivalAllWinWidget();

    UFUNCTION(BlueprintCallable)
    void PlayOut();
    
    UFUNCTION(BlueprintCallable)
    void PlayLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButton* GetInputButton();
    
};

