#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECommonRaceMenuContentId.h"
#include "ECommonRaceMenuIconId.h"
#include "CommonRaceMenuContentRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FCommonRaceMenuContentRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonRaceMenuContentId contentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonRaceMenuIconId IconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesNeedToPopupWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PopupWarningMessage;
    
    FCommonRaceMenuContentRow();
};

