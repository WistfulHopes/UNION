#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "MenuInputRecieveInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMenuInputRecieveInterface : public UInterface {
    GENERATED_BODY()
};

class IMenuInputRecieveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SilentFocusReady(bool bOnce);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpKeyReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpKeyReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpKeyPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpecialReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpecialReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpecialPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpecialPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightStickButtonReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightStickButtonReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightStickButtonPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightStickButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightStickAxisWithPlayerId(const FVector2D& Value, const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightStickAxis(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightKeyReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightKeyReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightKeyPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickButtonReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickButtonReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickButtonPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickAxisWithPlayerId(const FVector2D& Value, const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickAxis(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftShoulderReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftShoulderReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftShoulderPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftShoulderPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftKeyReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftKeyReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftKeyPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonTopReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonTopReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonTopPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonTopPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonLeftReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonLeftReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonLeftPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonLeftPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownKeyReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownKeyReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownKeyPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackKeyReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackKeyReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackKeyPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptKeyReleasedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptKeyReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptKeyPressedWithPlayerId(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptKeyPressed();
    
};

