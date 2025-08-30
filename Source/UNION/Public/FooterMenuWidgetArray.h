#pragma once
#include "CoreMinimal.h"
#include "FooterMenuWidgetArray.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FFooterMenuWidgetArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> Widgets;
    
    UNION_API FFooterMenuWidgetArray();
};

