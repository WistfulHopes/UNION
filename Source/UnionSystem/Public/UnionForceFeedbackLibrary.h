#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EForceFeedbackLevel.h"
#include "EPresetForceFeedbackType.h"
#include "UnionForceFeedbackLibrary.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionForceFeedbackLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionForceFeedbackLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopPresetForceFeedback(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType);
    
    UFUNCTION(BlueprintCallable)
    static void StopForceFeedbackByTag(int32 PlayerIndex, const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    static void StopForceFeedback(int32 PlayerIndex, UForceFeedbackEffect* ForceFeedbackEffect);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllForceFeedback(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevel(int32 PlayerIndex, EForceFeedbackLevel Level);
    
    UFUNCTION(BlueprintCallable)
    static void PlayPresetForceFeedbackWithParam(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType, int32 GroupId, float PlayIgnoreTime);
    
    UFUNCTION(BlueprintCallable)
    static void PlayPresetForceFeedback(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType);
    
    UFUNCTION(BlueprintCallable)
    static void PlayForceFeedback(int32 PlayerIndex, UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingPresetForceFeedback(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType);
    
};

