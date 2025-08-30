#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MenuGroupRaceBonusData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMenuGroupRaceBonusData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RaceResultBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> RuleIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventInfoVictoryPointBonusRuleExplainFesta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DispNameInRace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TwoGroupRaceResultBonus;
    
    UNIONSYSTEM_API FMenuGroupRaceBonusData();
};

