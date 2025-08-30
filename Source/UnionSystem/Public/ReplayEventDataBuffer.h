#pragma once
#include "CoreMinimal.h"
#include "ReplayEventDataBuffer.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FReplayEventDataBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RowData;
    
    FReplayEventDataBuffer();
};

