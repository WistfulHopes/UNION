#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UnionWidgetTransform.h"
#include "UnionWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONSYSTEM_API UUnionWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONSYSTEM_API IUnionWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetTransform(const FUnionWidgetTransform& WidgetTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUnionWidgetTransform GetWidgetTransformCopy() const;
    
};

