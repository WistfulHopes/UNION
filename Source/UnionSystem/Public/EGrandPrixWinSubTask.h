#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixWinSubTask.generated.h"

UENUM(BlueprintType)
enum EGrandPrixWinSubTask {
    GrandPrix_Win_None,
    GrandPrix_Purple_01,
    GrandPrix_Yellow_02,
    GrandPrix_Red_03 = 4,
    GrandPrix_Blue_04 = 8,
    GrandPrix_Cyan_05 = 16,
    GrandPrix_White_06 = 32,
    GrandPrix_Green_07 = 64,
    GrandPrix_SegaGP_01 = 128,
};

