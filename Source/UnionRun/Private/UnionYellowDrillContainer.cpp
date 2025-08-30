#include "UnionYellowDrillContainer.h"
#include "AtomComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AUnionYellowDrillContainer::AUnionYellowDrillContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->YellowDrillMesh = NULL;
    this->LoopEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LoopEffect"));
    this->NomalOnGroundEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NomalOnGroundEffect"));
    this->WaterOnGroundEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("WaterOnGroundEffect"));
    this->TransEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TransEffect"));
    this->ReturnEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ReturnEffect"));
    this->DrillLoopSound = CreateDefaultSubobject<UAtomComponent>(TEXT("LoopSound"));
    this->DrillLoopSound->SetupAttachment(RootComponent);
    this->LoopEffect->SetupAttachment(RootComponent);
    this->NomalOnGroundEffect->SetupAttachment(RootComponent);
    this->ReturnEffect->SetupAttachment(RootComponent);
    this->TransEffect->SetupAttachment(RootComponent);
    this->WaterOnGroundEffect->SetupAttachment(RootComponent);
}


