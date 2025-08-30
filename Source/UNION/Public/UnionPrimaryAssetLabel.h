#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/PrimaryAssetLabel.h"
#include "UnionPrimaryAssetLabelPathInfo.h"
#include "UnionPrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class UNION_API UUnionPrimaryAssetLabel : public UPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionPrimaryAssetLabelPathInfo> LabelAssetsInDirectoryPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> IgnoreLabelAssetsInDirectoryPathList;
    
    UUnionPrimaryAssetLabel();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
};

