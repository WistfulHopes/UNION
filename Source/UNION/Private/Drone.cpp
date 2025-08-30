#include "Drone.h"
#include "Components/SceneComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "UnionWidgetComponent.h"

ADrone::ADrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BodyComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Body"));
    this->MonitorComponent = CreateDefaultSubobject<UUnionWidgetComponent>(TEXT("Monitor"));
    this->AppearSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AppearSound"));
    this->RemainDistanceSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("RemainDistanceSound"));
    this->ReversSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("ReversSound"));
    this->TransformInfos.AddDefaulted(7);
    this->ShowTime = 3.00f;
    this->CautionReverseInterval = 0.50f;
    this->IdleMoveAmplitude = 5.00f;
    this->Timer = -1.00f;
    this->AppearSound->SetupAttachment(BodyComponent);
    this->BodyComponent->SetupAttachment(RootComponent);
    this->MonitorComponent->SetupAttachment(BodyComponent);
    this->RemainDistanceSound->SetupAttachment(BodyComponent);
    this->ReversSound->SetupAttachment(BodyComponent);
}

bool ADrone::UpdateTimer(const float DeltaTime) {
    return false;
}

void ADrone::SetInOutTransform(const float PosRatio, const float RotRatio) {
}

void ADrone::SetIdleTransform(const float PosYRatio) {
}



void ADrone::PreCallDrone() {
}

void ADrone::PostFinishDrone() {
}


int32 ADrone::GetDroneMaterialIndex(const FCallDroneInfo& Info) {
    return 0;
}

void ADrone::FSMChangeState(EDroneState NextState) {
}

void ADrone::FinishTimeline() {
}



