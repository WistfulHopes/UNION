#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "GadgetCustomWindowCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FGadgetCustomWindowCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> Gadgets;
    
    UNION_API FGadgetCustomWindowCategoryData();
};

