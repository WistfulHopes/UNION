#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MinimapIconInfoDataTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNIONRUN_API FMinimapIconInfoDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    FMinimapIconInfoDataTableRow();
};

