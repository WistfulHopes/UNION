#include "GimmickRingCircle.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "ERandomObjType.h"
#include "StaticBodyComponent.h"

AGimmickRingCircle::AGimmickRingCircle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->RandomObjType = ERandomObjType::RingCircle;
    this->ComBeneficial = true;
    this->SkeletalMeshComponent = (UUnionSkeletalMeshComponent*)RootComponent;
    this->RingObject = NULL;
    this->RingNum = 10;
    this->CircleDiameter = 6.50f;
    this->DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->BaseAngle = 90.00f;
    this->RingRespawnWaitTime = 0.50f;
    this->CircleRespawnWaitTime = 5.00f;
    this->EasingFunc = EEasingFunc::Linear;
    this->FollowLength = 30.00f;
    this->FollowTime = 0.50f;
    this->SuckWaitTime = 1.00f;
    this->SuckInterval = 0.05f;
    this->CircleNum = 2;
    this->m_SpecialGroup = ESpecialObjGroup::All;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}



