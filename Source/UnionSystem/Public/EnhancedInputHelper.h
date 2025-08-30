#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnhancedActionKeyMapping.h"
#include "InputCoreTypes.h"
#include "EnhancedInputHelper.generated.h"

class UInputMappingContext;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UEnhancedInputHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnhancedInputHelper();

    UFUNCTION(BlueprintCallable)
    static TArray<FEnhancedActionKeyMapping> GetEnhancedActionKeyMappingByName(UInputMappingContext* InputMappingContext, const FName& InputName);
    
    UFUNCTION(BlueprintCallable)
    static void ExchangeInputKey(UInputMappingContext* InputMappingContext, const FEnhancedActionKeyMapping& BeforeMapping, const FKey& AfterKey);
    
};

