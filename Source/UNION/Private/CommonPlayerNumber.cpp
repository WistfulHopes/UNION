#include "CommonPlayerNumber.h"

UCommonPlayerNumber::UCommonPlayerNumber() : UUserWidget(FObjectInitializer::Get()) {
    this->Player_Number_Index = 0;
    this->MLC_ColorBase = NULL;
    this->TXT_PlayerNumber = NULL;
}


void UCommonPlayerNumber::SetPlayerIndexCustom(int32 InIndex, bool IsLock) {
}

void UCommonPlayerNumber::SetBGColorInfo(int32 InIndex, bool IsGroup, bool IsLocalMulti) {
}

int32 UCommonPlayerNumber::GetPlayerIndex() const {
    return 0;
}

FLinearColor UCommonPlayerNumber::GetBGColor(int32 InIndex) const {
    return FLinearColor{};
}


