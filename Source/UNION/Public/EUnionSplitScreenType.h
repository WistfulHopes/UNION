#pragma once
#include "CoreMinimal.h"
#include "EUnionSplitScreenType.generated.h"

UENUM(BlueprintType)
enum EUnionSplitScreenType {
    None,
    TwoPlayer_Horizontal,
    TwoPlayer_Vertical,
    ThreePlayer_FavorTop,
    ThreePlayer_FavorBottom,
    ThreePlayer_Vertical,
    ThreePlayer_Horizontal,
    FourPlayer_Grid,
    FourPlayer_Vertical,
    FourPlayer_Horizontal,
    SplitTypeCount,
};

