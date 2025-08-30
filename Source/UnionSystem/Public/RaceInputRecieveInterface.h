#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RaceInputRecieveInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URaceInputRecieveInterface : public UInterface {
    GENERATED_BODY()
};

class IRaceInputRecieveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseItemReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseItemPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrickYInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrickY2Input(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrickXInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrickX2Input(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTradeItemReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTradeItemPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSteerInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlimeCancelYInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlimeCancelXInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRearViewReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRearViewPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPitchInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPauseReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPausePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHornReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHornPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmoteReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmotePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDriftReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDriftPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBrakeInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAccelInput(float InValue);
    
};

