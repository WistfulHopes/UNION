#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemCountDownComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UItemCountDownComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ItemCountDownAnimCurve;
    
    UItemCountDownComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResetTargetParameter(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCountDown(UActorComponent* Component, bool bReset);
    
};

