#pragma once
#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "UnionProceduralMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionProceduralMeshComponent : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
    UUnionProceduralMeshComponent(const FObjectInitializer& ObjectInitializer);

};

