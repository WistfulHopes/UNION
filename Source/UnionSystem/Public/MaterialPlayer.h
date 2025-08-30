#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MaterialPlayer.generated.h"

class UCurveTable;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UMaterialPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> AnimationCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetMaterialWhenDestroyed;
    
    UMaterialPlayer();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAndReset();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTime(float CurrentTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayWithStartTime(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void OverrideMaterialVectorParameter(FName ParameterName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMaterialParameter(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMaterialColorParameter(FName ParameterName, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTimeRatio();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTime();
    
};

