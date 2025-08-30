#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/TimelineComponent.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Pawn.h"
#include "AttackedInfo.h"
#include "ERaceInfoStateType.h"
#include "EUnionCameraModifierPostEffectType.h"
#include "EVehicleDisplayMode.h"
#include "EVehicleSpecialStatusType.h"
#include "EVehicleType.h"
#include "UnionAttackItemInfoInterface.h"
#include "UnionGroupInfoInterface.h"
#include "UnionItemInfoInterface.h"
#include "UnionRaceInfoInterface.h"
#include "UnionRingInfoInterface.h"
#include "UnionVehicleRaceInput.h"
#include "UnionVehicleRaceObjectInterface.h"
#include "EDriverId.h"
#include "EDriverSize.h"
#include "EItemId.h"
#include "EItemThrowDirection.h"
#include "EVehicleMeshType.h"
#include "RaceInputRecieveInterface.h"
#include "EMachineOverlayMaterialType.h"
#include "Templates/SubclassOf.h"
#include "VehicleInRacePawn.generated.h"

class ADriver;
class ADrone;
class AFootcutWarpRingPerformance;
class AHoverboardInRaceActor;
class AItemDarkChaoPerformance;
class AItemPerformanceBase;
class AItemSlimePerformance;
class AItemWarpRingPerformance;
class AItemWeightPerformance;
class AMachineInRaceActor;
class AMonsterTruckInRaceActor;
class ARaceCameraActor;
class ARecoveryRingExit;
class ASimpleNPCSkeletalActor;
class ASimpleNPCStaticActor;
class ASimpleNpcMonsterTruckActor;
class AVehicleBaseActor;
class AYellowDrillActor;
class UAppListenerFocusPoint;
class UCameraComponent;
class UCurveFloat;
class UMachineAuraEffectComponent;
class UMachineBehaviorParameterDataAsset;
class UMachineCameraObstructDataAsset;
class UMachineGadgetActionComponent;
class UMachineHornComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNiagaraComponent;
class UObject;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMesh;
class UTimelineComponent;
class UUnionAtomComponent;
class UUnionCameraModifierPostEffect;
class UUnionRacerStatusObject;
class UUnionStaticMeshComponent;
class UUnionVehicleModelInfo;

UCLASS(Blueprintable)
class UNION_API AVehicleInRacePawn : public APawn, public IRaceInputRecieveInterface, public IUnionVehicleRaceObjectInterface, public IUnionRaceInfoInterface, public IUnionItemInfoInterface, public IUnionRingInfoInterface, public IUnionAttackItemInfoInterface, public IUnionGroupInfoInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleModelEventSpecialStatus, const int32&, EventId, const EVehicleSpecialStatusType&, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnVehicleModelEventItemId, const int32&, EventId, const EItemId&, Value, const int32&, IntValue, const EItemThrowDirection&, ThrowType, const bool, bValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleModelEventInt, const int32&, EventId, const int32&, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleModelEventFloat, const int32&, EventId, const float&, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleModelEventAttackedInfo, const int32&, EventId, const FAttackedInfo&, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeVehicleType, EVehicleType, Value);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TeamRubberBandMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> GhostRoadEffectMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> GhostRoadEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GhostRoadEffectMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhostRoadEffectForwardOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* TPCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CameraObstructEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* CameraObstructSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* CameraObstructInputSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaceCameraActor* RaceCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppListenerFocusPoint* ListenerFocusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacerStatusObject* UnionRacerStatusObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMachineInRaceActor> MachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASimpleNPCSkeletalActor> SimpleNpcSkeletalMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASimpleNPCStaticActor> SimpleNpcStaticMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHoverboardInRaceActor> HoverboadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMonsterTruckInRaceActor> MonsterTruckClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASimpleNpcMonsterTruckActor> SimpleNpcMonsterTruckClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AYellowDrillActor> YellowDrillClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADrone> DroneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARecoveryRingExit> RecoverRingExitClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFootcutWarpRingPerformance> FootcutWarpRingPerformanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemSlimePerformance> ItemSlimePerformanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemDarkChaoPerformance> ItemDarkChaoPerformanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemWarpRingPerformance> ItemWarpPerformaceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemWeightPerformance> ItemWeightPerformaceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineOverlayMaterialType, UMaterialInterface*> OverlayMaterialInterfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineBehaviorParameterDataAsset* BehaviorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineCameraObstructDataAsset* CameraObstructEffectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ItemCountDownAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraEffectDisappearCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TrickSpinSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineGadgetActionComponent* MachineGadgetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineAuraEffectComponent* MachineAuraEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleModelEventInt OnVehicleModelEventInt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleModelEventFloat OnVehicleModelEventFloat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleModelEventAttackedInfo OnVehicleModelEventAttackedInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleModelEventItemId OnVehicleModelEventItemId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleModelEventSpecialStatus OnVehicleModelEventSpecialStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeVehicleType OnChangeVehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMachineHornComponent> MachineHornComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineHornComponent* MachineHornComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GhostMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GhostMaterialInterfaceDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehicleBaseActor* VehicleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehicleBaseActor* MonsterTruckActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYellowDrillActor* YellowDrillActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADriver* DriverActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADrone* DroneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARecoveryRingExit* RecoverRingExitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AItemPerformanceBase*> ItemPerformanceBaseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionCameraModifierPostEffect* CameraModifierPostEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineOverlayMaterialType, UMaterialInstanceDynamic*> OverlayMaterials;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UObject>> InputListenerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AudioListenerOverride;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* TeamRubberBandComponents[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* GhostRoadEffectMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GhostRoadEffectMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineFloat CameraFloatStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineEvent CameraFinishStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* CameraEffectTimeline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSimpleSkeletalMeshMachineNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSimpleSkeletalMeshMachineLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSimpleStaticMeshMachineNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSimpleStaticMeshMachineLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRainbowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DummyMaterialInterface;
    
public:
    AVehicleInRacePawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventItemId(const int32& EventId, const EItemId& Value, const int32& IntValue, const EItemThrowDirection& ThrowType, const bool bGadgetLuckyItem);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventInt(const int32& EventId, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventFloat(const int32& EventId, const float& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value);
    
    UFUNCTION(BlueprintCallable)
    void StartHiddenNoUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDriverActor(EDriverId DriverId, bool bIsHoverboard, bool bUseRivalSkin);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value, bool bWithDriver);
    
    UFUNCTION(BlueprintCallable)
    void SetTPCameraComponent(UCameraComponent* NewCameraComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value, bool bWithDriver);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerStatusObject_Implementation(UUnionRacerStatusObject* NewUnionRacerStatusObject);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerIndex_Implementation(const int32& NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOverwriteModelTransform(bool bEnable, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoldItem(EItemId ItemId, EItemThrowDirection ThrowType, int32 Value, bool bIsLocalPlayer, bool bUpdateThrowType, bool bGadgetLuckyItem);
    
    UFUNCTION(BlueprintCallable)
    void SetForceCameraAttach(bool bNewFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCameraPostEffect(EUnionCameraModifierPostEffectType EffectType, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDriverActor(ADriver* InDriverActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPostEffectParameter(EUnionCameraModifierPostEffectType EffectType, FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraEffectParameter(float BoostIntensity, float HispeedIntensity);
    
    UFUNCTION(BlueprintCallable)
    void ResetVehicleDefaultAttachments();
    
    UFUNCTION(BlueprintCallable)
    void ResetSpecialStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResultCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRainbowBlinkStart(bool bWithDriver);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRainbowBlinkEnd(bool bWithDriver);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGoal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOutInk(bool bIsPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDrift(int32 ChargeLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageSpin(AVehicleBaseActor* TargetVehicle, bool bIsPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBodyCut(bool bIsCut);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlinkStart(const FLinearColor& Color, bool bWithDriver);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlinkEnd(bool bWithDriver);
    
    UFUNCTION(BlueprintCallable)
    void NoticeSpecialStatusEvent(const int32& EventId, const EVehicleSpecialStatusType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleTireMark() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleSurfaceEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleDriftEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnDriverActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRingMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFreshlyPaint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDriving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBodyCut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleType GetVehicleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleMeshType GetVehicleMeshType() const;
    
    UFUNCTION(BlueprintCallable)
    FUnionVehicleRaceInput GetVehicleInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleDisplayMode GetVehicleDisplayMode() const;
    
    UFUNCTION(BlueprintCallable)
    UUnionVehicleModelInfo* GetUnionVehicleModelInfo();
    
    UFUNCTION(BlueprintCallable)
    UUnionRacerStatusObject* GetUnionRacerStatusObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrickSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetTPCameraComponentRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRacerIndex_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERaceInfoStateType GetRaceInfoState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerControllerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetOverlayMaterial(EMachineOverlayMaterialType OverlayMaterialType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVehicleChanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverSize GetDriverSize() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetDriverMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    ADriver* GetDriverActor();
    
    UFUNCTION(BlueprintCallable)
    AVehicleBaseActor* GetActiveVehicle();
    
    UFUNCTION(BlueprintCallable)
    void EndRacePerformanceState();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCamera();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeVehicleTypeGyroSetting(EVehicleType NewVehicleType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeVehicleType(EVehicleType NewVehicleType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeVehicleSize(float SizeRate);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVehicleDisplayMode(EVehicleDisplayMode NewVehicleDisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void CameraEffectTimelineStepFunction(float Value);
    
    UFUNCTION(BlueprintCallable)
    void CameraEffectTimelineFinishFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CalculateStartTransform(FTransform& OutBaseTransform, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable)
    void AddItemPerformanceObject(AItemPerformanceBase* obj);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCamera();
    

    // Fix for true pure virtual functions not being implemented
};

