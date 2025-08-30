#pragma once
#include "CoreMinimal.h"
#include "UserPackageRules.generated.h"

class UHoudiniToolsPackageAsset;

USTRUCT(BlueprintType)
struct FUserPackageRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniToolsPackageAsset* ToolsPackageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Include;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Exclude;
    
    HOUDINIENGINERUNTIME_API FUserPackageRules();
};

