#include "LocalizationFunctionLibrary.h"

ULocalizationFunctionLibrary::ULocalizationFunctionLibrary() {
}

void ULocalizationFunctionLibrary::SetVoiceLangByString(const FString& Lang) {
}

void ULocalizationFunctionLibrary::SetVoiceLang(ELanguage Lang) {
}

void ULocalizationFunctionLibrary::SetTextLangByString(const FString& Lang) {
}

void ULocalizationFunctionLibrary::SetTextLang(ELanguage Lang) {
}

ELanguage ULocalizationFunctionLibrary::GetVoiceLangFromTableByEnum(ELanguage Lang) {
    return ELanguage::Ja;
}

ELanguage ULocalizationFunctionLibrary::GetVoiceLangFromTable() {
    return ELanguage::Ja;
}

ELanguage ULocalizationFunctionLibrary::GetVoiceLang() {
    return ELanguage::Ja;
}

ELanguage ULocalizationFunctionLibrary::GetTextLang() {
    return ELanguage::Ja;
}

ELanguage ULocalizationFunctionLibrary::GetPCPlatformVoiceLangFromTable() {
    return ELanguage::Ja;
}

ELanguage ULocalizationFunctionLibrary::GetPCPlatformLanguage() {
    return ELanguage::Ja;
}

FText ULocalizationFunctionLibrary::GetKeytopButtonTextByFKey(const FKey& InKey, uint8 KeytopPattern) {
    return FText::GetEmpty();
}

float ULocalizationFunctionLibrary::GetFontSizeRate() {
    return 0.0f;
}

ELanguage ULocalizationFunctionLibrary::GetDefaultTextLang() {
    return ELanguage::Ja;
}

FString ULocalizationFunctionLibrary::ConvLangToStringFromEnum(ELanguage LangEnum) {
    return TEXT("");
}

ELanguage ULocalizationFunctionLibrary::ConvLangToEnumFromString(const FString& LangString) {
    return ELanguage::Ja;
}


