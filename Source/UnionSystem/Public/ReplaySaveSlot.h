#pragma once
#include "CoreMinimal.h"
#include "ReplaySaveInfo.h"
#include "ReplaySaveSlot.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FReplaySaveSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplaySaveInfo> ReplayInfo;
    
    FReplaySaveSlot();
};

