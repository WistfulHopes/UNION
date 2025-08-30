#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "RacerDamageType.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickBingoBall.generated.h"

class UAnimSequence;
class UStaticBodyComponent;
class UUnionSkeletalMeshComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickBingoBall : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticBodyComponent* BallStaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RacerDamageType DamageType;
    
public:
    AGimmickBingoBall(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCollisionSocketName(FName NewName);
    

    // Fix for true pure virtual functions not being implemented
};

