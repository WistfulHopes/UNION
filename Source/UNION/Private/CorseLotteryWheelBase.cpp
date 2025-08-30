#include "CorseLotteryWheelBase.h"

UCorseLotteryWheelBase::UCorseLotteryWheelBase() {
}

void UCorseLotteryWheelBase::WriteLotteryResultToSettings() {
}

void UCorseLotteryWheelBase::Reset(int32 InSeed) {
}

TArray<EStageId> UCorseLotteryWheelBase::Lot() {
    return TArray<EStageId>();
}

int32 UCorseLotteryWheelBase::GetSeed() const {
    return 0;
}

void UCorseLotteryWheelBase::GetLotteryResultsStageIds(TArray<EStageId>& OutStageIds) {
}


