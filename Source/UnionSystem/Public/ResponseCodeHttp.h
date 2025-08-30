#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ResponseCodeHttp.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UResponseCodeHttp : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UResponseCodeHttp();

    UFUNCTION(BlueprintCallable)
    static bool IsOkProper(int32 ResponseCode);
    
};

