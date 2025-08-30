#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "DecisionWidget.generated.h"

class UCanvasPanel;
class USoundAtomCue;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UDecisionWidget : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_OK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DSP_Player_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FocusSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
public:
    UDecisionWidget();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorVisible(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimSelectToActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimSelectLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimActiveToSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimActiveLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
};

