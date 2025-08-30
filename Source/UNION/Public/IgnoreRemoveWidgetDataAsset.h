#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IgnoreRemoveWidgetDataAsset.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UNION_API UIgnoreRemoveWidgetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> IgnoreWidgetArray;
    
    UIgnoreRemoveWidgetDataAsset();

};

