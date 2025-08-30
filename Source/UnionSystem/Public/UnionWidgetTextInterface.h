#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UnionWidgetTextInterface.generated.h"

class UWidget;

UINTERFACE(Blueprintable)
class UNIONSYSTEM_API UUnionWidgetTextInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONSYSTEM_API IUnionWidgetTextInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetTextWidget() const;
    
};

