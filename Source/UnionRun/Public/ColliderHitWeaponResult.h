#pragma once
#include "CoreMinimal.h"
#include "EItemId.h"
#include "ColliderHitWeaponResult.generated.h"

USTRUCT(BlueprintType)
struct FColliderHitWeaponResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ItemId;
    
    UNIONRUN_API FColliderHitWeaponResult();
};

