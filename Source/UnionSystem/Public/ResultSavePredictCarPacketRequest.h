#pragma once
#include "CoreMinimal.h"
#include "ResultSavePredictCarPacketRequest.generated.h"

USTRUCT(BlueprintType)
struct FResultSavePredictCarPacketRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Binary;
    
    UNIONSYSTEM_API FResultSavePredictCarPacketRequest();
};

