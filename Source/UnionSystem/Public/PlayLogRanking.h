#pragma once
#include "CoreMinimal.h"
#include "PlayLogRanking.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogRanking {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Average;
    
public:
    UNIONSYSTEM_API FPlayLogRanking();
};

