#pragma once
#include "CoreMinimal.h"
#include "EUnionOpenStoreResultType.generated.h"

UENUM(BlueprintType)
enum class EUnionOpenStoreResultType : uint8 {
    Unknown,
    StoreCantOpen,
    StoreClose,
    StoreOpenEpic,
    Num,
};

