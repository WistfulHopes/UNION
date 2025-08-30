#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MenuGroupRaceEnergyData.generated.h"

USTRUCT(BlueprintType)
struct FMenuGroupRaceEnergyData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventInfoTeamGageRuleExplainFesta;
    
    UNIONSYSTEM_API FMenuGroupRaceEnergyData();
};

