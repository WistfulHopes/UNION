#pragma once
#include "CoreMinimal.h"
#include "ESpecialObjGroup.generated.h"

UENUM(BlueprintType)
enum class ESpecialObjGroup : uint8 {
    All,
    A_A,
    A_B,
    A_C,
    B_A,
    B_B,
    B_C,
    C_A,
    C_B,
    C_C,
    D_A,
    D_B,
    E_A,
    E_B,
    F_A,
    F_B,
    Num,
    GroupABegin = A_A,
    GroupAEnd = A_C,
    GroupBBegin = B_A,
    GroupBEnd = B_C,
    GroupCBegin = C_A,
    GroupCEnd = C_C,
    GroupDBegin = D_A,
    GroupDEnd = D_B,
    GroupEBegin = E_A,
    GroupEEnd = E_B,
    GroupFBegin = F_A,
    GroupFEnd = F_B,
};

