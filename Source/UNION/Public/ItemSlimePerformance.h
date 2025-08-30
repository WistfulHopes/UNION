#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionMessageInterface.h"
#include "ItemMessageInterface.h"
#include "ItemPerformanceBase.h"
#include "ItemSlimePerformance.generated.h"

class UItemStaticBodyComponent;
class UNiagaraComponent;
class UStaticMesh;
class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNION_API AItemSlimePerformance : public AItemPerformanceBase, public IItemMessageInterface, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SlimeNiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SlimeDestroyedNiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemStaticBodyComponent* SlimeStaticBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* SlimeSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VioletVoidAbsorbTargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SlimeAbsorbMesh;
    
    AItemSlimePerformance(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

