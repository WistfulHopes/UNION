#pragma once
#include "CoreMinimal.h"
#include "AttackReplyInterface.h"
#include "ItemObjectBase.h"
#include "ItemShieldObject.generated.h"

class UGOCMovement;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AItemShieldObject : public AItemObjectBase, public IAttackReplyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGOCMovement* MovementRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountDownTime;
    
    AItemShieldObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

