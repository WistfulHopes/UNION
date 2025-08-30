#include "BoostPadObject.h"
#include "Components/SceneComponent.h"
#include "UnionVATMeshComponent.h"
#include "ECourseObjColType.h"
#include "StaticBodyComponent.h"

ABoostPadObject::ABoostPadObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::BoostPad;
    this->VATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("VATMeshComponent"));
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->BoostPadType = EBoostPadType::A;
    this->BoostGateRadius = 300.00f;
    this->bInIrregular = true;
    this->BoostPadMeshByType[0] = NULL;
    this->BoostPadMeshByType[1] = NULL;
    this->BoostPadMeshByType[2] = NULL;
    this->BoostPadMeshByType[3] = NULL;
    this->BoostPadMeshByType[4] = NULL;
    this->BoostPadMeshByType[5] = NULL;
    this->BoostPadMeshByType[6] = NULL;
    this->BoostPadMeshByType[7] = NULL;
    this->BoostPadMeshByType[8] = NULL;
    this->BoostPadMeshByType[9] = NULL;
    this->SpecialBoostPadMeshByType[0] = NULL;
    this->SpecialBoostPadMeshByType[1] = NULL;
    this->SpecialBoostPadMeshByType[2] = NULL;
    this->SpecialBoostPadMeshByType[3] = NULL;
    this->SpecialBoostPadMeshByType[4] = NULL;
    this->SpecialBoostPadMeshByType[5] = NULL;
    this->SpecialBoostPadMeshByType[6] = NULL;
    this->SpecialBoostPadMeshByType[7] = NULL;
    this->SpecialBoostPadMeshByType[8] = NULL;
    this->SpecialBoostPadMeshByType[9] = NULL;
    this->PassThroughFX = NULL;
    this->SpecificId = -1;
    this->bIsHiddenMesh = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_bIsSpecial = false;
    this->m_SpecialGroup = ESpecialObjGroup::All;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
    this->VATMeshComponent->SetupAttachment(RootComponent);
}

void ABoostPadObject::SetGateScaleRate(float Rate) {
}

void ABoostPadObject::SetBoostPadType(EBoostPadType Type, bool IsSpecial) {
}

void ABoostPadObject::OnVATUpdate(UUnionVATMeshComponent* VATComponent, const FUnionVATSequenceInfo& SequenceInfo) {
}


