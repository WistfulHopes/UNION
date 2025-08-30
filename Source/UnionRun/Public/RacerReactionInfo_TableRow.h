#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERacerReactionId.h"
#include "ERacerReactionSplitDispType.h"
#include "RacerReactionPriority.h"
#include "RacerReactionInfo_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FRacerReactionInfo_TableRow : public FTableRowBase {
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
    
    UNIONRUN_API FRacerReactionInfo_TableRow();
};

