#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGadgetId.h"
#include "EItemId.h"
#include "GadgetLotteryRateMagnificationCorrectionData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetLotteryRateMagnificationCorrectionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> ItemIdList;
    
    FGadgetLotteryRateMagnificationCorrectionData();
};

