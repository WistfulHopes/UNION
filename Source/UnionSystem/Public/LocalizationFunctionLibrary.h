#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "ELanguage.h"
#include "LocalizationFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API ULocalizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalizationFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetVoiceLangByString(const FString& Lang);
    
    UFUNCTION(BlueprintCallable)
    static void SetVoiceLang(ELanguage Lang);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextLangByString(const FString& Lang);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextLang(ELanguage Lang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetVoiceLangFromTableByEnum(ELanguage Lang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetVoiceLangFromTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetVoiceLang();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetTextLang();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetPCPlatformVoiceLangFromTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetPCPlatformLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetKeytopButtonTextByFKey(const FKey& InKey, uint8 KeytopPattern);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFontSizeRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetDefaultTextLang();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvLangToStringFromEnum(ELanguage LangEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage ConvLangToEnumFromString(const FString& LangString);
    
};

