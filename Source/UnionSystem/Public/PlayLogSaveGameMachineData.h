#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameMachineData.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameMachineData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCountBase[150];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCountCustomFront[150];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCountCustomRear[150];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCountCustomUnit[150];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameMachineData();
};

