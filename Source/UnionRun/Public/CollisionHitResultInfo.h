#pragma once
#include "CoreMinimal.h"
#include "ECollisionHitType.h"
#include "CollisionHitResultInfo.generated.h"

class UCollisionBaseComponent;

USTRUCT(BlueprintType)
struct FCollisionHitResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionHitType CollisionHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionBaseComponent* HitComponent;
    
    UNIONRUN_API FCollisionHitResultInfo();
};

