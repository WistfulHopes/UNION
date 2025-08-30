#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMachineId.h"
#include "MachineIdUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UMachineIdUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMachineIdUtilityLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSimpleCustomMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHoverboardMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExtendMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCustomMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBasicMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBasicCustomMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerIndexFromSimpleCustomMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static EMachineId GetConvertMachineIdToMachineCustomId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildMachineSidePartsPath(EMachineId FrontPartsId, EMachineId RearPartsId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BuildHoverboardCenterPartsPath(EMachineId FrontPartsId, EMachineId RearPartsId);
    
};

