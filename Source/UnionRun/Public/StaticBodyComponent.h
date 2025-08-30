#pragma once
#include "CoreMinimal.h"
#include "CollisionBaseComponent.h"
#include "StaticBodyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UStaticBodyComponent : public UCollisionBaseComponent {
    GENERATED_BODY()
public:
    UStaticBodyComponent(const FObjectInitializer& ObjectInitializer);

};

