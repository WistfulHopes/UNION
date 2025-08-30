#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "WindowCharaChange.generated.h"

class UCommonCountNumberWidget;
class USizeBox;
class UUnionRichTextBlock;
class UUnionUIButtonsPanel;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UWindowCharaChange : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharaChangeEventParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharaChangeEvent2Param, int32, InPlayerIndex, int32, InCharaIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharaChangeEvent1Param, int32, InPlayerIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaChangeEvent2Param OnEventHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaChangeEvent2Param OnEventUnhover;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaChangeEvent2Param OnEventDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaChangeEvent1Param OnEventCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaChangeEventParam OnUpdateNew;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonCountNumberWidget* DSP_WBP_CMN_GadgetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* WrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DSP_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_SuperSonicInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* ButtonsPanel;
    
public:
    UWindowCharaChange();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySEOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable)
    void OpenEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOpen() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void IconUnhover(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void IconHover(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void IconDecision(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void IconCancel(int32 InPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void CloseEnd();
    
};

