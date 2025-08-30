#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDriverId.h"
#include "ESceneDriverVoiceId.h"
#include "SceneDriverVoicePlayer.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class USceneDriverVoicePlayer : public UInterface {
    GENERATED_BODY()
};

class ISceneDriverVoicePlayer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupVoicePlayer(AActor* InOwner, const EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoice(const ESceneDriverVoiceId InDriverVoiceId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyVoicePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateVoice();
    
};

