#include "UnionShortcutRingActor.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

AUnionShortcutRingActor::AUnionShortcutRingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->RootScene_ = (USceneComponent*)RootComponent;
    this->GateMesh_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->WhiteOutMaterialInterface = NULL;
    this->WhiteoutEffectMaterial_ = NULL;
    this->GateMesh_->SetupAttachment(RootComponent);
}


