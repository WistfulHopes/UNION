#pragma once
#include "CoreMinimal.h"
#include "EComPathFileType.generated.h"

UENUM(BlueprintType)
enum class EComPathFileType : uint8 {
    FOR_EDIT_DATA,
    NOMAL_LAP_DATA,
    NOMAL_RESULT_LAP_DATA,
    FINAL_RESULT_LAP_DATA,
    FILE_TYPE_NUM,
};

