#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UnionUIButtonBase.h"
#include "CourseSelectRivalChoiceButton.generated.h"

class UImage;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCourseSelectRivalChoiceButton : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CharaImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _CharaNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _Ready;
    
public:
    UCourseSelectRivalChoiceButton();

    UFUNCTION(BlueprintCallable)
    void StartLoad(EDriverId RivalDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverId GetDriverID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusThis();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecisionIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelIn();
    
};

