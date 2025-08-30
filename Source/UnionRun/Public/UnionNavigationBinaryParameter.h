#pragma once
#include "CoreMinimal.h"
#include "UnionNavigationBinaryParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionNavigationBinaryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    FUnionNavigationBinaryParameter();
};

