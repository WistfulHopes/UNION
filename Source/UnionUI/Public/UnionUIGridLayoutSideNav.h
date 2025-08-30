#pragma once
#include "CoreMinimal.h"
#include "UnionUIGridLayoutSideNavData.h"
#include "UnionUIGridLayoutSideNav.generated.h"

USTRUCT(BlueprintType)
struct FUnionUIGridLayoutSideNav {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridLayoutSideNavData Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridLayoutSideNavData Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridLayoutSideNavData Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridLayoutSideNavData Left;
    
    UNIONUI_API FUnionUIGridLayoutSideNav();
};

