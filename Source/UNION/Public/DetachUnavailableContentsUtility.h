#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMachineId.h"
#include "DetachUnavailableContentsUtility.generated.h"

UCLASS(Blueprintable)
class UNION_API UDetachUnavailableContentsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDetachUnavailableContentsUtility();

    UFUNCTION(BlueprintCallable)
    static EMachineId GetDefaultMachineId(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static void DetachUnavailableContents();
    
};

