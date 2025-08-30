#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "UnionEnemyBase.h"
#include "EnemyPhoenixFireAttack.generated.h"

class UGimmickStaticBodyComponent;
class UNiagaraComponent;
class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemyPhoenixFireAttack : public AUnionEnemyBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleIntParameterSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackContinueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_FireEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* BurningSoundComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* m_FireStaticBodyComponent;
    
public:
    AEnemyPhoenixFireAttack(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

