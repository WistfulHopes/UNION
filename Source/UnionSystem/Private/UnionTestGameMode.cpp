#include "UnionTestGameMode.h"
#include "UnionTestPawn.h"

AUnionTestGameMode::AUnionTestGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPawnClass = AUnionTestPawn::StaticClass();
}


