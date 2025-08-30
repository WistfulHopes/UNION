#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Types/SlateEnums.h"
#include "Blueprint/WidgetNavigation.h"
#include "UnionUIGridNavigationBuilderButtonData.h"
#include "UnionUIGridSideNavigation.h"
#include "UnionUIGridNavigationBuilderEventHandler.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUIGridNavigationBuilderEventHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridNavigationBuilderButtonData ButtonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetNavigationDelegate NavigationDirectionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridSideNavigation SideNavigation;
    
    UUnionUIGridNavigationBuilderEventHandler();

    UFUNCTION(BlueprintCallable)
    UWidget* NavigationDirectionEvent(EUINavigation Navigation);
    
};

