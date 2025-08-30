#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVehicleDisplayMode.h"
#include "EVehicleType.h"
#include "BPFL_UnionRunTuningUtil.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UBPFL_UnionRunTuningUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_UnionRunTuningUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetYellowDrillMeshSizeRate();
    
    UFUNCTION(BlueprintCallable)
    static void GetStartingLightPosition(const int32& SelectedPlayerNum, float& Front, float& Height, float& Right);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMeshSizeRate(EVehicleDisplayMode DisplayMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsDroneDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHoverBaseHeight(EVehicleType VehicleType);
    
};

