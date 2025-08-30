#include "UnionAOStaticMeshComponent.h"

UUnionAOStaticMeshComponent::UUnionAOStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsMesh = true;
    this->IsAO = true;
    this->Intensity = 0.00f;
    this->DistanceShadow = 100.00f;
    this->RayLength = 3000.00f;
    this->MaterialInstance = NULL;
    this->DynamicMaterialInstance = NULL;
    this->Texture2D = NULL;
    this->StaticShadowMesh = NULL;
    this->IsSetUp = false;
    this->ShadowMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("ShadowMesh"));
}


