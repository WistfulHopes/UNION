#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MatereialPlayerBindInfo.h"
#include "MaterialPlayerComponent.generated.h"

class UCurveTable;
class UMaterialPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UMaterialPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialPlayer*> MaterialPlayers;
    
public:
    UMaterialPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAndReset(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void StopAll(bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void Stop(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTime(int32 Index, float CurrentTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayWithStartTime(int32 Index, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void Play(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMaterialVectorParameter(int32 Index, FName ParameterName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMaterialParameter(int32 Index, FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMaterialColorParameter(int32 Index, FName ParameterName, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPlayIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTimeRatio(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTime(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 BindCurvesByInfo(FMatereialPlayerBindInfo& BindInfo);
    
    UFUNCTION(BlueprintCallable)
    int32 BindCurves(UCurveTable* CurveTable, FName TargetTag);
    
};

