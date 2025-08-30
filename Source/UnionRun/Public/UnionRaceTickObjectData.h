#pragma once
#include "CoreMinimal.h"
#include "UnionRaceTickObjectData.generated.h"

class ASkeletalMeshActor;
class USimpleAnimationComponent;

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceTickObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> SkeletalActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USimpleAnimationComponent*> SimpleAnimComponents;
    
    FUnionRaceTickObjectData();
};

