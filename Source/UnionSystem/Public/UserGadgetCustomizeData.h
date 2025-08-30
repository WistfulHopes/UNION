#pragma once
#include "CoreMinimal.h"
#include "UserGadgetCustomizeData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserGadgetCustomizeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelectedGadgetId;
    
    FUserGadgetCustomizeData();
};

