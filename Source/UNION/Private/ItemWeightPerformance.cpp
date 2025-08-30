#include "ItemWeightPerformance.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "ItemStaticBodyComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"

AItemWeightPerformance::AItemWeightPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->Mesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Mesh"));
    this->BreakEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BreakEffect"));
    this->WeightSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WeightSound"));
    this->StaticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("Body"));
    this->FallTime = 1.00f;
    this->AutoScale = false;
    this->AutoScaledHeight = 90.00f;
    this->HitTriggerTime = 0.50f;
    this->LandingWaitTime = 0.20f;
    this->LandScaleFadeOutTime = 0.50f;
    this->ZScaleMin = 0.00f;
    this->Rank1MeshReference = NULL;
    this->Rank2MeshReference = NULL;
    this->DropDownCurve = NULL;
    this->FallSound = NULL;
    this->BreakSound = NULL;
    this->BreakEffect->SetupAttachment(Mesh);
    this->Mesh->SetupAttachment(MeshRoot);
    this->MeshRoot->SetupAttachment(RootComponent);
    this->StaticBody->SetupAttachment(MeshRoot);
}


