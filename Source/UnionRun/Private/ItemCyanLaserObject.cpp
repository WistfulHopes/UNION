#include "ItemCyanLaserObject.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"

AItemCyanLaserObject::AItemCyanLaserObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("RootScene"));
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->RootScene_ = (USceneComponent*)RootComponent;
    this->playerPointerMesh00 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("playerPointerMesh00"));
    this->playerPointerMesh01 = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("playerPointerMesh01"));
    this->pointerMesh00_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Pointer00"));
    this->pointerMesh01_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Pointer01"));
    this->pointerMesh02_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Pointer02"));
    this->pointerMesh03_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Pointer03"));
    this->pointerMesh04_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Pointer04"));
    this->pointerMesh05_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Pointer05"));
    this->laserMesh00_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh00"));
    this->laserMesh01_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh01"));
    this->laserMesh02_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh02"));
    this->laserMesh03_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh03"));
    this->laserMesh04_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh04"));
    this->laserMesh05_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh05"));
    this->laserMesh06_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh06"));
    this->laserMesh07_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh07"));
    this->laserMesh08_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh08"));
    this->laserMesh09_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh09"));
    this->laserMesh10_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh10"));
    this->laserMesh11_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh11"));
    this->laserMesh12_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh12"));
    this->laserMesh13_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh13"));
    this->laserMesh14_ = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("LaserMesh14"));
    this->laserMeshAsset_ = NULL;
    this->laserMaterialAsset_ = NULL;
    this->bodyFX_ = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BodyFX"));
    this->bodyInFXAsset_ = NULL;
    this->bodyOutFXAsset_ = NULL;
    this->passedFXAsset_ = NULL;
    this->startSoundAsset_ = NULL;
    this->endSoundAsset_ = NULL;
    this->pointerSoundAsset_ = NULL;
    this->movingSoundAsset_ = NULL;
    this->movingOwnerSoundAsset_ = NULL;
    this->passedSoundAsset_ = NULL;
    this->MovingCameraClass = NULL;
    this->rivalPointerNumMax_ = 6;
    this->playerPointerHeightOffset_ = 300.00f;
    this->rivalPointerHeightOffset_ = 150.00f;
    this->forwardDist_ = 100.00f;
    this->playerSearchFrontDist_ = 10.00f;
    this->playerSearchDist_ = 30.00f;
    this->noTargetGap_ = 5.00f;
    this->noTargetDist_ = 50.00f;
    this->toLastCount_ = 3;
    this->toLastDist_ = 10.00f;
    this->toLastGap_ = 50.00f;
    this->toGroundRayUpperHeight_ = 1.00f;
    this->toGroundRayLowerHeight_ = -2.00f;
    this->lastLocationHeightOffset_ = 50.00f;
    this->noTargetPointerNum_ = 2;
    this->lerpRate_ = 0.60f;
    this->waitStopSeconds_ = 0.10f;
    this->startDelaySeconds_ = 0.10f;
    this->endDelaySeconds_ = 0.30f;
    this->cancelSeconds_ = 1.00f;
    this->mparamAnimationMin_ = -1.00f;
    this->mparamAnimationMax_ = 3.00f;
    this->tempNiagara = NULL;
}


