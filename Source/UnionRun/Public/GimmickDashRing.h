#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickDashRing.generated.h"

class UGimmickStaticBodyComponent;
class UNiagaraComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickDashRing : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* _GimmickStaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* _StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* _NiagaraComponent;
    
public:
    AGimmickDashRing(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

