#pragma once
#include "CoreMinimal.h"
#include "EUnionTextureCompressType.generated.h"

UENUM(BlueprintType)
enum class EUnionTextureCompressType : uint8 {
    BC1,
    BC1A,
    BC2,
    BC3,
    BC4,
    BC5,
    BC6H,
    BC7,
};

