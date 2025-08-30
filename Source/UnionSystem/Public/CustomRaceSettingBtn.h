#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECustomRaceSettingLine.h"
#include "CustomRaceSettingBtn.generated.h"

USTRUCT(BlueprintType)
struct FCustomRaceSettingBtn : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceSettingLine SettingLineNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SettingLineName;
    
    UNIONSYSTEM_API FCustomRaceSettingBtn();
};

