#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionWidgetTransform.h"
#include "UnionWidgetUtility.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionWidgetUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionWidgetUtility();

    UFUNCTION(BlueprintCallable)
    static void TransformVertex(TArray<FVector2D>& Vertex2Ds, const FUnionWidgetTransform& WidgetTransform, const FVector2D& ParentSize);
    
};

