#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UnionTestPlayerController.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AUnionTestPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AUnionTestPlayerController(const FObjectInitializer& ObjectInitializer);

};

