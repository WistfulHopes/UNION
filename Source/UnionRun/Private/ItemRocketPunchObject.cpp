#include "ItemRocketPunchObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"
#include "TriggerComponent.h"

AItemRocketPunchObject::AItemRocketPunchObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->StaticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->HitTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("HitTrigger"));
    this->WallHitTrigger = CreateDefaultSubobject<UTriggerComponent>(TEXT("WallHitTrigger"));
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->NiagaraJet = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_HomingPunch_Jet"));
    this->NiagaraHit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_FX_Item_HomingPaunch_Hit"));
    this->MoveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveSoundComponent"));
    this->HitSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("HitSoundComponent"));
    this->ReflectSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ReflectSoundComponent"));
    this->MaxLifetime = 10.00f;
    this->MaxReflectNumForward = 0;
    this->MaxReflectNumBackward = 0;
    this->HeightAbovePath = 1.00f;
    this->HolderInvencibleTime = 0.50f;
    this->bDisableReflect = false;
    this->ThrowFrontMoveCorrectionDistance = 15.00f;
    this->MoveControllerMeshRadius = 1.00f;
    this->MeshHeightOffset = 0.50f;
    this->InfinityMaxLifeTime = 10.00f;
    this->InfinityMaxReflectNumForward = 0;
    this->InfinityMaxReflectNumBackward = 0;
    this->bDebugDraw = false;
    this->bDebugOverrideLockOn = false;
    this->bDebugOverrideLockOnRacerIndex = -1;
    this->bDebugForceComLockOn = false;
    this->HitSoundComponent->SetupAttachment(StaticMeshComponent);
    this->HitTrigger->SetupAttachment(StaticMeshComponent);
    this->MoveSoundComponent->SetupAttachment(StaticMeshComponent);
    this->NiagaraHit->SetupAttachment(StaticMeshComponent);
    this->NiagaraJet->SetupAttachment(StaticMeshComponent);
    this->ReflectSoundComponent->SetupAttachment(StaticMeshComponent);
    this->StaticBody->SetupAttachment(StaticMeshComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->WallHitTrigger->SetupAttachment(StaticMeshComponent);
}

void AItemRocketPunchObject::OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo) {
}


