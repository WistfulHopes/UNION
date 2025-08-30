#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "RacerDamageType.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickThornBall.generated.h"

class UGimmickStaticBodyComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickThornBall : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* GimmickStaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RacerDamageType DamageType;
    
public:
    AGimmickThornBall(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayBreakEffect();
    
    UFUNCTION(BlueprintCallable)
    float GetHitSpeedRatio();
    

    // Fix for true pure virtual functions not being implemented
};

