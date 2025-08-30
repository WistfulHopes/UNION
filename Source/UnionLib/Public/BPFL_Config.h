#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_Config.generated.h"

UCLASS(Blueprintable)
class UNIONLIB_API UBPFL_Config : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Config();

    UFUNCTION(BlueprintCallable)
    static void SetStringToConfig(const FString& Filename, const FString& Section, const FString& Key, const FString& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntToConfig(const FString& Filename, const FString& Section, const FString& Key, const int32& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatToConfig(const FString& Filename, const FString& Section, const FString& Key, const float& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolToConfig(const FString& Filename, const FString& Section, const FString& Key, const bool& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTextFromConfigGameIni(const FString& Section, const FString& Key, FText& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTextFromConfig(const FString& Filename, const FString& Section, const FString& Key, FText& ConfigValue, bool CacheClear);
    
    UFUNCTION(BlueprintCallable)
    static bool GetStringFromConfigGameIni(const FString& Section, const FString& Key, FString& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetStringFromConfig(const FString& Filename, const FString& Section, const FString& Key, FString& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStringArrayFromConfigGameIni(const FString& Section, const FString& Key, TArray<FString>& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStringArrayFromConfig(const FString& Filename, const FString& Section, const FString& Key, TArray<FString>& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIntFromConfigGameIni(const FString& Section, const FString& Key, int32& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIntFromConfig(const FString& Filename, const FString& Section, const FString& Key, int32& ConfigValue, bool CacheClear);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFloatFromConfigGameIni(const FString& Section, const FString& Key, float& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFloatFromConfig(const FString& Filename, const FString& Section, const FString& Key, float& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolFromConfigGameIni(const FString& Section, const FString& Key, bool& ConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolFromConfig(const FString& Filename, const FString& Section, const FString& Key, bool& ConfigValue, bool CacheClear);
    
};

