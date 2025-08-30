#include "RaceResultSequenceStateParty.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateParty::URaceResultSequenceStateParty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("ReslutParty");
    this->DefaultMenuState = ERaceResultSequenceState::Party;
}

TArray<FPartyResultRacer> URaceResultSequenceStateParty::GetPartyResultRacerAll(UObject* WorldContextObject, FPartyResultTeamInfo& TeamInfo, bool bIsRankSort) {
    return TArray<FPartyResultRacer>();
}

TArray<FPartyResultRacer> URaceResultSequenceStateParty::GetPartyLoadingRacerAll(UObject* WorldContextObject, FPartyResultTeamInfo& TeamInfo) {
    return TArray<FPartyResultRacer>();
}

FString URaceResultSequenceStateParty::FloatTimeToString(float InSeconds) {
    return TEXT("");
}

FString URaceResultSequenceStateParty::AddFloatTimeToString(float InSeconds) {
    return TEXT("");
}


