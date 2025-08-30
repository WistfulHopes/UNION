#include "RaceUISubTeamGroup.h"

URaceUISubTeamGroup::URaceUISubTeamGroup() : UUserWidget(FObjectInitializer::Get()) {
    this->TextYou = NULL;
    this->ImgRank = NULL;
    this->ImgCharaIcon = NULL;
}

void URaceUISubTeamGroup::SetRankNative(int32 Rank) {
}

void URaceUISubTeamGroup::SetDispTextYou(bool IsDisp) {
}

void URaceUISubTeamGroup::SetCharaIconNative(UTexture2D* IconTex) {
}


