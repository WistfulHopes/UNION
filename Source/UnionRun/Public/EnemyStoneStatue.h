#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "HitTriggerInfo.h"
#include "UnionEnemyBase.h"
#include "EnemyStoneStatue.generated.h"

class UCurveFloat;
class UGimmickStaticBodyComponent;
class UTriggerComponent;
class UUnionAtomComponent;
class UUnionVATMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemyStoneStatue : public AUnionEnemyBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATMeshComponent* VATMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* MoveUpSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* LandHitSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMoveHight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageMoveUpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDamageMoveTremor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TremorEnableDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* m_MainStaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerComponent* m_StompTriggerComponent;
    
public:
    AEnemyStoneStatue(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTremorEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void MovePositionUpdate(float Ratio);
    

    // Fix for true pure virtual functions not being implemented
};

