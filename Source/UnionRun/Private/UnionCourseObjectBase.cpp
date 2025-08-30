#include "UnionCourseObjectBase.h"
#include "UnionRoundTripMoveComponent.h"
#include "UnionSplineMoveComponent.h"

AUnionCourseObjectBase::AUnionCourseObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CourseObjType = ECourseObjType::None;
    this->SplineMoveComponent = CreateDefaultSubobject<UUnionSplineMoveComponent>(TEXT("SplineMoveComponent"));
    this->RoundTripMoveComponent = CreateDefaultSubobject<UUnionRoundTripMoveComponent>(TEXT("RoundTripMoveComponent"));
    this->bIsRingGateHidden = false;
    this->ColType = ECourseObjColType::None;
    this->bIsAttachMove = false;
    this->bIsMove = false;
    this->bIsRoundTripMove = false;
    this->ParentSkeletalMeshComponent = NULL;
    this->RoundTripDataTable = NULL;
    this->ObjectPlacementType = EObjectPlacementType::Common;
    this->IgnoreGimmickCurringDataTable = false;
    this->RandomObjType = ERandomObjType::None;
    this->PatternRandomId = -1;
}

void AUnionCourseObjectBase::SetRandomObjectType(ERandomObjType Type) {
}

void AUnionCourseObjectBase::SetPatternRandomId(int32 ID) {
}

void AUnionCourseObjectBase::SetDomainNumber(EDomainNumber Number) {
}

void AUnionCourseObjectBase::SetDomainIndex(EDomainIndex Index) {
}

int32 AUnionCourseObjectBase::GetPatternRandomId() {
    return 0;
}

EObjectPlacementType AUnionCourseObjectBase::GetObjectPlacementType() {
    return EObjectPlacementType::Common;
}

EDomainNumber AUnionCourseObjectBase::GetDomainNumber() const {
    return EDomainNumber::DomainNumber0;
}

void AUnionCourseObjectBase::CheckIsValidParentActor() {
}


