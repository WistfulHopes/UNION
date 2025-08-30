#pragma once
#include "CoreMinimal.h"
#include "GadgetCustomizeWindowData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FGadgetCustomizeWindowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNum;
    
    FGadgetCustomizeWindowData();
};

