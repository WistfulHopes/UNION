#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEnergyAddBehaviorType.h"
#include "EGroupBonusType.h"
#include "EGroupRaceItemLotteryCorrectionType.h"
#include "EGroupRaceRule.h"
#include "EIrregularEventId.h"
#include "ERaceSettingItemAppearanceRule.h"
#include "UserGadgetPresetData.h"
#include "GroupRaceRuleData.generated.h"

USTRUCT(BlueprintType)
struct FGroupRaceRuleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceRule GroupRaceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideItemAppearanceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingItemAppearanceRule ItemAppearanceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideIrregular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIrregularEventId FixedIrregularId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceItemLotteryCorrectionType ItemLotteryCorrectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserGadgetPresetData FixedGadgetPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RentalGadgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnergyAddBehaviorType EnergyAddBehaviorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupBonusType GroupBonusType;
    
    UNIONSYSTEM_API FGroupRaceRuleData();
};

