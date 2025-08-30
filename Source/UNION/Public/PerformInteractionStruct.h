#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDriverId.h"
#include "EPerformRivalInteractionType.h"
#include "PerformInteractionStruct.generated.h"

USTRUCT(BlueprintType)
struct FPerformInteractionStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId MotionDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, EPerformRivalInteractionType> ActionMap;
    
    UNION_API FPerformInteractionStruct();
};

