#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGadgetId.h"
#include "ComUseGadget.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComUseGadget : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetEquipGr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> ComUseGadget;
    
    FComUseGadget();
};

