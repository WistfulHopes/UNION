#include "DancingBoo.h"
#include "Components/SceneComponent.h"
#include "UnionVATAnimEventComponent.h"

ADancingBoo::ADancingBoo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->MeshA1 = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("MeshA1"));
    this->MeshA2 = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("MeshA2"));
    this->MeshB1 = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("MeshB1"));
    this->MeshB2 = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("MeshB2"));
    this->MeshC1 = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("MeshC1"));
    this->MeshC2 = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("MeshC2"));
    this->BoomStroke = 100.00f;
    this->RotationDeg = 90.00f;
    this->MoveSpeed = 1.00f;
    this->MeshA1->SetupAttachment(RootComponent);
    this->MeshA2->SetupAttachment(MeshA1);
    this->MeshB1->SetupAttachment(RootComponent);
    this->MeshB2->SetupAttachment(MeshB1);
    this->MeshC1->SetupAttachment(RootComponent);
    this->MeshC2->SetupAttachment(MeshC1);
}


