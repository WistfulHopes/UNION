#pragma once
#include "CoreMinimal.h"
#include "SoftwareKeyboardResult.h"
#include "UnionUISceneBase.h"
#include "FriendListNumberInputWidget.generated.h"

class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFriendListNumberInputWidget : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoftwareKeyboardInputComplete, const FString&, InputNumber);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftwareKeyboardInputComplete SoftwareKeyboardInputComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputFigureMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InputText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> Buttons;
    
public:
    UFriendListNumberInputWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FText& InTitleText, const FText& InMessageText, const TArray<FText>& InButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& InTitleText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageText(const FText& InMessageText);
    
    UFUNCTION(BlueprintCallable)
    void SetInputFigureMax(int32 InInputFigureMax);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialButtonIndex(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonText(const TArray<FText>& InButtonText);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerControllerPressedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable)
    bool OnOpenSoftwareKeyboard(int32 MaxLength, const FString& DefaultText);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSoftwareKeyboard(const FSoftwareKeyboardResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNumberText(const FString& InInputText);
    
    UFUNCTION(BlueprintCallable)
    void GetInputText(FText& OutInputText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputFigureMax();
    
};

