#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DlcUITableRowData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDlcUITableRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoticeTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScheduleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FestaNoticeBGTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsButtonVisible;
    
    UNIONSYSTEM_API FDlcUITableRowData();
};

