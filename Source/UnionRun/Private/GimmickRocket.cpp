#include "GimmickRocket.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"

AGimmickRocket::AGimmickRocket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("RocketMesh"));
    this->RocketMesh = (UUnionStaticMeshComponent*)RootComponent;
    this->RocketFireEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireEffect"));
    this->RocketLaunchEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LaunchEffect"));
    this->WaitingFireSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WaitingFireSound"));
    this->FlyingFireSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("FlyingFireSound"));
    this->MaxDistance = 1000.00f;
    this->MaxSpeed = 10.00f;
    this->SpeedChangeTime = 5.00f;
    this->LaunchingSpeedCurve = NULL;
    this->FlyingFireSound->SetupAttachment(RootComponent);
    this->RocketFireEffect->SetupAttachment(RootComponent);
    this->RocketLaunchEffect->SetupAttachment(RootComponent);
    this->WaitingFireSound->SetupAttachment(RootComponent);
}


