#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "UnionEnemyBase.h"
#include "EnemyDarkGaiaPhoenixPhase3.generated.h"

class AEnemyPhoenixFireAttack;
class UDarkGaiaPhoenixAnimInstance;
class UNiagaraComponent;
class UUnionAtomComponent;
class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemyDarkGaiaPhoenixPhase3 : public AUnionEnemyBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceSelectAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLeftAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstAttackIsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* BodySoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* m_BodySkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_bodyEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDarkGaiaPhoenixAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyPhoenixFireAttack* RightFireAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyPhoenixFireAttack* LeftFireAttack;
    
public:
    AEnemyDarkGaiaPhoenixPhase3(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WingAttack(bool isRight, bool isMirrer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMoveSoundLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopMoveSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMoveSound();
    
    UFUNCTION(BlueprintCallable)
    void ActivateAttackEffect(bool isRight, bool isMirrer);
    

    // Fix for true pure virtual functions not being implemented
};

