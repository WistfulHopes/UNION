#pragma once
#include "CoreMinimal.h"
#include "PlayLogOption.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogOption {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssistNumHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssistNumAccelerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssistNumAirTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssistNumGyro;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssistNumOperation[4];
    
public:
    UNIONSYSTEM_API FPlayLogOption();
};

