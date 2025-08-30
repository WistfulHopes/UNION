#pragma once
#include "CoreMinimal.h"
#include "CollisionBaseComponent.h"
#include "ItemStaticBodyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UItemStaticBodyComponent : public UCollisionBaseComponent {
    GENERATED_BODY()
public:
    UItemStaticBodyComponent(const FObjectInitializer& ObjectInitializer);

};

