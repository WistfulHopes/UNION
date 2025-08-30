#pragma once
#include "CoreMinimal.h"
#include "UnionRaceHUDPlayerNameUI.generated.h"

class URaceUISubPlayerName;

USTRUCT(BlueprintType)
struct FUnionRaceHUDPlayerNameUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubPlayerName*> PlayerNameUI;
    
    UNIONRUN_API FUnionRaceHUDPlayerNameUI();
};

