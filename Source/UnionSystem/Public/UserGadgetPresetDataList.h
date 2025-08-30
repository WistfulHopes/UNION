#pragma once
#include "CoreMinimal.h"
#include "UserGadgetPresetData.h"
#include "UserGadgetPresetDataList.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserGadgetPresetDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGadgetPresetData> list;
    
    FUserGadgetPresetDataList();
};

