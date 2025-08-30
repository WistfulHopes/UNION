#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionMessageInterface.h"
#include "UnionEnemyBase.h"
#include "EnemyDarkGaiaPhoenix.generated.h"

class AEnemyPhoenixFeatherPerformance;
class UDarkGaiaPhoenixAnimInstance;
class UNiagaraComponent;
class UUnionAtomComponent;
class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemyDarkGaiaPhoenix : public AUnionEnemyBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovefinishRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Phase3WarpLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceSelectAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLeftAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* BodySoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* m_BodySkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_bodyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEnemyPhoenixFeatherPerformance*> PerfomanceActorArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDarkGaiaPhoenixAnimInstance* AnimInstance;
    
public:
    AEnemyDarkGaiaPhoenix(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMoveSoundLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopMoveSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMoveSound();
    

    // Fix for true pure virtual functions not being implemented
};

