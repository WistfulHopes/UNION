#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEnergyAddBehaviorType.h"
#include "TeamBoostEnergyAddData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FTeamBoostEnergyAddData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnergyAddBehaviorType BehaviorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddEnergyValue;
    
    FTeamBoostEnergyAddData();
};

