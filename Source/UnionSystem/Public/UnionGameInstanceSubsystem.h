#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UnionGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUnionGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnloadCommonVoice();
    
    UFUNCTION(BlueprintCallable)
    void SetUseCustomCulling(bool IsUse);
    
    UFUNCTION(BlueprintCallable)
    void LoadCommonVoice();
    
    UFUNCTION(BlueprintCallable)
    void LoadBootCuesheet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseCustomCulling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCastShadowRing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCastShadowItemBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCastShadowDashPanel();
    
};

