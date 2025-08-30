#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "UnionTestPawn.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AUnionTestPawn : public ADefaultPawn {
    GENERATED_BODY()
public:
    AUnionTestPawn(const FObjectInitializer& ObjectInitializer);

};

