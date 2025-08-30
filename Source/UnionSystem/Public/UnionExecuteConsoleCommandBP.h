#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionExecuteConsoleCommandBP.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionExecuteConsoleCommandBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionExecuteConsoleCommandBP();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SlateEnableGlobalInvalidation(const UObject* WorldContextObject, const FString& Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestartLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableGlobalInvalidation();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugExecuteConsoleCommand(const UObject* WorldContextObject, const FString& Command);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AnimationBudgetEnabled(const UObject* WorldContextObject, const FString& Value);
    
};

