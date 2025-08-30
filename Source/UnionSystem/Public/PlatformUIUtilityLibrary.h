#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUnionControllerType.h"
#include "EUnionPlatform.h"
#include "Templates/SubclassOf.h"
#include "PlatformUIUtilityLibrary.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UPlatformUIUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlatformUIUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void GetPlatformControllerWidgetClass(EUnionControllerType Type, EUnionPlatform Platform, TSubclassOf<UUserWidget>& OutClass);
    
};

