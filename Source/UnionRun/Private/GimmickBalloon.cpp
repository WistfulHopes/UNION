#include "GimmickBalloon.h"
#include "UnionSkeletalMeshComponent.h"
#include "ECourseObjColType.h"
#include "ERandomObjType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickBalloon::AGimmickBalloon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ColType = ECourseObjColType::MoveCollision;
    this->RandomObjType = ERandomObjType::Balloon;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->JumpStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("JumpTriggerComponent"));
    this->WallStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("WallTriggerComponent"));
    this->AnimationInitialPosition = 0.00f;
    this->bPlayAnimation = false;
    this->AnimSequence = NULL;
}


