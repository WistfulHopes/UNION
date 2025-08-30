#pragma once
#include "CoreMinimal.h"
#include "EMachineAnimationMontageAssetId.h"
#include "MachineBaseActor.h"
#include "MachineInRaceActor.generated.h"

class UMaterialInterface;
class UTireMark;

UCLASS(Blueprintable)
class UNION_API AMachineInRaceActor : public AMachineBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTireMark*> TireMarkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TireMarkMaterialInterface;
    
    AMachineInRaceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTireMarkScale();
    
    UFUNCTION(BlueprintCallable)
    void SetCarShadow();
    
    UFUNCTION(BlueprintCallable)
    void MontageStopAll(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSection(FName SectionName);
    
};

