#pragma once
#include "CoreMinimal.h"
#include "UserGadgetPresetData.h"
#include "FestaRuleInfomationBase.h"
#include "FestaRuleInfomation.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNION_API FFestaRuleInfomation : public FFestaRuleInfomationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DetailTeamGage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DetailVictoryPointBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserGadgetPresetData FixedGadgetPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RuleIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RuleBGTexture;
    
    FFestaRuleInfomation();
};

