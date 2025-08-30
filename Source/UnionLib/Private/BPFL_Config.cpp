#include "BPFL_Config.h"

UBPFL_Config::UBPFL_Config() {
}

void UBPFL_Config::SetStringToConfig(const FString& Filename, const FString& Section, const FString& Key, const FString& ConfigValue) {
}

void UBPFL_Config::SetIntToConfig(const FString& Filename, const FString& Section, const FString& Key, const int32& ConfigValue) {
}

void UBPFL_Config::SetFloatToConfig(const FString& Filename, const FString& Section, const FString& Key, const float& ConfigValue) {
}

void UBPFL_Config::SetBoolToConfig(const FString& Filename, const FString& Section, const FString& Key, const bool& ConfigValue) {
}

bool UBPFL_Config::GetTextFromConfigGameIni(const FString& Section, const FString& Key, FText& ConfigValue) {
    return false;
}

bool UBPFL_Config::GetTextFromConfig(const FString& Filename, const FString& Section, const FString& Key, FText& ConfigValue, bool CacheClear) {
    return false;
}

bool UBPFL_Config::GetStringFromConfigGameIni(const FString& Section, const FString& Key, FString& ConfigValue) {
    return false;
}

bool UBPFL_Config::GetStringFromConfig(const FString& Filename, const FString& Section, const FString& Key, FString& ConfigValue) {
    return false;
}

int32 UBPFL_Config::GetStringArrayFromConfigGameIni(const FString& Section, const FString& Key, TArray<FString>& ConfigValue) {
    return 0;
}

int32 UBPFL_Config::GetStringArrayFromConfig(const FString& Filename, const FString& Section, const FString& Key, TArray<FString>& ConfigValue) {
    return 0;
}

bool UBPFL_Config::GetIntFromConfigGameIni(const FString& Section, const FString& Key, int32& ConfigValue) {
    return false;
}

bool UBPFL_Config::GetIntFromConfig(const FString& Filename, const FString& Section, const FString& Key, int32& ConfigValue, bool CacheClear) {
    return false;
}

bool UBPFL_Config::GetFloatFromConfigGameIni(const FString& Section, const FString& Key, float& ConfigValue) {
    return false;
}

bool UBPFL_Config::GetFloatFromConfig(const FString& Filename, const FString& Section, const FString& Key, float& ConfigValue) {
    return false;
}

bool UBPFL_Config::GetBoolFromConfigGameIni(const FString& Section, const FString& Key, bool& ConfigValue) {
    return false;
}

bool UBPFL_Config::GetBoolFromConfig(const FString& Filename, const FString& Section, const FString& Key, bool& ConfigValue, bool CacheClear) {
    return false;
}


