#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "CallDroneInfo.h"
#include "UnionDroneInfoInterface.h"
#include "SoundHandle.h"
#include "DroneRelativeTrasformInfo.h"
#include "EDroneState.h"
#include "Drone.generated.h"

class USceneComponent;
class UUnionAtomComponent;
class UUnionStaticMeshComponent;
class UUnionWidgetComponent;

UCLASS(Blueprintable)
class UNION_API ADrone : public AActor, public IUnionDroneInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* BodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionWidgetComponent* MonitorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* AppearSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* RemainDistanceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* ReversSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDroneRelativeTrasformInfo> TransformInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CautionReverseInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleMoveAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallDroneInfo CurrentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CautionReversTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundHandle ReverseSoundHandle;
    
    ADrone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateTimer(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetInOutTransform(const float PosRatio, const float RotRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleTransform(const float PosYRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDroneMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDroneMaterialReverse(bool bIsReverse);
    
    UFUNCTION(BlueprintCallable)
    void PreCallDrone();
    
    UFUNCTION(BlueprintCallable)
    void PostFinishDrone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCallDrone(bool bNewAdded);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDroneMaterialIndex(const FCallDroneInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void FSMChangeState(EDroneState NextState);
    
    UFUNCTION(BlueprintCallable)
    void FinishTimeline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DismissDrone();
    

    // Fix for true pure virtual functions not being implemented
};

