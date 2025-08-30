#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "UnionEnemyBase.h"
#include "EnemyTentacle.generated.h"

class UCurveFloat;
class UGimmickStaticBodyComponent;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class UUnionVATAnimEventComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemyTentacle : public AUnionEnemyBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATAnimEventComponent* VATMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquashedEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleAnimStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackEffectFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackBlinkFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlinkAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TentacleMID;
    
public:
    AEnemyTentacle(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TimelineStep(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitFramePrint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackBlink();
    

    // Fix for true pure virtual functions not being implemented
};

