#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EViewSplitId.h"
#include "AppViewUtil.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppViewUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppViewUtil();

    UFUNCTION(BlueprintCallable)
    static EViewSplitId CalcViewSplitId(int32 InPlayerControllerIndex, int32 InSelectedPlayerCount);
    
};

