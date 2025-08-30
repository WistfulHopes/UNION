#include "ItemDarkChaoPerformance.h"
#include "NiagaraComponent.h"
#include "ItemStaticBodyComponent.h"
#include "UnionAtomComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AItemDarkChaoPerformance::AItemDarkChaoPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitTriggerTime = 4.00f;
    this->StealEffectPlayTime = 0.50f;
    this->DisappearTime = 1.00f;
    this->DisappearHoldMeshTime = 3.30f;
    this->AbsorbEnableTime = 0.30f;
    this->DarkChaoSkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("DarkChaoSkeletalMeshComponent"));
    this->m_ItemBoxMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("HoldItemBoxMeshComponent"));
    this->HoldItemRootComponent = NULL;
    this->DarkChaoNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DarkChaoEffect"));
    this->DarckChaoSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DarkChaoSE"));
    this->DarckChaoThrowSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DarkChaoThrowSE"));
    this->DarckChaoLearveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DarkChaoReturnSE"));
    this->DarckChaoStaticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("AbsorbedStaticBody"));
    this->tableItemMeshData = NULL;
    this->DarckChaoLearveSoundComponent->SetupAttachment(DarkChaoSkeletalMeshComponent);
    this->DarckChaoSoundComponent->SetupAttachment(RingRoot);
    this->DarckChaoStaticBody->SetupAttachment(RingRoot);
    this->DarckChaoThrowSoundComponent->SetupAttachment(DarkChaoSkeletalMeshComponent);
    this->DarkChaoNiagaraComponent->SetupAttachment(RootComponent);
    this->DarkChaoSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->m_ItemBoxMeshComponent->SetupAttachment(DarkChaoSkeletalMeshComponent);
}

void AItemDarkChaoPerformance::SettingRingVisible(bool IsEnable) {
}

void AItemDarkChaoPerformance::SetRingDisplayTimer(EItemDarkChaoPerfomanceType ChaoType) {
}


void AItemDarkChaoPerformance::PlayThrowSound() {
}

void AItemDarkChaoPerformance::PlayLeaveSound() {
}



