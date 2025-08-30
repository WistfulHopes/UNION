#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SoundHandle.h"
#include "ETurntableDataId.h"
#include "TurntableData.h"
#include "TurntableComponent.generated.h"

class UDataTable;
class USoundAtomCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTurntableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* TurnTableCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundHandle TurnTableSEHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTurnTableSEPlayed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TurntableDataTable;
    
public:
    UTurntableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRotationTime(float InRotationTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationByTurntableDataId(ETurntableDataId InId, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void SetRotation(const FTurntableData& InTurntableData, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void OnExit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRotating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTurntableData GetCurrentTurntableData() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToRotation(double InVal);
    
};

