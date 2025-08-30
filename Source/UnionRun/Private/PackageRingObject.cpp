#include "PackageRingObject.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"
#include "RelocationMovement.h"
#include "SuckedMovement.h"

APackageRingObject::APackageRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->PackageRingType = EPackageRingType::Num10;
    this->_RespawnWaitTime = 0.50f;
    this->RingNum = 10;
    this->SuckedMovement = CreateDefaultSubobject<USuckedMovement>(TEXT("SuckedMovement"));
    this->RelocationMovement = CreateDefaultSubobject<URelocationMovement>(TEXT("RelocationMovement"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->bIsAutoToggleEnable = false;
    this->AutoEnableStartTime = 0.00f;
    this->AutoDisableTime = 2.00f;
    this->AutoEnableTime = 2.00f;
    this->m_SpecialGroup = ESpecialObjGroup::All;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void APackageRingObject::SetRingType(EPackageRingType Type) {
}

void APackageRingObject::HitRacer(int32 RacerIndex) {
}


