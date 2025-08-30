#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "HitTriggerInfo.h"
#include "UnionEnemyBase.h"
#include "EnemySnake.generated.h"

class UGimmickStaticBodyComponent;
class USnakeAnimInstance;
class UTriggerComponent;
class UUnionAtomComponent;
class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemySnake : public AUnionEnemyBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* DanageSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* SnakeSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* SnakeBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerComponent* m_FindTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USnakeAnimInstance* AnimInstance;
    
public:
    AEnemySnake(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo);
    

    // Fix for true pure virtual functions not being implemented
};

