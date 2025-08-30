#pragma once
#include "CoreMinimal.h"
#include "UserGadgetPresetData.h"
#include "EGadgetPlateId.h"
#include "GadgetPlateUIData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FGadgetPlateUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetPlateId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserGadgetPresetData PresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bIsSlotNew;
    
    FGadgetPlateUIData();
};

