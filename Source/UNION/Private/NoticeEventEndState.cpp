#include "NoticeEventEndState.h"
#include "EMenuSequenceSubState.h"

UNoticeEventEndState::UNoticeEventEndState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("NoticeEventEnd");
    this->DefaultMenuState = EMenuSequenceSubState::NoticeEventEnd;
}

void UNoticeEventEndState::SetSaveData(TArray<FRewardGetWindowParam> RewardDataList) {
}


