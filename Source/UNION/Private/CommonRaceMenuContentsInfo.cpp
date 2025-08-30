#include "CommonRaceMenuContentsInfo.h"

UCommonRaceMenuContentsInfo::UCommonRaceMenuContentsInfo() {
}

EGameModeId UCommonRaceMenuContentsInfo::GetGameMode() const {
    return EGameModeId::None;
}

TArray<FCommonRaceMenuContentRow> UCommonRaceMenuContentsInfo::GetContents() const {
    return TArray<FCommonRaceMenuContentRow>();
}

FCommonRaceMenuContentRow UCommonRaceMenuContentsInfo::GetContent(int32 InIndex, bool& bOutSuccess) const {
    return FCommonRaceMenuContentRow{};
}


