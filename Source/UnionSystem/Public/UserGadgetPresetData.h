#pragma once
#include "CoreMinimal.h"
#include "UserGadgetData.h"
#include "UserGadgetPresetData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserGadgetPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGadgetData> GadgetDataList;
    
    FUserGadgetPresetData();
};

