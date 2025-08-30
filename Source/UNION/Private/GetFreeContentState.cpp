#include "GetFreeContentState.h"
#include "EMenuSequenceSubState.h"

UGetFreeContentState::UGetFreeContentState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("GetDLCFreeContent");
    this->DefaultMenuState = EMenuSequenceSubState::GetDLCFreeContent;
}

void UGetFreeContentState::SetSaveData(TArray<FRewardGetWindowParam> RewardData) {
}

bool UGetFreeContentState::CheckUnlockCutscenCharacter(const TArray<FRewardGetWindowParam>& RewardData, TArray<EDriverId>& CutsceneCharacterList) {
    return false;
}


