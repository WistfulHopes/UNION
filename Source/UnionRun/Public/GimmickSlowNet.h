#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "GimmickMessageInterface.h"
#include "RacerDamageType.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickSlowNet.generated.h"

class UGimmickStaticBodyComponent;
class UNiagaraComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickSlowNet : public AUnionGimmickObjectBase, public ICollisionMessageInterface, public IGimmickMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RacerDamageType DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelocateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* NetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ObjectBreakEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* BodyComponent;
    
    AGimmickSlowNet(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

