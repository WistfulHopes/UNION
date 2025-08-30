#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGadgetId.h"
#include "GadgetRaceCountData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNION_API FGadgetRaceCountData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 raceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> IDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    FGadgetRaceCountData();
};

