#include "PrivateMatchRuleSettingComponent.h"

UPrivateMatchRuleSettingComponent::UPrivateMatchRuleSettingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChildRuleSettingSequence = NULL;
    this->bIsInitializedParams = false;
}

void UPrivateMatchRuleSettingComponent::UpdateRivalTeamSetting() {
}

void UPrivateMatchRuleSettingComponent::UpdateRacerGroupIndex() {
}

void UPrivateMatchRuleSettingComponent::SetUpRacerCount(int32 LobbyMemberCount) {
}

void UPrivateMatchRuleSettingComponent::SetLobbyPlayType(EPrivateMatchPlayType PlayType) {
}

void UPrivateMatchRuleSettingComponent::SetIsInitializedParamaters(bool Initialized) {
}

void UPrivateMatchRuleSettingComponent::SetHostRuleSettingFlag(bool bIsHost) {
}

bool UPrivateMatchRuleSettingComponent::GetIsRuleConfigured() {
    return false;
}

bool UPrivateMatchRuleSettingComponent::GetIsInitializedParamaters() {
    return false;
}

bool UPrivateMatchRuleSettingComponent::GetIsCustomizedRule() {
    return false;
}


