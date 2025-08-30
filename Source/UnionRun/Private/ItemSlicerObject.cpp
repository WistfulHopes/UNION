#include "ItemSlicerObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "TriggerComponent.h"

AItemSlicerObject::AItemSlicerObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->CarCenter = NULL;
    this->Trigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("Trigger"));
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("MovementRoot"));
    this->EffectSlicer = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_Slicer01"));
    this->SESlicer = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_SLICER_TORNADO"));
    this->SESlicerLocal = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_SLICER_TORNADO_LOCAL"));
    this->SESlicerDestroy = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_SLICER_BLOCK"));
    this->TargetItemInvencibleTime = 1.00f;
    this->AttackRadius = 2.00f;
    this->AttackHeight = 2.25f;
    this->EffectHeight = 2.00f;
    this->bDebugDraw = false;
    this->EffectSlicer->SetupAttachment(RootComponent);
    this->SESlicer->SetupAttachment(RootComponent);
    this->Trigger->SetupAttachment(RootComponent);
}

void AItemSlicerObject::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}


