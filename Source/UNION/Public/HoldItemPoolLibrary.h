#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHoldItemMeshType.h"
#include "EItemId.h"
#include "EHoldItemPoolQuality.h"
#include "HoldItemPoolLibrary.generated.h"

class AHoldItem;

UCLASS(Blueprintable)
class UHoldItemPoolLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHoldItemPoolLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResetHoldItem(AHoldItem* Item);
    
    UFUNCTION(BlueprintCallable)
    static void PopulatePool(const EHoldItemPoolQuality Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompleted();
    
    UFUNCTION(BlueprintCallable)
    static EHoldItemMeshType GetHoldItemMeshType(const int32 RacerIndex, const EItemId ItemId);
    
    UFUNCTION(BlueprintCallable)
    static AHoldItem* GetHoldItem(const int32 RacerIndex, const EItemId ItemId);
    
};

