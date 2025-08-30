#include "CameraCollision.h"
#include "Components/SceneComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

ACameraCollision::ACameraCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::CameraCollision;
    this->CameraId = 0;
    this->ResultCameraType = EResultCameraProductionType::DEFAULT;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}

void ACameraCollision::SetCameraData(int32 NewCameraId, FVector NewBoxSize, EResultCameraProductionType NewResultCameraType) {
}


