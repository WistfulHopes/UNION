#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPopupWindowButtonType.h"
#include "EPopupWindowType.h"
#include "MenuPopupWindowInterface.generated.h"

class UTexture2D;
class UWidgetAnimation;

UINTERFACE(Blueprintable)
class UNIONSYSTEM_API UMenuPopupWindowInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONSYSTEM_API IMenuPopupWindowInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTextTitle(const FText& Text, bool Attension);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTextMessege(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPopupInfoMainMenuButtonIconIndex(int32 Btn01IconIndex, int32 Btn02IconIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPopupInfoDisplayIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInitialFocusButtonIndex(const int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetImageTexture(const UTexture2D* Texture2D);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetImageButtonSelectText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFooterMenuBtn(int32 BtnIconIndex, int32 BtnIconType, const FText& BtnText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableInput(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDonpaTicketCount(int32 CurrentCount, int32 AfterCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDisplayFooterButton(const bool InDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonText(const TArray<FText>& BtnTextArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonControlDelayTime(float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitParam(EPopupWindowButtonType ButtonType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPopupWindowType GetPopupWindowType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPopupWindowButtonType GetPopupWindowButtonType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidgetAnimation* GetAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidgetAnimation* GetAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidgetAnimation* GetAnimationIn();
    
};

