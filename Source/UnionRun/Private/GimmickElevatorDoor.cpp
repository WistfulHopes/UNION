#include "GimmickElevatorDoor.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "GimmickStaticBodyComponent.h"

AGimmickElevatorDoor::AGimmickElevatorDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("DoorFrame"));
    this->DoorFrame = (UUnionStaticMeshComponent*)RootComponent;
    this->DoorLeft = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Left"));
    this->DoorRight = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Right"));
    this->Body = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("Body"));
    this->Sound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("Sound"));
    this->DoorMoveTime = 0.30f;
    this->MoveCurve = NULL;
    this->Body->SetupAttachment(RootComponent);
    this->DoorLeft->SetupAttachment(RootComponent);
    this->DoorRight->SetupAttachment(RootComponent);
    this->Sound->SetupAttachment(RootComponent);
}


