#include "UnionGimmickObjectBase.h"

AUnionGimmickObjectBase::AUnionGimmickObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComAvoid = false;
    this->ComAvoidWidth = 0.00f;
    this->TimingGimmickType = ETimingGimmickType::None;
    this->ComBeneficial = false;
    this->bIsVioletVoidTarget = false;
    this->GimmickContactType = EGimmickContactType::None;
    this->bIsBackGroundGimmick = false;
}


