#pragma once
#include "CoreMinimal.h"
#include "GadgetItemNumInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetItemNumInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNum;
    
    FGadgetItemNumInfo();
};

