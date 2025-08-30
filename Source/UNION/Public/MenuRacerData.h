#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UserMachineCustomizeData.h"
#include "GadgetPlateUIData.h"
#include "MenuRacerData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMenuRacerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserMachineCustomizeData UserMachineCustomizeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetPlateUIData UserGadgetData;
    
    FMenuRacerData();
};

