#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "Blueprint/UserWidget.h"
#include "OnMessageEndDelegate.h"
#include "Templates/SubclassOf.h"
#include "DodonpaEventSpeechBeltBase.generated.h"

class UImage;
class URichTextBlockDecorator;
class UUnionRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UDodonpaEventSpeechBeltBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageEnd OnMessageEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URichTextBlockDecorator> DialogueDecorator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_SpeechArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SpeechBelt_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SpeechBelt_Out;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TextUpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle WaitInputTimerHandle;
    
public:
    UDodonpaEventSpeechBeltBase();

    UFUNCTION(BlueprintCallable)
    void StartWaitAllowInput();
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText CharacterName, FText Message);
    
    UFUNCTION(BlueprintCallable)
    void SetSequentialText(FText CharacterName, FText Message);
    
    UFUNCTION(BlueprintCallable)
    void SetDecorator(TSubclassOf<URichTextBlockDecorator> TextBlockDecorator);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void HandleAcceptKeyPressed();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void AllowInput();
    
};

