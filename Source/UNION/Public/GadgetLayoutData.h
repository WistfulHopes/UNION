#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGadgetId.h"
#include "GadgetLayoutData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FGadgetLayoutData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    FGadgetLayoutData();
};

