#pragma once
#include "CoreMinimal.h"
#include "EStageContentsType.generated.h"

UENUM(BlueprintType)
enum class EStageContentsType : uint8 {
    LaunchStage,
    CollaborationExtndStage,
    NonCollaborationExtndStage,
};

