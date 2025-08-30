#pragma once
#include "CoreMinimal.h"
#include "ETravelRingSizeType.h"
#include "ETravelRingType.h"
#include "ETransformRingType.h"
#include "UnionCourseObjectBase.h"
#include "SimpleTravelRingObject.generated.h"

class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ASimpleTravelRingObject : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingType TravelRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingSizeType RingSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformRingType TransformRingType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* RingMeshBySize[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    ASimpleTravelRingObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTravelRingType(const ETravelRingType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTravelRingSizeType(const ETravelRingSizeType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformRingType(const ETransformRingType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETravelRingType GetTravelRingType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETravelRingSizeType GetTravelRingSizeType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETransformRingType GetTransformRingType();
    
};

