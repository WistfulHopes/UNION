#pragma once
#include "CoreMinimal.h"
#include "EItemId.h"
#include "ItemSwitchSettingSingle.generated.h"

USTRUCT(BlueprintType)
struct FItemSwitchSettingSingle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, bool> ItemSwitchInfo;
    
    UNIONSYSTEM_API FItemSwitchSettingSingle();
};

