#pragma once
#include "CoreMinimal.h"
#include "ReplayStatusDataBuffer.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FReplayStatusDataBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RowData;
    
    FReplayStatusDataBuffer();
};

