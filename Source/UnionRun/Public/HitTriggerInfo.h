#pragma once
#include "CoreMinimal.h"
#include "ECollisionHitType.h"
#include "HitTriggerInfo.generated.h"

class UCollisionBaseComponent;

USTRUCT(BlueprintType)
struct FHitTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionHitType CollisionHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionBaseComponent* MyComponent;
    
    UNIONRUN_API FHitTriggerInfo();
};

