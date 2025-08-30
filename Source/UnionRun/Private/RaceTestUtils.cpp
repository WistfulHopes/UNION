#include "RaceTestUtils.h"

URaceTestUtils::URaceTestUtils() {
}

bool URaceTestUtils::UpdateRaceLoadAutoTest(const TArray<EStageId>& OpenStageIDs) {
    return false;
}

void URaceTestUtils::UpdateCameraByDebConst() {
}

void URaceTestUtils::TickProfileGpuAndScreenshot(float DeltaTime, APlayerController* PC) {
}

void URaceTestUtils::StartRaceTest(APlayerController* PC) {
}

void URaceTestUtils::StartRaceLoadTest(APlayerController* PC) {
}

void URaceTestUtils::StartAutoUnrealInsights(APlayerController* PC) {
}

void URaceTestUtils::StartAutoProfileGpu(APlayerController* PC) {
}

void URaceTestUtils::StartAutoKibana(APlayerController* PC) {
}

void URaceTestUtils::StartAutoCsvProfile(APlayerController* PC) {
}

void URaceTestUtils::SetTagNameToDestroyActor(const FString& TagName) {
}

void URaceTestUtils::SetRaceLoadTestCountMax(int32 Count) {
}

void URaceTestUtils::SetPathCameraPawnMode(bool flag) {
}

void URaceTestUtils::SetOverridePathCameraVFov(float VFov) {
}

void URaceTestUtils::SetOverridePathCameraTargetZ(float Target) {
}

void URaceTestUtils::SetOverridePathCameraTargetY(float Target) {
}

void URaceTestUtils::SetOverridePathCameraOffset(float Offset) {
}

void URaceTestUtils::SetOverridePathCameraElevation(float Elevation) {
}

void URaceTestUtils::SetOverridePathCamera(bool flag) {
}

void URaceTestUtils::SetOverrideCameraVFov(float VFov) {
}

void URaceTestUtils::SetOverrideCameraTargetZ(float Target) {
}

void URaceTestUtils::SetOverrideCameraTargetY(float Target) {
}

void URaceTestUtils::SetOverrideCameraOffset(float Offset) {
}

void URaceTestUtils::SetOverrideCameraElevation(float Elevation) {
}

void URaceTestUtils::SetOverrideCamera(bool flag) {
}

void URaceTestUtils::SetLoadingTime(float LoadingTime) {
}

void URaceTestUtils::SetDrivingCount(int32 DrivingCount) {
}

void URaceTestUtils::SetAutoUnrealInsightsModeFlag(bool flag) {
}

void URaceTestUtils::SetAutoProfileGpuModeFlag(bool flag) {
}

void URaceTestUtils::SetAutoKibanaModeFlag(bool flag) {
}

void URaceTestUtils::SetAutoDetailKibanaModeFlag(bool flag) {
}

void URaceTestUtils::SetAutoDebugKibanaModeFlag(bool flag) {
}

void URaceTestUtils::SetAutoCsvProfileModeFlag(bool flag) {
}

bool URaceTestUtils::SaveRaceLoadAutoTestResult() {
    return false;
}

void URaceTestUtils::ResetRaceLoadTestCount() {
}

bool URaceTestUtils::IsUseItemTable() {
    return false;
}

bool URaceTestUtils::IsRaceTestMode() {
    return false;
}

bool URaceTestUtils::IsRaceLoadAutoTestMode() {
    return false;
}

bool URaceTestUtils::IsPerformanceTestRun(int32 RacerIndex) {
    return false;
}

bool URaceTestUtils::IsPathCameraPawnMode() {
    return false;
}

bool URaceTestUtils::IsNoHudMode() {
    return false;
}

bool URaceTestUtils::IsNoGimmickObject() {
    return false;
}

bool URaceTestUtils::IsNoCourseObject() {
    return false;
}

bool URaceTestUtils::IsNoBgmMode() {
    return false;
}

bool URaceTestUtils::IsForceComRun(int32 RacerIndex) {
    return false;
}

bool URaceTestUtils::IsFinalRaceLoadTest() {
    return false;
}

bool URaceTestUtils::IsEnableItemTableSynchro() {
    return false;
}

bool URaceTestUtils::IsAutoUnrealInsightsMode() {
    return false;
}

bool URaceTestUtils::IsAutoProfileGpuMode() {
    return false;
}

bool URaceTestUtils::IsAutoKibanaMode() {
    return false;
}

bool URaceTestUtils::IsAutoDetailKibanaMode() {
    return false;
}

bool URaceTestUtils::IsAutoDebugKibanaMode() {
    return false;
}

bool URaceTestUtils::IsAutoCsvProfileMode() {
    return false;
}

FString URaceTestUtils::GetTagNameToDestroyActor() {
    return TEXT("");
}

UDataTable* URaceTestUtils::GetRaceTestItemTableAsset() {
    return NULL;
}

URaceTestConfig* URaceTestUtils::GetRaceTestConfigAccess() {
    return NULL;
}

URaceTestConfig* URaceTestUtils::GetRaceTestConfig() {
    return NULL;
}

bool URaceTestUtils::GetRacerSetting(int32 RacerIndex, FRaceTestRacerSetting& Setting) {
    return false;
}

ERaceLoadTestMode URaceTestUtils::GetRaceLoadTestMode() {
    return ERaceLoadTestMode::None;
}

bool URaceTestUtils::GetOverridePathCameraVFov(float& VFov) {
    return false;
}

bool URaceTestUtils::GetOverridePathCameraTargetZ(float& Target) {
    return false;
}

bool URaceTestUtils::GetOverridePathCameraTargetY(float& Target) {
    return false;
}

bool URaceTestUtils::GetOverridePathCameraOffset(float& Offset) {
    return false;
}

bool URaceTestUtils::GetOverridePathCameraElevation(float& Elevation) {
    return false;
}

bool URaceTestUtils::GetOverridePathCamera() {
    return false;
}

bool URaceTestUtils::GetOverrideCameraVFov(float& VFov) {
    return false;
}

bool URaceTestUtils::GetOverrideCameraTargetZ(float& Target) {
    return false;
}

bool URaceTestUtils::GetOverrideCameraTargetY(float& Target) {
    return false;
}

bool URaceTestUtils::GetOverrideCameraOffset(float& Offset) {
    return false;
}

bool URaceTestUtils::GetOverrideCameraElevation(float& Elevation) {
    return false;
}

bool URaceTestUtils::GetOverrideCamera() {
    return false;
}

int32 URaceTestUtils::GetNoHitItemPhysiceLayerMask() {
    return 0;
}

bool URaceTestUtils::GetAutoUnrealInsightsModeFlag() {
    return false;
}

bool URaceTestUtils::GetAutoProfileGpuModeFlag() {
    return false;
}

bool URaceTestUtils::GetAutoKibanaModeFlag() {
    return false;
}

bool URaceTestUtils::GetAutoDetailKibanaModeFlag() {
    return false;
}

bool URaceTestUtils::GetAutoDebugKibanaModeFlag() {
    return false;
}

bool URaceTestUtils::GetAutoCsvProfileModeFlag() {
    return false;
}

void URaceTestUtils::EndRaceTest(APlayerController* PC) {
}

void URaceTestUtils::EndRaceLoadTest(APlayerController* PC) {
}

void URaceTestUtils::EndAutoUnrealInsights(APlayerController* PC) {
}

void URaceTestUtils::EndAutoProfileGpu(APlayerController* PC) {
}

void URaceTestUtils::EndAutoKibana(APlayerController* PC) {
}

void URaceTestUtils::EndAutoCsvProfile(APlayerController* PC) {
}

void URaceTestUtils::AssignFixedFpsForRaceLoadTest() {
}


