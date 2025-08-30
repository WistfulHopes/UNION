#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnlineSettingPlayerIconDataTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNION_API FOnlineSettingPlayerIconDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ImageTexture;
    
    FOnlineSettingPlayerIconDataTableRow();
};

