#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugImportantLogUtil.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UDebugImportantLogUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugImportantLogUtil();

    UFUNCTION(BlueprintCallable)
    static void SetImportantLogVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetImportantLogCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    static void AddImportantLog(const FString& LogLocation, const FString& LogString);
    
};

