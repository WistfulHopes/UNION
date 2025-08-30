#include "RaceUISubRing.h"

URaceUISubRing::URaceUISubRing() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentRingCount = 0;
    this->MaxRingCount = 100;
    this->DefaultMaxRingCount = 100;
    this->IsOverDefault = false;
    this->IsNowPlayingOverSE = false;
    this->NUM_Tex_100 = NULL;
    this->NUM_Tex_010 = NULL;
    this->NUM_Tex_001 = NULL;
    this->bFirstEarned = false;
    this->CurrentLoopAnim = NULL;
    this->Ring_Loop_Red = NULL;
    this->RingBase_Eff_Img = NULL;
    this->Eff_Ct = NULL;
}


void URaceUISubRing::SetParams(int32 RacerIndex) {
}

void URaceUISubRing::SetCurrentRingCount(const int32& NewRingCount) {
}


