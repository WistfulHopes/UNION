#include "PreviewMachineActor.h"
#include "AlwaysTickCustomAttrAnimComponent.h"

APreviewMachineActor::APreviewMachineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomAttrAnimComponent = CreateDefaultSubobject<UAlwaysTickCustomAttrAnimComponent>(TEXT("CustomAttrAnimation"));
}


