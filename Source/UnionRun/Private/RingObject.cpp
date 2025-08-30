#include "RingObject.h"
#include "Components/SceneComponent.h"
#include "RelocationMovement.h"
#include "StaticBodyComponent.h"
#include "SuckedMovement.h"

ARingObject::ARingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SuckedMovement = CreateDefaultSubobject<USuckedMovement>(TEXT("SuckedMovement"));
    this->RelocationMovement = CreateDefaultSubobject<URelocationMovement>(TEXT("RelocationMovement"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->_RespawnWaitTime = 1.00f;
    this->_FinalLapChange = true;
    this->_FinalLapRingNum = 2;
    this->_FinalLapRingOffset = 150.00f;
    this->bIsAutoToggleEnable = false;
    this->AutoEnableStartTime = 0.00f;
    this->AutoDisableTime = 2.00f;
    this->AutoEnableTime = 2.00f;
    this->m_SpecialGroup = ESpecialObjGroup::All;
    this->RingExtndType = ERingExtndType::Normal;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}

void ARingObject::SetRingType() {
}

void ARingObject::SetIsFinalLapChange(bool flag) {
}

bool ARingObject::IsFinalLapChange() {
    return false;
}

float ARingObject::GetFinalLapRingOffset() {
    return 0.0f;
}

int32 ARingObject::GetFinalLapRingNum() {
    return 0;
}


