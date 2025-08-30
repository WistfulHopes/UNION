#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPointDistanceGroup.h"
#include "PlayerPointDistanceData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FPlayerPointDistanceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPointDistanceGroup PointDistanceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrandPrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Other;
    
    FPlayerPointDistanceData();
};

