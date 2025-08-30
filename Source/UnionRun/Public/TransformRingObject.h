#pragma once
#include "CoreMinimal.h"
#include "ETransformRingType.h"
#include "UnionCourseObjectBase.h"
#include "TransformRingObject.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ATransformRingObject : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformRingType TransformRingType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    ATransformRingObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateParallelMode(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformRingType(ETransformRingType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetRingScaleRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRingScaleRate();
    
};

