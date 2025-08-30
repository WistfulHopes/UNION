#pragma once
#include "CoreMinimal.h"
#include "ETakeRingType.generated.h"

UENUM(BlueprintType)
enum class ETakeRingType : uint8 {
    Non,
    Ring,
    PackageRing,
    GadgetPackageRing = 4,
    Extnd06Ring = 8,
};

