#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetManagerTypes.h"
#include "Engine/DataAsset.h"
#include "UnionPrimaryAssetLabelPathInfo.h"
#include "UnionCookPrimaryDataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNION_API UUnionCookPrimaryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionPrimaryAssetLabelPathInfo> LabelAssetsInDirectoryPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> IgnoreLabelAssetsInDirectoryPathList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetRules Rules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLabelAssetsInMyDirectory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeRedirectors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> ExplicitAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> ExplicitBlueprints;
    
    UUnionCookPrimaryDataAsset();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
};

