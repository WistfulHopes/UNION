#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDriverId.h"
#include "ESoundPan.h"
#include "EDriverVoiceId.h"
#include "DriverVoicePlayer.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UDriverVoicePlayer : public UInterface {
    GENERATED_BODY()
};

class IDriverVoicePlayer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupVoicePlayer(AActor* InOwner, const EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoice(const EDriverVoiceId InDriverVoiceId, const ESoundPan InSoundPan) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetVoiceDuration(const EDriverVoiceId InDriverVoiceId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyVoicePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateVoice();
    
};

