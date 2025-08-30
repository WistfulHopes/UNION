#include "BounceCollision.h"
#include "Components/SceneComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

ABounceCollision::ABounceCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::MoveCollision;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->ShapeType = EStaticBodyShapeType::StaticBodyCapsule;
    this->Radius = 50.00f;
    this->Height = 100.00f;
    this->ParamId = 0;
    this->bAirImpact = false;
    this->SurfaceType = EUnionSurfaceType::None;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}


