#include "YellowDrillActor.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionVATMeshComponent.h"

AYellowDrillActor::AYellowDrillActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BodyVATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("BodyVAT"));
    this->LoopEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LoopEffect"));
    this->RunEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RunEffect"));
    this->MoveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveSound"));
    this->MoveSoundLocalCue = NULL;
    this->MoveSoundCue = NULL;
    this->BodyMeshMaterial = NULL;
    this->BodyVATMeshComponent->SetupAttachment(RootComponent);
    this->LoopEffectComponent->SetupAttachment(BodyVATMeshComponent);
    this->MoveSoundComponent->SetupAttachment(BodyVATMeshComponent);
    this->RunEffectComponent->SetupAttachment(RootComponent);
}

void AYellowDrillActor::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void AYellowDrillActor::SetEmissive(float Value) {
}





