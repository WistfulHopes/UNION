#include "IntervalVATObject.h"
#include "UnionVATMeshComponent.h"

AIntervalVATObject::AIntervalVATObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("VATMeshComponent"));
    this->VATMeshComponent = (UUnionVATMeshComponent*)RootComponent;
    this->IntervalTime = 0.00f;
    this->StartTime = 0.00f;
    this->EventTime = 0.00f;
}


