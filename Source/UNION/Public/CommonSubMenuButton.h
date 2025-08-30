#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "CommonSubMenuButton.generated.h"

class UImage;
class USoundAtomCue;
class UUnionRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonSubMenuButton : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_MiniBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Set_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Cursor_Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FocusSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ShoulderSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
public:
    UCommonSubMenuButton();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectIconVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bInIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectIconVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetText(FText& OutText) const;
    
};

