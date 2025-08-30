#include "GuidedJumpStandObject.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

AGuidedJumpStandObject::AGuidedJumpStandObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::GuidedJump;
    this->DrawStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("DrawSkeletalMeshComponent"));
    this->m_bNoCollision = false;
    this->m_bCollisionOnly = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody"));
    this->ParamId = 0;
    this->DrawStaticMeshComponent->SetupAttachment(RootComponent);
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}


