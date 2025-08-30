#pragma once
#include "CoreMinimal.h"
#include "GadgetBoostRingBonusInfo.h"
#include "GadgetBonusDashPanelComboInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetBonusDashPanelComboInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetBoostRingBonusInfo AddRingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAddRingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComboValidTime;
    
    FGadgetBonusDashPanelComboInfo();
};

