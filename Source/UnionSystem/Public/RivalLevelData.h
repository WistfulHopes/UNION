#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RivalTicket.h"
#include "RivalLevelData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRivalLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalTicket NormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalTicket HighSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalTicket SonicSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalTicket SuperSonicSpeed;
    
    FRivalLevelData();
};

