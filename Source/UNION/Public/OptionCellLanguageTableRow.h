#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOptionLanguageCell.h"
#include "EOptionValidPlatform.h"
#include "EOptionCellType.h"
#include "OptionCellLanguageTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FOptionCellLanguageTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionLanguageCell OptionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionValidPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionCellType CellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellGuide;
    
    FOptionCellLanguageTableRow();
};

