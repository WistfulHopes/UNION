#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionPrimaryAssetLabelPathInfo.generated.h"

USTRUCT(BlueprintType)
struct FUnionPrimaryAssetLabelPathInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath DirectoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsApplyRecursive;
    
    UNION_API FUnionPrimaryAssetLabelPathInfo();
};

