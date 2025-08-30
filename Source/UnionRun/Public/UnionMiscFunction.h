#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionMiscFunction.generated.h"

class UObject;
class UUnionBtCollisionBinaryAsset;
class UUnionComPathBinaryDataAsset;
class UUnionNavigationBinaryDataAsset;
class UUnionRunPathBinaryDataAsset;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionMiscFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionMiscFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUnionRunPathBinaryDataAsset* LoadRunPathAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUnionNavigationBinaryDataAsset* LoadCourseNavigationAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUnionBtCollisionBinaryAsset* LoadCourseCollisionAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUnionComPathBinaryDataAsset* LoadComPathAssetByFilePath(const UObject* WorldContextObject, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetStageAssetFilenameTrunk(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetStageAssetDir(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetCourseEditorStageAssetDir(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ContainsLevel(const UObject* WorldContextObject, const FString& LevelName);
    
};

