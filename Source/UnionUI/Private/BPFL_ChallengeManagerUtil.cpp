#include "BPFL_ChallengeManagerUtil.h"

UBPFL_ChallengeManagerUtil::UBPFL_ChallengeManagerUtil() {
}

bool UBPFL_ChallengeManagerUtil::IsOpenSpecialChallenge() {
    return false;
}

bool UBPFL_ChallengeManagerUtil::IsChallengeCategoryClear(EChallengeCategory Category) {
    return false;
}

void UBPFL_ChallengeManagerUtil::GetSpecialChallengeProgress(const UObject* WorldContextObject, int32& NowProgress) {
}

TArray<FChallengeStruct> UBPFL_ChallengeManagerUtil::GetChallengeShowList() {
    return TArray<FChallengeStruct>();
}

TArray<FChallengeStruct> UBPFL_ChallengeManagerUtil::GetChallengeSaveData(EChallengeCategory InCategory) {
    return TArray<FChallengeStruct>();
}

void UBPFL_ChallengeManagerUtil::GetChallengeProgress(const UObject* WorldContextObject, int32& NowProgress) {
}

TArray<FChallengeOwnerStruct> UBPFL_ChallengeManagerUtil::GetChallengeClearOwnerList() {
    return TArray<FChallengeOwnerStruct>();
}

TArray<FChallengeStruct> UBPFL_ChallengeManagerUtil::GetChallengeClearList(int32 ListLength) {
    return TArray<FChallengeStruct>();
}


