#include "GimmickBollard.h"
#include "Components/SceneComponent.h"
#include "UnionVATMeshComponent.h"
#include "TriggerComponent.h"

AGimmickBollard::AGimmickBollard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("BollardVATMesh"));
    this->BollardVATMesh = (UUnionVATMeshComponent*)RootComponent;
    this->BollardBodyCylinderTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("BollardBodyCylinderTrigger"));
    this->BollardAirBoxTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("BollardAirBoxTrigger"));
    this->RotatePitchRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RotatePitchRoot"));
    this->FallDownSpeedRate = 4.00f;
    this->KeepLyingDownTime = 0.20f;
    this->GetUpSpeedRate = 2.00f;
    this->RotateSpeed = 360.00f;
    this->Type = EGimmickBollardType::Orange;
    this->BollardAirBoxTrigger->SetupAttachment(RootComponent);
    this->BollardBodyCylinderTrigger->SetupAttachment(RotatePitchRoot);
    this->RotatePitchRoot->SetupAttachment(RootComponent);
}

void AGimmickBollard::OnTriggerColliderConflict(const FHitTriggerInfo& Info) {
}


