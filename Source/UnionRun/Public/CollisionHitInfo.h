#pragma once
#include "CoreMinimal.h"
#include "ECollisionHitType.h"
#include "CollisionHitInfo.generated.h"

class UCollisionBaseComponent;

USTRUCT(BlueprintType)
struct FCollisionHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionHitType CollisionHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionBaseComponent* MyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionBaseComponent* OtherComponent;
    
    UNIONRUN_API FCollisionHitInfo();
};

