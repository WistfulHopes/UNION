#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOptionCategory.h"
#include "EOptionGraphicCell.h"
#include "EOptionValidPlatform.h"
#include "EOptionCellType.h"
#include "OptionCellGraphicTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FOptionCellGraphicTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionGraphicCell OptionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionValidPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionCellType CellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionCategory SubCategory;
    
    FOptionCellGraphicTableRow();
};

