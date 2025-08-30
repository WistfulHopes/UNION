#include "UnionRaceUIResultRedStarRings.h"

UUnionRaceUIResultRedStarRings::UUnionRaceUIResultRedStarRings() : UUserWidget(FObjectInitializer::Get()) {
    this->RedStarRingUIType = ERedStarRingUIType::Race;
}

void UUnionRaceUIResultRedStarRings::SetRedStarRingsRef(const TArray<UUnionRaceUIResultRedStarRing*>& Rings) {
}

void UUnionRaceUIResultRedStarRings::ResetRings() {
}

void UUnionRaceUIResultRedStarRings::PickUpRing(uint8 RingIndex) {
}

void UUnionRaceUIResultRedStarRings::InitRings(const TArray<bool>& Rings) {
}

ERedstarRingAllGetType UUnionRaceUIResultRedStarRings::GetResultRedStarRingAllGetType(TArray<ERedStarRingAcquisitionType> AcquisitionType, int32 PlayerIndex) {
    return ERedstarRingAllGetType::NONE;
}

TArray<ERedStarRingAcquisitionType> UUnionRaceUIResultRedStarRings::GetResultRedStarRingAcquisitionType(const EStageId InStageId) {
    return TArray<ERedStarRingAcquisitionType>();
}

TArray<ERedStarRingAcquisitionType> UUnionRaceUIResultRedStarRings::GetRaceRedStarRingAcquisitionType() {
    return TArray<ERedStarRingAcquisitionType>();
}

TArray<ERedStarRingAcquisitionType> UUnionRaceUIResultRedStarRings::GetOtherResultRedStarRingAcquisitionType(const int32 Index) {
    return TArray<ERedStarRingAcquisitionType>();
}


