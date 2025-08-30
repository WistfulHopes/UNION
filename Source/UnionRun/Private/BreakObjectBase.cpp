#include "BreakObjectBase.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

ABreakObjectBase::ABreakObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::BreakObject;
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->isBreak = true;
    this->isRelocate = false;
    this->RelocateTimer = 3.00f;
    this->MaxBlendSpaceValue = 1.00f;
    this->MinBlendSpaceValue = 0.00f;
    this->CrashSpeedMaxBlendSpaceValueThreshold = 120.00f;
    this->InValidRotation = false;
    this->CrashSoundTimer = 2.00f;
    this->BreakObjType = EBreakObjType::NONE;
    this->BreakConditionType = EBreakConditionType::Speed;
    this->BreakDamageType = EBreakDamageType::None;
    this->AnimInstance = NULL;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->StaticBodyComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}




bool ABreakObjectBase::IsBroken() const {
    return false;
}

void ABreakObjectBase::HitRacer(int32 RacerIndex) {
}

float ABreakObjectBase::GetBlendSpaceValue() const {
    return 0.0f;
}


