#include "ItemVioletVoidObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemCountDownComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemVioletVoidObject::AItemVioletVoidObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->AbsorbCenter = CreateDefaultSubobject<USceneComponent>(TEXT("AbsorbCenter"));
    this->VioletVoidMesh = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("VioletVoidMesh"));
    this->VioletVoidAuraMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("VioletVoidAuraMesh"));
    this->StaticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->Trigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("Trigger"));
    this->EatSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SE_ITEM_VIOLETVOID_EAT"));
    this->MovementRoot = CreateDefaultSubobject<UGOCMovement>(TEXT("MovementRoot"));
    this->CountDown = CreateDefaultSubobject<UItemCountDownComponent>(TEXT("CountDown"));
    this->CountDownTime = 2.00f;
    this->EffectRadius = 3.00f;
    this->EffectHeight = 2.00f;
    this->ConstantAbsorbStartTimeA = 0.50f;
    this->ConstantAbsorbStartTimeB = 1.00f;
    this->ConstantAbsorbInterval = 1.00f;
    this->bConstantAbsorbOnlyOwnerSee = true;
    this->DestroyEndPositionOffsetX = 2.50f;
    this->DestroyEndPositionOffsetZ = 0.60f;
    this->DestroyWaitTime = 0.20f;
    this->DestroyWaitMoveOffset = 0.30f;
    this->ItemVioletVoidAbsorbedObjectClass = NULL;
    this->ConstantAbsorbMesh = NULL;
    this->bDebugDraw = false;
    this->bDebugForcePlayMeshAnimation = false;
    this->AbsorbCenter->SetupAttachment(RootComponent);
    this->StaticBody->SetupAttachment(RootComponent);
    this->Trigger->SetupAttachment(RootComponent);
    this->VioletVoidAuraMesh->SetupAttachment(VioletVoidMesh);
    this->VioletVoidMesh->SetupAttachment(AbsorbCenter);
}


void AItemVioletVoidObject::PlaySE(FName SEName) {
}

void AItemVioletVoidObject::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}




