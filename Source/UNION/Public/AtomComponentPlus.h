#pragma once
#include "CoreMinimal.h"
#include "UnionAtomComponent.h"
#include "AtomComponentPlus.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UAtomComponentPlus : public UUnionAtomComponent {
    GENERATED_BODY()
public:
    UAtomComponentPlus(const FObjectInitializer& ObjectInitializer);

};

