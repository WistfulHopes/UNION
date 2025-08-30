#pragma once
#include "CoreMinimal.h"
#include "EAttachmentType.generated.h"

UENUM(BlueprintType)
enum class EAttachmentType : uint8 {
    RootComponent,
    OverrideTransform,
};

