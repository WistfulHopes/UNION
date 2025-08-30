#pragma once
#include "CoreMinimal.h"
#include "CustomAttrAnimComponent.h"
#include "AlwaysTickCustomAttrAnimComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UAlwaysTickCustomAttrAnimComponent : public UCustomAttrAnimComponent {
    GENERATED_BODY()
public:
    UAlwaysTickCustomAttrAnimComponent(const FObjectInitializer& ObjectInitializer);

};

