#include "ItemSplashObject.h"
#include "Components/SceneComponent.h"
#include "GOCMovement.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ItemCountDownComponent.h"

AItemSplashObject::AItemSplashObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BodyMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("SplashBodyMesh"));
    this->Movement = CreateDefaultSubobject<UGOCMovement>(TEXT("Movement"));
    this->CountDown = CreateDefaultSubobject<UItemCountDownComponent>(TEXT("CountDown"));
    this->WaterAttackSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WaterAttackSound"));
    this->SplashDisappearEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SplashDisappearEffect"));
    this->MaxFireNum = 5;
    this->FireInterval = 2.00f;
    this->CountDownFireNum = 1;
    this->FireMotionTime = 0.20f;
    this->FireMotionRotateAngle = 60.00f;
    this->FireMotionCurve = NULL;
    this->ProjectileClass = NULL;
    this->BodyMeshComponent->SetupAttachment(RootComponent);
    this->SplashDisappearEffectComponent->SetupAttachment(RootComponent);
    this->WaterAttackSound->SetupAttachment(BodyMeshComponent);
}


