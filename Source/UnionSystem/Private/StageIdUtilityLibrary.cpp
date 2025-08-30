#include "StageIdUtilityLibrary.h"

UStageIdUtilityLibrary::UStageIdUtilityLibrary() {
}

EStageId UStageIdUtilityLibrary::StringToStageId(const FString& String) {
    return EStageId::MainBegin;
}

bool UStageIdUtilityLibrary::IsStageIdValid(EStageId InId) {
    return false;
}

bool UStageIdUtilityLibrary::IsMainStage(EStageId InId) {
    return false;
}

bool UStageIdUtilityLibrary::IsExtndMainStage(EStageId InId) {
    return false;
}

bool UStageIdUtilityLibrary::IsDebugStage(EStageId InId) {
    return false;
}

bool UStageIdUtilityLibrary::IsDebugMainStage(EStageId InId) {
    return false;
}

bool UStageIdUtilityLibrary::IsDebugAnotherStage(EStageId InId) {
    return false;
}

bool UStageIdUtilityLibrary::IsCommonStage(EStageId InId) {
    return false;
}

bool UStageIdUtilityLibrary::IsAnotherStage(EStageId InId) {
    return false;
}

FString UStageIdUtilityLibrary::GetStageString(EStageId InId) {
    return TEXT("");
}

int32 UStageIdUtilityLibrary::GetStageNumber(EStageId InId) {
    return 0;
}

FString UStageIdUtilityLibrary::GetStageName(EStageId InId) {
    return TEXT("");
}

EStageId UStageIdUtilityLibrary::GetStageIdByActor(const AActor* Actor) {
    return EStageId::MainBegin;
}

EStageId UStageIdUtilityLibrary::GetStageId(int32 InNumber) {
    return EStageId::MainBegin;
}

int32 UStageIdUtilityLibrary::GetStageEndNumber(EStageId InId) {
    return 0;
}

FString UStageIdUtilityLibrary::GetLevelName_Sound(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_ObjectGameIrregular(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_ObjectGameFinalLap(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_ObjectGame(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_ItemBoxIrregular(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_ItemBoxFinalLap(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_ItemBox(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_FX(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_Editor(EStageId InId) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::GetLevelName_BG(EStageId InId) {
    return TEXT("");
}

EStageId UStageIdUtilityLibrary::GetEditorLevelStageId() {
    return EStageId::MainBegin;
}

FString UStageIdUtilityLibrary::BuildStageString(EStageId InId, const FString& InPrefix) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::BuildStageName(EStageId InId, const FString& InPrefix) {
    return TEXT("");
}

FString UStageIdUtilityLibrary::BuildStageDirectory(EStageId InId) {
    return TEXT("");
}


