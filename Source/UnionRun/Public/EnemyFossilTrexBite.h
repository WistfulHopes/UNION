#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "EnemyFossilBase.h"
#include "EnemyFossilTrexBite.generated.h"

class UFossilTrexAnimInstance;
class UGimmickStaticBodyComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AEnemyFossilTrexBite : public AEnemyFossilBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* FossilBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* FossilBodyUpComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFossilTrexAnimInstance* AnimInstance;
    
public:
    AEnemyFossilTrexBite(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

