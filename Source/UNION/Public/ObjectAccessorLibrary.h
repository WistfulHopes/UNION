#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ObjectAccessorLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UObjectAccessorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UObjectAccessorLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnregisterObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterObject(UObject* Object, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static UObject* FindObject(const UClass* Class, FName Tag);
    
};

