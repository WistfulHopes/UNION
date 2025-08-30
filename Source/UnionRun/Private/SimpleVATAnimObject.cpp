#include "SimpleVATAnimObject.h"
#include "UnionVATAnimEventComponent.h"

ASimpleVATAnimObject::ASimpleVATAnimObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VATAnim = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("VATAnimMesh"));
}


