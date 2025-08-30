#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickGandBell.generated.h"

class UGimmickStaticBodyComponent;
class UUnionAtomComponent;
class UUnionStaticMeshComponent;
class UUnionVATMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickGandBell : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* BodyStatickMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATMeshComponent* BellVatMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* MainStaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* HitSoundComponent;
    
    AGimmickGandBell(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHitAnimation();
    

    // Fix for true pure virtual functions not being implemented
};

