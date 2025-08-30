#include "Turntable.h"
#include "Components/SceneComponent.h"
#include "TurntableComponent.h"

ATurntable::ATurntable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TurntableComponent = CreateDefaultSubobject<UTurntableComponent>(TEXT("Turntable"));
    this->TurntableComponent->SetupAttachment(RootComponent);
}

UTurntableComponent* ATurntable::GetTurntableComponent() {
    return NULL;
}


