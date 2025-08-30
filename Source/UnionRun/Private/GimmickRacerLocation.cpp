#include "GimmickRacerLocation.h"
#include "ECourseObjColType.h"
#include "StaticBodyComponent.h"

AGimmickRacerLocation::AGimmickRacerLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->ColType = ECourseObjColType::EventCollision;
    this->StaticBodyComponent = (UStaticBodyComponent*)RootComponent;
    this->MPCI = NULL;
    this->MPC = NULL;
}


