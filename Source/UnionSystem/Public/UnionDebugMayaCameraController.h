#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UnionDebugMayaCameraController.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AUnionDebugMayaCameraController : public APlayerController {
    GENERATED_BODY()
public:
    AUnionDebugMayaCameraController(const FObjectInitializer& ObjectInitializer);

};

