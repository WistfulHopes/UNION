#pragma once
#include "CoreMinimal.h"
#include "UnionRaceHUDWarningPerPlayer.generated.h"

class URaceUISubApproachWarning;

USTRUCT(BlueprintType)
struct FUnionRaceHUDWarningPerPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubApproachWarning*> WarningInfoWidget;
    
    UNIONRUN_API FUnionRaceHUDWarningPerPlayer();
};

