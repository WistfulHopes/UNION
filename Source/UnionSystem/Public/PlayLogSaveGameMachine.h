#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameMachineData.h"
#include "PlayLogSaveGameMachine.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameMachineData Data[11];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameMachine();
};

