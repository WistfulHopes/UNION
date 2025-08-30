#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "EnemyFossilBase.h"
#include "EnemyFossilDipro.generated.h"

class UFossilTrexAnimInstance;
class UGimmickStaticBodyComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemyFossilDipro : public AEnemyFossilBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* FossilBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* FossilNeck3BodyComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFossilTrexAnimInstance* AnimInstance;
    
public:
    AEnemyFossilDipro(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

