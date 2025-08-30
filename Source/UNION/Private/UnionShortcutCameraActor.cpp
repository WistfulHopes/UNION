#include "UnionShortcutCameraActor.h"
#include "UnionShortcutComponent.h"

AUnionShortcutCameraActor::AUnionShortcutCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionShortcutComponent>(TEXT("Root"));
    this->RootScene_ = (UUnionShortcutComponent*)RootComponent;
    this->TravelRingType_ = ETravelRingType::Shortcut_Entrance;
    this->Type_ = 0;
    this->StageId_ = 0;
    this->PlayerId_ = 0;
    this->ShortcutId_ = 0;
    this->TargetMesh_ = NULL;
    this->DomainNumber_ = EDomainNumber::InvalidDomainNumber;
    this->ShortcutRingSrc_ = NULL;
    this->ShortcutRingDst_ = NULL;
}

void AUnionShortcutCameraActor::Initialize() {
}


