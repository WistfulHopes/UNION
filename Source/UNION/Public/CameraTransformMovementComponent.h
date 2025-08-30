#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "CameraTransformMovementData.h"
#include "CameraTransformMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UCameraTransformMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraTransformMovementData> MovementDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTransformMovementData MovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZoomOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoomOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> AutoMovementEasingFunc;
    
    UCameraTransformMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAutoMovement();
    
    UFUNCTION(BlueprintCallable)
    void StartAutoMovementByIndex(int32 InMovementDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementDataByIndex(int32 InMovementDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementData(const FCameraTransformMovementData& InMovementData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCameraTransformMovementData GetMovementData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAutoMoving() const;
    
};

