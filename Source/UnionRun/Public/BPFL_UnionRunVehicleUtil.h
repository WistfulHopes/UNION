#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMachineId.h"
#include "ECarStatusType.h"
#include "BPFL_UnionRunVehicleUtil.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UBPFL_UnionRunVehicleUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_UnionRunVehicleUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHoverboard(ECarStatusType InCarStatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMachineId GetFirstBasicCustomMachineId(ECarStatusType InCarStatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMachineId GetDefaultMachineId(ECarStatusType InCarStatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECarStatusType GetCarStatusType(EMachineId InMachineID);
    
};

