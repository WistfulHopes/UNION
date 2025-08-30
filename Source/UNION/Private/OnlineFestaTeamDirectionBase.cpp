#include "OnlineFestaTeamDirectionBase.h"

UOnlineFestaTeamDirectionBase::UOnlineFestaTeamDirectionBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->CutInImageObj = NULL;
    this->TeamBaseBand = NULL;
    this->TeamDecideTextBlock = NULL;
}

void UOnlineFestaTeamDirectionBase::SetTeamColorEvent_Implementation(const TArray<FLinearColor>& InTeamColors, int32 InMyTeamIndex) {
}

void UOnlineFestaTeamDirectionBase::OnPlayDecideTeamEvent_Implementation(int32 InMyTeamIndex) {
}

void UOnlineFestaTeamDirectionBase::LoadFestaTeamTextures_Implementation(const TSoftObjectPtr<UTexture2D>& InDecideTeamCutInPtr, const TArray<TSoftObjectPtr<UTexture2D>>& InFestaDirectionIcons) {
}

void UOnlineFestaTeamDirectionBase::LoadFestaTeamIconTextures_Implementation(const TArray<TSoftObjectPtr<UTexture2D>>& InFestaDirectionIcons) {
}

void UOnlineFestaTeamDirectionBase::FestaTeamDecideSceneInit_Implementation() {
}


