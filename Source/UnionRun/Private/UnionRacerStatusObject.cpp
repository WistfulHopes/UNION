#include "UnionRacerStatusObject.h"

UUnionRacerStatusObject::UUnionRacerStatusObject() {
    this->RingCount = 0;
    this->RingAddReserveCount = 0;
    this->RingCountPrev = 0;
    this->RingAddReserveCountPrev = 0;
    this->RacerIrregularEventIdPrev = EIrregularEventId::None;
    this->RacerIndex = 0;
    this->RivalRacerIndex = -1;
    this->PlayerControllerIndex = 20;
    this->GroupIndex = 0;
    this->GroupColorID = EGroupColorId::None;
    this->DriverId = EDriverId::Sonic;
    this->DriverType = EDriverType::Speed;
    this->RacerControlType = ERacerControlType::LocalPlayer;
    this->CrossplayPlatform = ECrossplayPlatform::None;
    this->IsPlayable = true;
    this->ComLv = -1;
    this->ComControlType = 0;
    this->MachineBehaviorID = 0;
    this->MachineId = 0;
    this->MachineStatusType = ECarStatusType::CarStatusDash;
    this->HudOffset = 1.00f;
    this->CurrentDomainIndex = EDomainIndex::DomainIndex0;
    this->PrevDomainIndex = EDomainIndex::DomainIndex0;
    this->CurrentDomainNumber = EDomainNumber::DomainNumber0;
    this->PrevDomainNumber = EDomainNumber::DomainNumber0;
    this->CurrentLapCount = 0;
    this->ElapsedLapCount = 0;
    this->CurrentElapsedRatio = 0.00f;
    this->ElapsedRatio = 0.00f;
    this->RunningDistance = 0.00f;
    this->bInReverseRun = false;
    this->bInCourseOut = false;
    this->bInFootCutting = false;
    this->bInGoal = false;
    this->CurrentGravityLength = 0.00f;
    this->Rank = 0;
    this->BeforeRaceRank = 0;
    this->TotalRank = 0;
    this->FrontRankRacerIndices.AddDefaulted(3);
    this->BackRankRacerIndices.AddDefaulted(3);
    this->VehicleDisplayMode = EVehicleDisplayMode::Nomal;
    this->DroneRemainDistance = EDroneRemainDistance::DistanceUnknown;
    this->RacerIrregularEventId = EIrregularEventId::None;
    this->AppearanceSteer = 0.00f;
    this->AppearanceCounterYaw = 0.00f;
    this->CurrentDriftState = ERacerDriftState::None;
    this->ReverseRunSeconds = 0.00f;
    this->ReverseRunRecoverCount = 0;
    this->BackRunDistance = 0.00f;
    this->NoInputSignalTime = 0.00f;
    this->CarObject = NULL;
    this->Steering = 0.00f;
    this->SteeringLR = 0.00f;
    this->Accel = 0.00f;
    this->Brake = 0.00f;
    this->UnionVehicleModelInfo = NULL;
    this->UnionVehicleModelInfoPrev = NULL;
    this->UnionGameCameraInfo = NULL;
    this->NextRaceDomainNumber = EDomainNumber::InvalidDomainNumber;
    this->PrevRaceDomainNumber = EDomainNumber::InvalidDomainNumber;
    this->IsPassedOn = false;
    this->IsShortcutRingPassedOn = false;
    this->RacePlayerStatus = NULL;
}

void UUnionRacerStatusObject::SetViewSplitId(EViewSplitId InViewSplitId) {
}

void UUnionRacerStatusObject::SetTSRKeyAssignEnabled(bool bInNewValue) {
}

void UUnionRacerStatusObject::SetTestParam(int32 InNewParam) {
}

void UUnionRacerStatusObject::SetTakeDamage(const FAttackedInfo& AttackedInfo) {
}

void UUnionRacerStatusObject::SetRivalRacersIndexArray(TArray<int32> InRacersIndex) {
}

void UUnionRacerStatusObject::SetRivalRacerIndex(int32 InRacerIndex) {
}

void UUnionRacerStatusObject::SetRingCount(int32 InRingCount) {
}

void UUnionRacerStatusObject::SetRacerName(const FText& InName) {
}

void UUnionRacerStatusObject::SetRacerIndex(int32 InRacerIndex) {
}

void UUnionRacerStatusObject::SetRacerControlType(ERacerControlType InRacerControlType) {
}

void UUnionRacerStatusObject::SetRacerComLv(int32 InComLv) {
}

void UUnionRacerStatusObject::SetRacerComControlType(int32 InComControlType) {
}

void UUnionRacerStatusObject::SetRaceCustomParam(const FUnionRaceCustomParam& InRaceCustomParam) {
}

void UUnionRacerStatusObject::SetPlayerControllerIndex(int32 InPlayerControllerIndex) {
}

void UUnionRacerStatusObject::SetPlayable(bool InPlayable) {
}

void UUnionRacerStatusObject::SetMachineStatusType(ECarStatusType NewStatus) {
}

void UUnionRacerStatusObject::SetMachineID(int32 InMachineID) {
}

void UUnionRacerStatusObject::SetMachineCustomizeData(const FUserMachineCustomizeData& InMachineCustomizeData) {
}

void UUnionRacerStatusObject::SetMachineBehaviorID(int32 InMachineBehaviorID) {
}

void UUnionRacerStatusObject::SetHandleAssistEnabled(bool bInNewValue) {
}

void UUnionRacerStatusObject::SetGroupIndex(int32 InGroupIndex) {
}

void UUnionRacerStatusObject::SetDroneRemainDistance(EDroneRemainDistance InDroneRemainDistance) {
}

void UUnionRacerStatusObject::SetDriverType(EDriverType InDriverType) {
}

void UUnionRacerStatusObject::SetDriverId(EDriverId InDriverId) {
}

void UUnionRacerStatusObject::SetCurrentWorldOffset(FVector InWorldOffset) {
}

void UUnionRacerStatusObject::SetCurrentLapCount(int32 InCurrentLapCount) {
}

void UUnionRacerStatusObject::SetCurrentDomainNumber(EDomainNumber InCurrentDomainNumber) {
}

void UUnionRacerStatusObject::SetCurrentDomainIndex(EDomainIndex InCurrentDomainIndex) {
}

void UUnionRacerStatusObject::SetCrossplayPlatform(ECrossplayPlatform InPlatform) {
}

void UUnionRacerStatusObject::SetClushGimmick(const FAttackedInfo& AttackedInfo) {
}

void UUnionRacerStatusObject::SetAutoAcceleratorEnabled(bool bInNewValue) {
}

void UUnionRacerStatusObject::SetAirTrickAssistEnabled(bool bInNewValue) {
}

void UUnionRacerStatusObject::ResetTakeDamage() {
}

void UUnionRacerStatusObject::RequestBackCamera(bool flag) {
}

void UUnionRacerStatusObject::RemoveDamage(RacerDamageType DamageType) {
}

bool UUnionRacerStatusObject::IsTSRKeyAssignEnabled() const {
    return false;
}

bool UUnionRacerStatusObject::IsTakeSquashedDamage() const {
    return false;
}

bool UUnionRacerStatusObject::IsTakeDamage(RacerDamageType DamageType) const {
    return false;
}

bool UUnionRacerStatusObject::IsSomeonesCom() const {
    return false;
}

bool UUnionRacerStatusObject::IsRivalPowerful() const {
    return false;
}

bool UUnionRacerStatusObject::IsRivalCom() const {
    return false;
}

bool UUnionRacerStatusObject::IsRemoteRacer() const {
    return false;
}

bool UUnionRacerStatusObject::IsRaceParkRivalRacerSkin() const {
    return false;
}

bool UUnionRacerStatusObject::IsOnlinePlayer() const {
    return false;
}

bool UUnionRacerStatusObject::IsOnlineCom() const {
    return false;
}

bool UUnionRacerStatusObject::IsMachineCameraAssigned() const {
    return false;
}

bool UUnionRacerStatusObject::IsLocalRacer() const {
    return false;
}

bool UUnionRacerStatusObject::IsLocalPlayer() const {
    return false;
}

bool UUnionRacerStatusObject::IsItemIrregular_New(EItemInfoType ItemInfoType) const {
    return false;
}

bool UUnionRacerStatusObject::IsItemIrregular(bool IsMain) const {
    return false;
}

bool UUnionRacerStatusObject::IsHandleAssistEnabled() const {
    return false;
}

bool UUnionRacerStatusObject::IsGhostMachineEnabled() const {
    return false;
}

bool UUnionRacerStatusObject::IsGhostHiddenInGame() const {
    return false;
}

bool UUnionRacerStatusObject::IsGhostGoal() const {
    return false;
}

bool UUnionRacerStatusObject::IsCom() const {
    return false;
}

bool UUnionRacerStatusObject::IsClushGimmickObject() const {
    return false;
}

bool UUnionRacerStatusObject::IsAutoAcceleratorEnabled() const {
    return false;
}

bool UUnionRacerStatusObject::IsAnyDamage() const {
    return false;
}

bool UUnionRacerStatusObject::IsAirTrickAssistEnabled() const {
    return false;
}

EViewSplitId UUnionRacerStatusObject::GetViewSplitId() const {
    return EViewSplitId::None;
}

void UUnionRacerStatusObject::GetVehicleMoveSpeedStatus(float& SpeedMPH, float& SpeedKPH) {
}

EVehicleDisplayMode UUnionRacerStatusObject::GetVehicleDisplayMode() const {
    return EVehicleDisplayMode::Nomal;
}

void UUnionRacerStatusObject::GetVehicleBodyGStatus(float& BodyG, float& BodyGd, float& BodyGr) {
}

int32 UUnionRacerStatusObject::GetTestParam() {
    return 0;
}

void UUnionRacerStatusObject::GetRivalRacersIndexArray(TArray<int32>& OutRacersIndexArray) {
}

void UUnionRacerStatusObject::GetRivalRacerIndex(int32& OutRacerIndex) {
}

void UUnionRacerStatusObject::GetRingCount(int32& OutRingCount) {
}

FText UUnionRacerStatusObject::GetRacerName() {
    return FText::GetEmpty();
}

void UUnionRacerStatusObject::GetRacerIndex(int32& OutRacerIndex) {
}

ERacerControlType UUnionRacerStatusObject::GetRacerControlType() const {
    return ERacerControlType::None;
}

int32 UUnionRacerStatusObject::GetRacerComLv() const {
    return 0;
}

UUnionRacePlayerStatus* UUnionRacerStatusObject::GetRacePlayerStatus() {
    return NULL;
}

void UUnionRacerStatusObject::GetRaceCustomParam(FUnionRaceCustomParam& OutRaceCustomParam) const {
}

void UUnionRacerStatusObject::GetPlayerControllerIndex(int32& OutPlayerControllerIndex) {
}

ESoundPan UUnionRacerStatusObject::GetPanSplitValue() const {
    return ESoundPan::Left;
}

FUserMachineCustomizeData UUnionRacerStatusObject::GetMachineCustomizeData() const {
    return FUserMachineCustomizeData{};
}

float UUnionRacerStatusObject::GetInfiniteItemGauge_New(EItemInfoType ItemInfoType) const {
    return 0.0f;
}

float UUnionRacerStatusObject::GetInfiniteItemGauge(bool IsMain) const {
    return 0.0f;
}

int32 UUnionRacerStatusObject::GetGroupIndex() const {
    return 0;
}

void UUnionRacerStatusObject::GetEngineStatus(float& EngineRPM, float& EngineMaxRPM) {
}

EDroneRemainDistance UUnionRacerStatusObject::GetDroneRemainDistance() const {
    return EDroneRemainDistance::DistanceUnknown;
}

void UUnionRacerStatusObject::GetCurrentWorldOffset(FVector& OutWorldOffset) {
}

void UUnionRacerStatusObject::GetCurrentLapCount(int32& OutCurrentLapCount) {
}

void UUnionRacerStatusObject::GetCurrentElapsedRatio(float& OutElapsedRatio) {
}

void UUnionRacerStatusObject::GetCurrentDomainNumber(int32& OutCurrentDomainNumber) {
}

void UUnionRacerStatusObject::GetCurrentDomainIndex(int32& OutCurrentDomainIndex) {
}

void UUnionRacerStatusObject::GetAppLastDomainPosition(FVector& OutAppLastDomainPosition) {
}

float UUnionRacerStatusObject::GetAppearanceSteer() const {
    return 0.0f;
}

float UUnionRacerStatusObject::GetAppearanceCounterYaw() const {
    return 0.0f;
}

void UUnionRacerStatusObject::GetAppDomainVehicleModelInfos(TArray<UUnionVehicleModelInfo*>& OutAppDomainVehicleModelInfos) {
}

void UUnionRacerStatusObject::GetAppDomainGameCameraInfos(TArray<UUnionGameCameraInfo*>& OutAppDomainGameCameraInfos) {
}

void UUnionRacerStatusObject::GetAppCurrentDomainPosition(FVector& OutAppCurrentDomainPosition) {
}

void UUnionRacerStatusObject::AddRunningDistance(float dist) {
}

void UUnionRacerStatusObject::AddRaceCustomParam(const FUnionRaceCustomParam& InRaceCustomParam) {
}


