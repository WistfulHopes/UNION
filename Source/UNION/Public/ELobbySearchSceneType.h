#pragma once
#include "CoreMinimal.h"
#include "ELobbySearchSceneType.generated.h"

UENUM(BlueprintType)
enum class ELobbySearchSceneType : uint8 {
    Init,
    SearchProgress,
    SearchComplete_Success,
    SearchComplete_NotFound,
};

