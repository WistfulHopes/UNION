#include "UnionTravelRingActor.h"

AUnionTravelRingActor::AUnionTravelRingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TravelRingType = ETravelRingType::Invalid;
    this->WhiteOutMaterialInterface = NULL;
    this->conflictMix = NULL;
    this->conflictRandom = NULL;
    this->DomainNumber_ = EDomainNumber::InvalidDomainNumber;
    this->OwnerLevelActor_ = NULL;
    this->TravelRingComponent_ = NULL;
    this->TravelRingGateClass_ = NULL;
    this->TravelRingComponents_[0] = NULL;
    this->TravelRingComponents_[1] = NULL;
    this->TravelRingComponents_[2] = NULL;
    this->TravelRingComponents_[3] = NULL;
    this->WhiteoutEffectMaterials_[0] = NULL;
    this->WhiteoutEffectMaterials_[1] = NULL;
    this->WhiteoutEffectMaterials_[2] = NULL;
    this->WhiteoutEffectMaterials_[3] = NULL;
}


ERaceType AUnionTravelRingActor::GetRaceType() const {
    return ERaceType::TravelRace;
}


