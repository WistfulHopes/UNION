#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "GadgetSelectWindowPlayerData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FGadgetSelectWindowPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> AttachedGadgetIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> AttachableGadgetIds;
    
    FGadgetSelectWindowPlayerData();
};

