#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOptionRaceCell.h"
#include "EOptionValidPlatform.h"
#include "EOptionCellType.h"
#include "OptionCellRaceTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FOptionCellRaceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionRaceCell OptionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionValidPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionCellType CellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellGuide;
    
    FOptionCellRaceTableRow();
};

