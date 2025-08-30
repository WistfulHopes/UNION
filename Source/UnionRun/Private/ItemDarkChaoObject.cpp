#include "ItemDarkChaoObject.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemStaticBodyComponent.h"

AItemDarkChaoObject::AItemDarkChaoObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ChaoRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DarckChaoRoot"));
    this->ChildActorRing = CreateDefaultSubobject<UChildActorComponent>(TEXT("RingActor"));
    this->DarckChaoAbsorbStaticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("AbsorbedStaticBody"));
    this->m_SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("HoldMeshComponent"));
    this->m_ItemBoxMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("HoldItemBoxMeshComponent"));
    this->ItemboxHitNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DarkChaoHitEffect"));
    this->ItemboxHitSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DarkChaoHitSE"));
    this->DisplayHudAllTime = 4.00f;
    this->DarckChaoThrowSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ItemDarkChaoThrowSE"));
    this->DarckChaoLearveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ItemDarkChaoReturnSE"));
    this->RingAppearTime = 0.50f;
    this->DarkChaoMoveTime = 0.50f;
    this->RingDisappearTime = 0.20f;
    this->DarkChaoStealAlertTime = 1.50f;
    this->DarckChaoStealCompleteTime = 1.50f;
    this->DarckChaoStealTime = 1.00f;
    this->HeroChaoGiftTime = 0.50f;
    this->HeroChaoDisappearTime = 1.50f;
    this->DarckChaoGiftTime = 1.00f;
    this->DarckChaoGiftCompleteTime = 3.00f;
    this->DisappearTime = 0.30f;
    this->TargetSelectFaliedRingNum = 1;
    this->ItemUserPerfomanceAllTime = 5.00f;
    this->ItemUserDamageTime = 4.00f;
    this->OtherPlayerPerfomanceAllTime = 5.00f;
    this->OtherPlayerDamageTime = 4.00f;
    this->DarkChaoRingAlertTime = 1.50f;
    this->m_ringMaxSize = 1.00f;
    this->m_appearTime = 0.50f;
    this->m_ringWaitTime = 0.00f;
    this->m_disappearTime = 0.50f;
    this->m_appearCurve = NULL;
    this->bUseMachineFormOffset = false;
    this->ChaoRoot->SetupAttachment(RootComponent);
    this->ChildActorRing->SetupAttachment(ChaoRoot);
    this->DarckChaoAbsorbStaticBody->SetupAttachment(m_SkeletalMeshComponent);
    this->DarckChaoLearveSoundComponent->SetupAttachment(m_SkeletalMeshComponent);
    this->DarckChaoThrowSoundComponent->SetupAttachment(m_SkeletalMeshComponent);
    this->ItemboxHitNiagaraComponent->SetupAttachment(RootComponent);
    this->ItemboxHitSoundComponent->SetupAttachment(RootComponent);
    this->m_ItemBoxMeshComponent->SetupAttachment(m_SkeletalMeshComponent);
    this->m_SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AItemDarkChaoObject::PlayThrowSound() {
}

void AItemDarkChaoObject::PlayLeaveSound() {
}


