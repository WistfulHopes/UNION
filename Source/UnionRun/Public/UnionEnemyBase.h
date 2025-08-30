#pragma once
#include "CoreMinimal.h"
#include "EEnemyType.h"
#include "RacerDamageType.h"
#include "UnionGimmickObjectBase.h"
#include "UnionEnemyBase.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AUnionEnemyBase : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyType EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RacerDamageType DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationPlayRate;
    
    AUnionEnemyBase(const FObjectInitializer& ObjectInitializer);

};

