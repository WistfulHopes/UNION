#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UnionVATMeshActor.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AUnionVATMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AUnionVATMeshActor(const FObjectInitializer& ObjectInitializer);

};

