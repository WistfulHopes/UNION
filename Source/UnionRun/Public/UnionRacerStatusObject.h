#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ECrossplayPlatform.h"
#include "EDriverId.h"
#include "EDriverType.h"
#include "EGadgetId.h"
#include "EGroupColorId.h"
#include "EIrregularEventId.h"
#include "EItemInfoType.h"
#include "ESoundPan.h"
#include "EViewSplitId.h"
#include "HoldItemInfo.h"
#include "UserMachineCustomizeData.h"
#include "AttackedInfo.h"
#include "ECarStatusType.h"
#include "EDomainIndex.h"
#include "EDomainNumber.h"
#include "EDroneRemainDistance.h"
#include "ERacerControlType.h"
#include "ERacerDriftState.h"
#include "EVehicleDisplayMode.h"
#include "ItemAimInfo.h"
#include "RacerDamageType.h"
#include "UnionRaceCustomParam.h"
#include "UnionRaceStartDashParam.h"
#include "UnionTyreMarkInfo.h"
#include "UnionRacerStatusObject.generated.h"

class ACarObject;
class UUnionGameCameraInfo;
class UUnionRacePlayerStatus;
class UUnionVehicleModelInfo;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRacerStatusObject : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRacerStatusEventInt, const int32&, EventId, const int32&, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRacerStatusEventFloat, const int32&, EventId, const float&, Value);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingAddReserveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldItemInfo ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAimInfo AimInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> GadgetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingCountPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingAddReserveCountPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldItemInfo ItemInfoPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIrregularEventId RacerIrregularEventIdPrev;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRacerStatusEventInt OnRacerStatusEventInt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRacerStatusEventFloat OnRacerStatusEventFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RivalRacersIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupColorId GroupColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverType DriverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERacerControlType RacerControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossplayPlatform CrossplayPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MachineBehaviorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserMachineCustomizeData MachineCustomizeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarStatusType MachineStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceCustomParam RaceCustomParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HudOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainIndex CurrentDomainIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainIndex PrevDomainIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainNumber CurrentDomainNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainNumber PrevDomainNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLapCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedLapCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentElapsedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInReverseRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCourseOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInFootCutting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraWorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentGravityNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespotLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespotDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix RespotRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGravityLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeRaceRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FrontRankRacerIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BackRankRacerIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RacerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleDisplayMode VehicleDisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneRemainDistance DroneRemainDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIrregularEventId RacerIrregularEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearanceSteer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearanceCounterYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERacerDriftState CurrentDriftState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionTyreMarkInfo> TyreMarkInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReverseRunSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReverseRunRecoverCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackRunDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoInputSignalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarObject* CarObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Steering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Accel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionVehicleModelInfo* UnionVehicleModelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionVehicleModelInfo* UnionVehicleModelInfoPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionGameCameraInfo* UnionGameCameraInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AppCurrentDomainPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AppLastDomainPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUnionVehicleModelInfo*> AppDomainVehicleModelInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUnionGameCameraInfo*> AppDomainGameCameraInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainNumber NextRaceDomainNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainNumber PrevRaceDomainNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPassedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShortcutRingPassedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacePlayerStatus* RacePlayerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceStartDashParam StartDashParam;
    
    UUnionRacerStatusObject();

    UFUNCTION(BlueprintCallable)
    void SetViewSplitId(EViewSplitId InViewSplitId);
    
    UFUNCTION(BlueprintCallable)
    void SetTSRKeyAssignEnabled(bool bInNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTestParam(int32 InNewParam);
    
    UFUNCTION(BlueprintCallable)
    void SetTakeDamage(const FAttackedInfo& AttackedInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetRivalRacersIndexArray(TArray<int32> InRacersIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetRivalRacerIndex(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetRingCount(int32 InRingCount);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerName(const FText& InName);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerIndex(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerControlType(ERacerControlType InRacerControlType);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerComLv(int32 InComLv);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerComControlType(int32 InComControlType);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceCustomParam(const FUnionRaceCustomParam& InRaceCustomParam);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerControllerIndex(int32 InPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayable(bool InPlayable);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineStatusType(ECarStatusType NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineID(int32 InMachineID);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineCustomizeData(const FUserMachineCustomizeData& InMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineBehaviorID(int32 InMachineBehaviorID);
    
    UFUNCTION(BlueprintCallable)
    void SetHandleAssistEnabled(bool bInNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupIndex(int32 InGroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDroneRemainDistance(EDroneRemainDistance InDroneRemainDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetDriverType(EDriverType InDriverType);
    
    UFUNCTION(BlueprintCallable)
    void SetDriverId(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWorldOffset(FVector InWorldOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLapCount(int32 InCurrentLapCount);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDomainNumber(EDomainNumber InCurrentDomainNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDomainIndex(EDomainIndex InCurrentDomainIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossplayPlatform(ECrossplayPlatform InPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetClushGimmick(const FAttackedInfo& AttackedInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoAcceleratorEnabled(bool bInNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAirTrickAssistEnabled(bool bInNewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetTakeDamage();
    
    UFUNCTION(BlueprintCallable)
    void RequestBackCamera(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDamage(RacerDamageType DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTSRKeyAssignEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTakeSquashedDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTakeDamage(RacerDamageType DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSomeonesCom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalPowerful() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalCom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemoteRacer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaceParkRivalRacerSkin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlinePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineCom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMachineCameraAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalRacer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemIrregular_New(EItemInfoType ItemInfoType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemIrregular(bool IsMain) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandleAssistEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostMachineEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostHiddenInGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClushGimmickObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoAcceleratorEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirTrickAssistEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EViewSplitId GetViewSplitId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVehicleMoveSpeedStatus(float& SpeedMPH, float& SpeedKPH);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleDisplayMode GetVehicleDisplayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVehicleBodyGStatus(float& BodyG, float& BodyGd, float& BodyGr);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTestParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRivalRacersIndexArray(TArray<int32>& OutRacersIndexArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRivalRacerIndex(int32& OutRacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRingCount(int32& OutRingCount);
    
    UFUNCTION(BlueprintCallable)
    FText GetRacerName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRacerIndex(int32& OutRacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERacerControlType GetRacerControlType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRacerComLv() const;
    
    UFUNCTION(BlueprintCallable)
    UUnionRacePlayerStatus* GetRacePlayerStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRaceCustomParam(FUnionRaceCustomParam& OutRaceCustomParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerControllerIndex(int32& OutPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESoundPan GetPanSplitValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserMachineCustomizeData GetMachineCustomizeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInfiniteItemGauge_New(EItemInfoType ItemInfoType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInfiniteItemGauge(bool IsMain) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroupIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEngineStatus(float& EngineRPM, float& EngineMaxRPM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroneRemainDistance GetDroneRemainDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentWorldOffset(FVector& OutWorldOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentLapCount(int32& OutCurrentLapCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentElapsedRatio(float& OutElapsedRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentDomainNumber(int32& OutCurrentDomainNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentDomainIndex(int32& OutCurrentDomainIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetAppLastDomainPosition(FVector& OutAppLastDomainPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAppearanceSteer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAppearanceCounterYaw() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAppDomainVehicleModelInfos(TArray<UUnionVehicleModelInfo*>& OutAppDomainVehicleModelInfos);
    
    UFUNCTION(BlueprintCallable)
    void GetAppDomainGameCameraInfos(TArray<UUnionGameCameraInfo*>& OutAppDomainGameCameraInfos);
    
    UFUNCTION(BlueprintCallable)
    void GetAppCurrentDomainPosition(FVector& OutAppCurrentDomainPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddRunningDistance(float dist);
    
    UFUNCTION(BlueprintCallable)
    void AddRaceCustomParam(const FUnionRaceCustomParam& InRaceCustomParam);
    
};

