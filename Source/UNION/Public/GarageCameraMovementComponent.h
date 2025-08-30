#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EGarageCameraMovementArmDataId.h"
#include "EGarageCameraMovementMode.h"
#include "EGarageCameraMovementTransformDataId.h"
#include "GarageCameraMovementArmData.h"
#include "GarageCameraMovementTransformData.h"
#include "GarageCameraMovementComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGarageCameraMovementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnMovementFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TransformDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ArmDataTable;
    
public:
    UGarageCameraMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchRadius(bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAngleRange(double InMin, double InMax);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformDataTable(UDataTable* InTransformDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformByTransformDataId(EGarageCameraMovementTransformDataId InId, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformByTransformData(const FGarageCameraMovementTransformData& InTransformData, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformByArmDataId(EGarageCameraMovementArmDataId InId, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformByArmData(const FGarageCameraMovementArmData& InArmData, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void SetRadiusByIndex(int32 InRadiusIndex, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void SetRadii(const TArray<double>& InRadii);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementTime(float InMovementTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(EGarageCameraMovementMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetArmDataTable(UDataTable* InArmDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRadiusIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToVerticalAngle(double InVal);
    
    UFUNCTION(BlueprintCallable)
    void AddToHorizontalAngle(double InVal);
    
};

