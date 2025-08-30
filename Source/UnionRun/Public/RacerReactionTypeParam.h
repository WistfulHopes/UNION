#pragma once
#include "CoreMinimal.h"
#include "ERacerReactionId.h"
#include "ERacerReactionSplitDispType.h"
#include "RacerReactionChrData.h"
#include "RacerReactionChrDataList.h"
#include "RacerReactionPriority.h"
#include "RacerReactionTypeParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionTypeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERacerReactionId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RacerReactionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERacerReactionSplitDispType SplitDispType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionChrData> RandomVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionChrDataList> ChrVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionChrDataList> LinkVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionChrDataList> RivalVoiceList;
    
    FRacerReactionTypeParam();
};

