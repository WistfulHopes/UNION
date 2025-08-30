#pragma once
#include "CoreMinimal.h"
#include "UnionButtonButtonEventDelegateDelegate.h"
#include "UnionUIButtonBase.h"
#include "UnionUIButtonStandard.generated.h"

class USoundAtomCue;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIButtonStandard : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionButtonButtonEventDelegate OnActivatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionButtonButtonEventDelegate OnDeactivatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionButtonButtonEventDelegate OnSelectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionButtonButtonEventDelegate OnDeselectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionButtonButtonEventDelegate OnSelectAnimationFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionButtonButtonEventDelegate OnDecidedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionButtonButtonEventDelegate OnDecideAnimationFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> _SelecetdSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> _DecidedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> _ErrorSoundCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _Selectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _ToggleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _DecidedKeep;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_NonActive_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Decide_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_NonActive_to_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_to_NonActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_to_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_to_Decide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_to_NonActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_to_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_to_Decide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Decide_to_NonActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Decide_to_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Decide_to_Select;
    
public:
    UUnionUIButtonStandard();

    UFUNCTION(BlueprintCallable)
    void SetToggleEnabled(bool ToggleEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectable(bool Selectable);
    
    UFUNCTION(BlueprintCallable)
    void SetDecidedKeep(bool DecidedKeep);
    
    UFUNCTION(BlueprintCallable)
    void Select(bool bIsSoundPass);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseDecided();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnfocused();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecided() const;
    
    UFUNCTION(BlueprintCallable)
    void Deselect();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

