#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UnionStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AUnionStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AUnionStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

