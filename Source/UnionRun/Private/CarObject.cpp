#include "CarObject.h"
#include "Components/SceneComponent.h"
#include "GadgetComponent.h"
#include "TriggerComponent.h"

ACarObject::ACarObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->GadgetComponent = CreateDefaultSubobject<UGadgetComponent>(TEXT("gadget"));
    this->ColliderRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CollliderRoot"));
    this->HitCommonTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitCommonTrigger"));
    this->HitEventTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitEventTrigger"));
    this->RingTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("RingTrigger"));
    this->RingAbsorbTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("RingAbsorbTrigger"));
    this->HitCommonTrigger->SetupAttachment(ColliderRoot);
    this->HitEventTrigger->SetupAttachment(ColliderRoot);
    this->RingAbsorbTrigger->SetupAttachment(ColliderRoot);
    this->RingTrigger->SetupAttachment(ColliderRoot);
}

void ACarObject::OnHitRingTriggerConflict(const FHitTriggerInfo& HitInfo) {
}

void ACarObject::OnHitEventTriggerConflict(const FHitTriggerInfo& HitInfo) {
}

void ACarObject::OnHitCommonTriggerConflict(const FHitTriggerInfo& HitInfo) {
}


