#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FestaTextSettingTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FFestaTextSettingTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoticeTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FestaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DatesFormat;
    
    FFestaTextSettingTable();
};

