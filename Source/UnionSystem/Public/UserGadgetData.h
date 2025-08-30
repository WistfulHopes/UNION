#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "UserGadgetData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserGadgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    FUserGadgetData();
};

