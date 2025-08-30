#pragma once
#include "CoreMinimal.h"
#include "UnionUIGridSideNavigationData.h"
#include "UnionUIGridSideNavigation.generated.h"

USTRUCT(BlueprintType)
struct FUnionUIGridSideNavigation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridSideNavigationData Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridSideNavigationData Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridSideNavigationData Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridSideNavigationData Right;
    
    UNIONUI_API FUnionUIGridSideNavigation();
};

