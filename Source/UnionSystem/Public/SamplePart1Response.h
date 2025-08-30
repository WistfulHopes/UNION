#pragma once
#include "CoreMinimal.h"
#include "SamplePart1Response.generated.h"

USTRUCT(BlueprintType)
struct FSamplePart1Response {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString formStrData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 formIntData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 queryString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> requestHeader;
    
    UNIONSYSTEM_API FSamplePart1Response();
};

