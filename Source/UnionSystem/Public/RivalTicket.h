#pragma once
#include "CoreMinimal.h"
#include "RivalTicket.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRivalTicket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TicketCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerBonusNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerBonusChallenge;
    
    FRivalTicket();
};

