#pragma once
#include "CoreMinimal.h"
#include "ESoundPan.h"
#include "CollisionMessageInterface.h"
#include "HitTriggerInfo.h"
#include "ItemObjectBase.h"
#include "RelativeMoveBackParameter.h"
#include "RelativeMoveFrontParameter.h"
#include "ThrowingBackParameter.h"
#include "ThrowingFrontParameter.h"
#include "ItemThornBallObject.generated.h"

class UGOCMovement;
class UItemStaticBodyComponent;
class UStaticMeshComponent;
class UTriggerComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AItemThornBallObject : public AItemObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_staticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGOCMovement* m_movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerComponent* m_triggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemStaticBodyComponent* m_staticBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_holderInvencibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_largeTypeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fallingDetectingOffsetFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fallingDetectingOffsetFront_ToFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowingFrontParameter m_maxFrontJumpParam_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowingFrontParameter m_minFrontJumpParam_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRelativeMoveFrontParameter m_relativeMoveParamFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowingBackParameter m_backJumpParam_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRelativeMoveBackParameter m_relativeMoveParamBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_sinkLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_restitutionCoffi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_floatingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_floatingAngularSpeed;
    
    AItemThornBallObject(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerColliderConflict(const FHitTriggerInfo& HitInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayLandingSound(bool waterFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDamegeSound(ESoundPan SoundPan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayBreakSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayBreakEffect(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactiveBreakEffect();
    
    UFUNCTION(BlueprintCallable)
    float GetHitSpeedRatio();
    

    // Fix for true pure virtual functions not being implemented
};

