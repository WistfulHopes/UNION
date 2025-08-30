#pragma once
#include "CoreMinimal.h"
#include "EUnionUIGridLayoutSideNavRule.h"
#include "UnionUIGridLayoutSideNavCustomDelegateDelegate.h"
#include "UnionUIGridLayoutSideNavData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FUnionUIGridLayoutSideNavData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIGridLayoutSideNavRule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridLayoutSideNavCustomDelegate CustomDelegate;
    
    UNIONUI_API FUnionUIGridLayoutSideNavData();
};

