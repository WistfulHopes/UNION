#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "UnionNiagaraComponents.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionNiagaraComponents : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UUnionNiagaraComponents(const FObjectInitializer& ObjectInitializer);

};

