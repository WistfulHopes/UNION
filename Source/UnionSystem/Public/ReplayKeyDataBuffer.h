#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataBuffer.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FReplayKeyDataBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RowData;
    
    FReplayKeyDataBuffer();
};

