#pragma once
#include "CoreMinimal.h"
#include "RomCheckRomVersionRequest.generated.h"

USTRUCT(BlueprintType)
struct FRomCheckRomVersionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 romVersionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 romType;
    
    UNIONSYSTEM_API FRomCheckRomVersionRequest();
};

