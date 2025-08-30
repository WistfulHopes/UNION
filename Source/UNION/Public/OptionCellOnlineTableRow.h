#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOptionOnlineCell.h"
#include "EOptionValidPlatform.h"
#include "EOptionCellType.h"
#include "OptionCellOnlineTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FOptionCellOnlineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionOnlineCell OptionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionValidPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionCellType CellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellGuide;
    
    FOptionCellOnlineTableRow();
};

