#include "ShortcutRingObject.h"
#include "Components/SceneComponent.h"
#include "ERandomObjType.h"

AShortcutRingObject::AShortcutRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::ShortcutRing;
    this->GateActorClass_ = NULL;
    this->TravelRingType = ETravelRingType::Shortcut_Entrance;
    this->ShortcutRingType = EShortcutRingType::Entrance;
    this->bHalfRing = false;
    this->ShortcutId = 0;
    this->StageId_ = EStageId::UnKnown;
    this->RingScale = 25.00f;
    this->bUseAnotherGate = false;
    this->bUseOverrideCollisionScale = false;
    this->OverrideCollisionScale = 0.00f;
    this->CameraActor = NULL;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}

void AShortcutRingObject::SetupShortcutRing() {
}

void AShortcutRingObject::SetTravelRingType(ETravelRingType Type) {
}

void AShortcutRingObject::SetShortcutRingType(EShortcutRingType Type) {
}

void AShortcutRingObject::SetShortcutId(int32 ID) {
}

void AShortcutRingObject::SetRingScale(float Scale) {
}

void AShortcutRingObject::SetHalfRing(bool bHalf) {
}

bool AShortcutRingObject::IsUseOverrideCollisionScale() {
    return false;
}

bool AShortcutRingObject::IsUseAnotherGate() const {
    return false;
}

bool AShortcutRingObject::IsHalfRing() {
    return false;
}

ETravelRingType AShortcutRingObject::GetTravelRingType() const {
    return ETravelRingType::Invalid;
}

EStageId AShortcutRingObject::GetStageId() {
    return EStageId::MainBegin;
}

EShortcutRingType AShortcutRingObject::GetShortcutRingType() {
    return EShortcutRingType::Entrance;
}

int32 AShortcutRingObject::GetShortcutId() {
    return 0;
}

float AShortcutRingObject::GetRingScale() {
    return 0.0f;
}

float AShortcutRingObject::GetOverrideCollisionScale() {
    return 0.0f;
}


