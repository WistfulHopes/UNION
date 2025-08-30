#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UserGadgetPresetData.h"
#include "DefaultGadgetPresetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FDefaultGadgetPresetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserGadgetPresetData PresetData;
    
    FDefaultGadgetPresetData();
};

