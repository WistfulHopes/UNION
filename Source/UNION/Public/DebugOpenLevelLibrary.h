#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugOpenLevelLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNION_API UDebugOpenLevelLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugOpenLevelLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenPacketReplayLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenBootDebugLevel(const UObject* WorldContextObject);
    
};

