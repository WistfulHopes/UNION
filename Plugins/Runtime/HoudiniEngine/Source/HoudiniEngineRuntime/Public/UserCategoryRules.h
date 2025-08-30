#pragma once
#include "CoreMinimal.h"
#include "UserPackageRules.h"
#include "UserCategoryRules.generated.h"

USTRUCT(BlueprintType)
struct FUserCategoryRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserPackageRules> Packages;
    
    HOUDINIENGINERUNTIME_API FUserCategoryRules();
};

