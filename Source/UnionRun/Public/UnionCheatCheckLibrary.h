#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Common_UserCheatParamData.h"
#include "UnionCheatCheckLibrary.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionCheatCheckLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionCheatCheckLibrary();

    UFUNCTION(BlueprintCallable)
    static FCommon_UserCheatParamData GetUserCheatParamData(int32 OnlineRacerIndex);
    
};

