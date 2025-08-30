#include "GimmickObakeFlameField.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "GimmickStaticBodyComponent.h"

AGimmickObakeFlameField::AGimmickObakeFlameField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyStatickMeshComponent1 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent1"));
    this->BodyStatickMeshComponent2 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent2"));
    this->BodyStatickMeshComponent3 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent3"));
    this->BodyStatickMeshComponent4 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent4"));
    this->BodyStatickMeshComponent5 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent5"));
    this->BodyStatickMeshComponent6 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent6"));
    this->BodyStatickMeshComponent7 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent7"));
    this->BodyStatickMeshComponent8 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent8"));
    this->BodyStatickMeshComponent9 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent9"));
    this->DamageType = RacerDamageType::EnemyMedium;
    this->ParticleIntParameterSetting = 0;
    this->AttackContinueTime = 1.00f;
    this->m_FireEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireAttackEffect"));
    this->m_SmokeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect"));
    this->m_SmokeEffect2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect2"));
    this->m_SmokeEffect3 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect3"));
    this->m_SmokeEffect4 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect4"));
    this->m_SmokeEffect5 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect5"));
    this->m_SmokeEffect6 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect6"));
    this->m_SmokeEffect7 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect7"));
    this->m_SmokeEffect8 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect8"));
    this->m_SmokeEffect9 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireSmokekEffect9"));
    this->FlameSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("FlameSE"));
    this->m_MainFireStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainStatickBodyComponent"));
    this->BodyStatickMeshComponent2->SetupAttachment(BodyStatickMeshComponent1);
    this->BodyStatickMeshComponent3->SetupAttachment(BodyStatickMeshComponent1);
    this->BodyStatickMeshComponent4->SetupAttachment(BodyStatickMeshComponent1);
    this->BodyStatickMeshComponent5->SetupAttachment(BodyStatickMeshComponent1);
    this->BodyStatickMeshComponent6->SetupAttachment(BodyStatickMeshComponent1);
    this->BodyStatickMeshComponent7->SetupAttachment(BodyStatickMeshComponent1);
    this->BodyStatickMeshComponent8->SetupAttachment(BodyStatickMeshComponent1);
    this->BodyStatickMeshComponent9->SetupAttachment(BodyStatickMeshComponent1);
    this->FlameSoundComponent->SetupAttachment(BodyStatickMeshComponent1);
    this->m_MainFireStaticBodyComponent->SetupAttachment(BodyStatickMeshComponent1);
    this->m_SmokeEffect->SetupAttachment(BodyStatickMeshComponent1);
    this->m_SmokeEffect2->SetupAttachment(BodyStatickMeshComponent2);
    this->m_SmokeEffect3->SetupAttachment(BodyStatickMeshComponent3);
    this->m_SmokeEffect4->SetupAttachment(BodyStatickMeshComponent4);
    this->m_SmokeEffect5->SetupAttachment(BodyStatickMeshComponent5);
    this->m_SmokeEffect6->SetupAttachment(BodyStatickMeshComponent6);
    this->m_SmokeEffect7->SetupAttachment(BodyStatickMeshComponent7);
    this->m_SmokeEffect8->SetupAttachment(BodyStatickMeshComponent8);
    this->m_SmokeEffect9->SetupAttachment(BodyStatickMeshComponent9);
}


