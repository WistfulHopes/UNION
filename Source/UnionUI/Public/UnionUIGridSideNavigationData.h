#pragma once
#include "CoreMinimal.h"
#include "EUnionUIGridSideNavigationRule.h"
#include "UnionUIGridSideNavigationCustomDelegateDelegate.h"
#include "UnionUIGridSideNavigationData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FUnionUIGridSideNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIGridSideNavigationRule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridSideNavigationCustomDelegate CustomDelegate;
    
    UNIONUI_API FUnionUIGridSideNavigationData();
};

