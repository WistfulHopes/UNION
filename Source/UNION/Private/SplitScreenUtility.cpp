#include "SplitScreenUtility.h"

USplitScreenUtility::USplitScreenUtility() {
}

void USplitScreenUtility::SetSplitSizeAndLocation(const TEnumAsByte<EUnionSplitScreenType>& SplitType, const int32 Index, const float SizeX, const float SizeY, const float OriginX, const float OriginY) {
}

void USplitScreenUtility::SetSplitscreen(const bool bDisabled) {
}

FVector2D USplitScreenUtility::GetViewportSize() {
    return FVector2D{};
}

TEnumAsByte<EUnionSplitScreenType> USplitScreenUtility::GetCurrentSplitscreenConfiguration() {
    return None;
}


