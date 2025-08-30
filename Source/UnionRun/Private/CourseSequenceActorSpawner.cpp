#include "CourseSequenceActorSpawner.h"
#include "Components/SceneComponent.h"

ACourseSequenceActorSpawner::ACourseSequenceActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}

void ACourseSequenceActorSpawner::SetSize_Implementation(FVector Size) {
}

void ACourseSequenceActorSpawner::PostSpawnSequenceActor_Implementation() {
}

AActor* ACourseSequenceActorSpawner::GetSpawnActor(int32 Index) {
    return NULL;
}


