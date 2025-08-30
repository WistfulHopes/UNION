#pragma once
#include "CoreMinimal.h"
#include "UnionUIPopupWindowBase.h"
#include "EFriendListConfirmWindowButtonType.h"
#include "FriendListConfirmWidgetData.h"
#include "FriendListPlayerInfo.h"
#include "FriendListConfirmWidget.generated.h"

class APlayerController;
class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFriendListConfirmWidget : public UUnionUIPopupWindowBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonDecisionDelegate, int32, InSelectButtonIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonDecisionDelegate ButtonDecisionDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendListConfirmWindowButtonType ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PFProfileButtonIndex;
    
public:
    UFriendListConfirmWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SstAllButtonFocusable(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetFocus(APlayerController* PlayerController, bool bInPlayFocusSound);
    
    UFUNCTION(BlueprintCallable)
    void SetupByData(const FFriendListConfirmWidgetData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(EFriendListConfirmWindowButtonType InButtonType, const TArray<FText>& ButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageText(const FText& MessageText, const FText& AttentionText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetListPlayerInfo(const FFriendListPlayerInfo& InListPlayerInfo, bool InShowPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialButtonIndex(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonText(const TArray<FText>& ButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
};

