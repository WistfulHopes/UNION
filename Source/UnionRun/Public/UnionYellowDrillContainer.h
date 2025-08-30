#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionYellowDrillContainer.generated.h"

class UAtomComponent;
class UNiagaraComponent;
class UUnionItemSkeletalMeshContainer;

UCLASS(Abstract, Blueprintable)
class UNIONRUN_API AUnionYellowDrillContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionItemSkeletalMeshContainer* YellowDrillMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LoopEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NomalOnGroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WaterOnGroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TransEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ReturnEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* DrillLoopSound;
    
    AUnionYellowDrillContainer(const FObjectInitializer& ObjectInitializer);

};

