#include "GimmickFlyingBounceObject.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ERandomObjType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickFlyingBounceObject::AGimmickFlyingBounceObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::FlyingBounce;
    this->bIsWide = true;
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->m_SpecialGroup = ESpecialObjGroup::All;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}



