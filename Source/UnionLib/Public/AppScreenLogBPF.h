#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAppBlueprintLogVerbosity.h"
#include "AppScreenLogBPF.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNIONLIB_API UAppScreenLogBPF : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppScreenLogBPF();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AppLogTextStrong(UObject* WorldContextObject, const FText& Message, EAppBlueprintLogVerbosity Verbosity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AppLogText(UObject* WorldContextObject, const FText& Message, EAppBlueprintLogVerbosity Verbosity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AppLogStringStrong(UObject* WorldContextObject, const FString& Message, EAppBlueprintLogVerbosity Verbosity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AppLogString(UObject* WorldContextObject, const FString& Message, EAppBlueprintLogVerbosity Verbosity);
    
};

