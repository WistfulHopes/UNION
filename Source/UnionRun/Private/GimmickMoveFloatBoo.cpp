#include "GimmickMoveFloatBoo.h"
#include "Components/SceneComponent.h"
#include "UnionVATAnimEventComponent.h"

AGimmickMoveFloatBoo::AGimmickMoveFloatBoo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->BooVATMeshComponent = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("BooVATMeshComponent"));
    this->AnimStartFrame = 0;
    this->BooVATMeshComponent->SetupAttachment(RootComponent);
}


