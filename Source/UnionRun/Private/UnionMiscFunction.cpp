#include "UnionMiscFunction.h"

UUnionMiscFunction::UUnionMiscFunction() {
}

UUnionRunPathBinaryDataAsset* UUnionMiscFunction::LoadRunPathAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath) {
    return NULL;
}

UUnionNavigationBinaryDataAsset* UUnionMiscFunction::LoadCourseNavigationAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath) {
    return NULL;
}

UUnionBtCollisionBinaryAsset* UUnionMiscFunction::LoadCourseCollisionAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath) {
    return NULL;
}

UUnionComPathBinaryDataAsset* UUnionMiscFunction::LoadComPathAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath) {
    return NULL;
}

FString UUnionMiscFunction::GetStageAssetFilenameTrunk(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UUnionMiscFunction::GetStageAssetDir(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UUnionMiscFunction::GetCourseEditorStageAssetDir(const UObject* WorldContextObject) {
    return TEXT("");
}

bool UUnionMiscFunction::ContainsLevel(const UObject* WorldContextObject, const FString& LevelName) {
    return false;
}


