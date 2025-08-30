#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemSwitchSettingSingle.h"
#include "ItemSwitchSetting.generated.h"

USTRUCT(BlueprintType)
struct FItemSwitchSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemSwitchSettingSingle> ItemSwitchSettingArr;
    
    UNIONSYSTEM_API FItemSwitchSetting();
};

