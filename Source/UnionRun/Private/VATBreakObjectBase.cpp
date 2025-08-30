#include "VATBreakObjectBase.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"
#include "UnionVATMeshComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

AVATBreakObjectBase::AVATBreakObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::BreakObject;
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->VATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("VATMeshComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->BreakObjType = EBreakObjType::NONE;
    this->BreakConditionType = EBreakConditionType::Speed;
    this->InValidRotation = false;
    this->HighBreakSpeedThreshold = 100.00f;
    this->IsForceLowBreakType = false;
    this->IsStaticMeshVisible = false;
    this->isRelocate = false;
    this->RelocateTimer = 3.00f;
    this->RelocateRange = 10.00f;
    this->BreakDamageType = EBreakDamageType::None;
    this->DamageType = RacerDamageType::EnemySmall;
    this->CrashSoundTimer = 2.00f;
    this->VATAnimStartFrame = 0;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->VATMeshComponent->SetupAttachment(RootComponent);
}

void AVATBreakObjectBase::OnVATUpdate(UUnionVATMeshComponent* VATComponent, const FUnionVATSequenceInfo& SequenceInfo) {
}



EBreakSpeedType AVATBreakObjectBase::GetBreakSpeedType() const {
    return EBreakSpeedType::Low;
}


