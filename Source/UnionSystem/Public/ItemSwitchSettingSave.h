#pragma once
#include "CoreMinimal.h"
#include "ItemSwitchSettingSingle.h"
#include "ItemSwitchSettingSave.generated.h"

USTRUCT(BlueprintType)
struct FItemSwitchSettingSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemSwitchSettingSingle> ItemSwitchSettingArr;
    
    UNIONSYSTEM_API FItemSwitchSettingSave();
};

