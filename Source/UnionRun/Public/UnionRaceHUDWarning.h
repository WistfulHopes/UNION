#pragma once
#include "CoreMinimal.h"
#include "UnionRaceHUDWarning.generated.h"

class URaceUISubApproachWarning;

USTRUCT(BlueprintType)
struct FUnionRaceHUDWarning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubApproachWarning*> WarningInfoWidget;
    
    UNIONRUN_API FUnionRaceHUDWarning();
};

