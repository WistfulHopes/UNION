#pragma once
#include "CoreMinimal.h"
#include "ERacerReactionId.h"
#include "ERacerReactionSplitDispType.h"
#include "RacerReactionPriority.h"
#include "RacerReactionInfo.generated.h"

USTRUCT(BlueprintType)
struct FRacerReactionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERacerReactionId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RacerReactionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERacerReactionSplitDispType SplitDispType;
    
    UNIONRUN_API FRacerReactionInfo();
};

