#pragma once
#include "CoreMinimal.h"
#include "UnionRunPathBinaryParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRunPathBinaryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkDataCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    FUnionRunPathBinaryParameter();
};

