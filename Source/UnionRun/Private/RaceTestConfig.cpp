#include "RaceTestConfig.h"

URaceTestConfig::URaceTestConfig() {
    this->RaceType = ERaceType::TravelRace;
    this->TravelType = ERaceTestSelectTravelType::DEFAULT;
    this->bPriorityMenuSettingForFreeRunStageId = false;
    this->bOverrideCamera = false;
    this->OverrideCameraVFov = 0.00f;
    this->OverrideCameraOffset = 0.00f;
    this->OverrideCameraTargetY = 0.00f;
    this->OverrideCameraTargetZ = 0.00f;
    this->OverrideCameraElevation = 0.00f;
    this->SpeedClass = ESpeedClassId::SonicSpeed;
    this->RaceGroupType = ERaceSettingGrouping::Individual;
    this->RaceGroupRule = EGroupRaceRule::None;
    this->FixedFps = ERaceFrameRate::None;
    this->FixedRandomSeed = -1;
    this->bNoHud = false;
    this->bNoBgm = false;
    this->bEnableFootCut = false;
    this->bNoDebugText = false;
    this->bNoCourseObject = false;
    this->bNoGimmickObject = false;
    this->RacerRingNum = -1;
    this->bNoRingObject = false;
    this->ItemSettingTable = NULL;
    this->bDisableItemTableSynchro = false;
    this->bNoItemBox = false;
    this->ItemLotteryRouletteTime = -1.00f;
    this->FixedLotteryItem = EItemId::NonItem;
    this->bItemNoHitLayerMachine = false;
    this->bItemNoHitLayerItem = false;
    this->ItemCapacityMaxNum = -1;
    this->bDisableItemCountDownPerformance = false;
    this->bItemRocketPuntchForceNoReflect = false;
    this->bItemSlimeAutoUserInput = false;
    this->RaceLoadTestMode = ERaceLoadTestMode::None;
    this->bOverridePathCamera = false;
    this->OverridePathCameraVFov = 0.00f;
    this->OverridePathCameraOffset = 0.00f;
    this->OverridePathCameraTargetY = 0.00f;
    this->OverridePathCameraTargetZ = 0.00f;
    this->OverridePathCameraElevation = 0.00f;
    this->RaceLoadTestCount = 1;
    this->bAutoKibana = false;
    this->bAutoDetailKibana = false;
    this->bAutoDebugKibana = false;
    this->bOutputLogForRaceLoadTest = true;
    this->bOutputLogFileForRaceLoadTest = true;
    this->bAutoUnrealInsights = false;
    this->bAutoProfileGpu = false;
    this->AutoProfileGpuInterval = 3.00f;
    this->AutoProfileGpuThreshold = 0.30f;
    this->bAutoCsvProfile = false;
}


