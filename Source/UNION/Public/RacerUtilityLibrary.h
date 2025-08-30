#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGadgetId.h"
#include "EMachineId.h"
#include "RacerParamData.h"
#include "RacerUtilityLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class URacerUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URacerUtilityLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetParamData(const UDataTable* InDriverParamDataTable, const UDataTable* InFrontPartsParamDataTable, const UDataTable* InRearPartsParamDataTable, const UDataTable* InTirePartsParamDataTable, EDriverId InDriverId, EMachineId InFrontPartsId, EMachineId InRearPartsId, EMachineId InTirePartsId, const TArray<EGadgetId> InGadgetIds, FRacerParamData& OutParamData);
    
};

