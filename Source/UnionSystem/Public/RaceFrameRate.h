#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERaceFrameRate.h"
#include "RaceFrameRate.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRaceFrameRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceFrameRate FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Fps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcTime;
    
    FRaceFrameRate();
};

