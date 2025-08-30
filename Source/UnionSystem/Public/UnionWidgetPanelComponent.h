#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UnionWidgetInterface.h"
#include "UnionWidgetTransform.h"
#include "UnionWidgetPanelComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionWidgetPanelComponent : public USceneComponent, public IUnionWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionWidgetTransform _WidgetTransform;
    
public:
    UUnionWidgetPanelComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

