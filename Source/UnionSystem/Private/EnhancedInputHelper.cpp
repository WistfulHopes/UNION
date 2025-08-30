#include "EnhancedInputHelper.h"

UEnhancedInputHelper::UEnhancedInputHelper() {
}

TArray<FEnhancedActionKeyMapping> UEnhancedInputHelper::GetEnhancedActionKeyMappingByName(UInputMappingContext* InputMappingContext, const FName& InputName) {
    return TArray<FEnhancedActionKeyMapping>();
}

void UEnhancedInputHelper::ExchangeInputKey(UInputMappingContext* InputMappingContext, const FEnhancedActionKeyMapping& BeforeMapping, const FKey& AfterKey) {
}


