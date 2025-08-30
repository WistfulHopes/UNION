#pragma once
#include "CoreMinimal.h"
#include "SamplePart1Request.generated.h"

USTRUCT(BlueprintType)
struct FSamplePart1Request {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString strData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 intData;
    
    UNIONSYSTEM_API FSamplePart1Request();
};

