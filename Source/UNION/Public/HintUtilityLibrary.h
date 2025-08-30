#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHintId.h"
#include "HintDataTableRow.h"
#include "HintUtilityLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNION_API UHintUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHintUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetHintRead(UDataTable* HintDataTable, EHintId InHintId);
    
    UFUNCTION(BlueprintCallable)
    static void GetTipsHintDataArrayOnlyNormal(UDataTable* HintDataTable, TArray<FHintDataTableRow>& OutTipsHintDataArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetTipsHintDataArray(UDataTable* HintDataTable, TArray<FHintDataTableRow>& OutTipsHintDataArray);
    
};

