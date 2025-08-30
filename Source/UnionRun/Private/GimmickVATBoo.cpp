#include "GimmickVATBoo.h"
#include "Components/SceneComponent.h"
#include "UnionVATAnimEventComponent.h"

AGimmickVATBoo::AGimmickVATBoo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->BooVATMeshComponent = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("BooVATMeshComponent"));
    this->AnimStartFrame = 0;
    this->BooVATMeshComponent->SetupAttachment(RootComponent);
}


