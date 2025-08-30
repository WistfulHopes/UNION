#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RaceReplayGhostPawn.generated.h"

UCLASS(Blueprintable)
class UNION_API ARaceReplayGhostPawn : public APawn {
    GENERATED_BODY()
public:
    ARaceReplayGhostPawn(const FObjectInitializer& ObjectInitializer);

};

