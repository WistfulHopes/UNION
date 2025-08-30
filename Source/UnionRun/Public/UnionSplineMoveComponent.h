#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESplineMoveLoopType.h"
#include "SplineMoveSettingParam.h"
#include "UnionSplineMoveComponent.generated.h"

class UUnionSplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UUnionSplineMoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMoveSettingParam SettingParam;
    
    UUnionSplineMoveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpline(UUnionSplineComponent* NewSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLoopType(ESplineMoveLoopType LoopType);
    
    UFUNCTION(BlueprintCallable)
    void MoveUpdate(float DeltaTime, bool IsTransform);
    
    UFUNCTION(BlueprintCallable)
    void MoveReset(bool NewForceMove);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidSpline();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartWait(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsOverSplineMoveRate(float checkRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrived();
    
    UFUNCTION(BlueprintCallable)
    void ForceReverse(bool RotReverse);
    
    UFUNCTION(BlueprintCallable)
    void ForceMove();
    
    UFUNCTION(BlueprintCallable)
    void AddMoveDistance(float AddDistance);
    
};

