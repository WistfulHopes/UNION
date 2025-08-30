#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKeyConfigRace.h"
#include "EOptionValidPlatform.h"
#include "OptionKeyConfigCellTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FOptionKeyConfigCellTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyConfigRace ConfigKeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionValidPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CellGuide;
    
    FOptionKeyConfigCellTableRow();
};

