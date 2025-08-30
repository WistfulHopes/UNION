#include "TimeTrialUtilityLibrary.h"

UTimeTrialUtilityLibrary::UTimeTrialUtilityLibrary() {
}

void UTimeTrialUtilityLibrary::SetTimeTrialMedalAcquisitionPerStage(ESpeedClassId InSpeedClass, const EStageId InStageId, bool bInAcquisition) {
}

void UTimeTrialUtilityLibrary::SetPlatformUserId(const FString& InPlatformUserId) {
}

FText UTimeTrialUtilityLibrary::LapTimeText(const int32 InMillimeterSecondTime) {
    return FText::GetEmpty();
}

bool UTimeTrialUtilityLibrary::IsTimeTrialMedalComplete(ESpeedClassId InSpeedClass) {
    return false;
}

bool UTimeTrialUtilityLibrary::IsStageIdIndexActive(const int32 Index) {
    return false;
}

bool UTimeTrialUtilityLibrary::IsStageIdActive(const EStageId InStageId) {
    return false;
}

int32 UTimeTrialUtilityLibrary::GetTotalTimeTrialMedalMax() {
    return 0;
}

int32 UTimeTrialUtilityLibrary::GetTotalTimeTrialMedalCount() {
    return 0;
}

int32 UTimeTrialUtilityLibrary::GetTotalExtndTimeTrialMedalMax() {
    return 0;
}

int32 UTimeTrialUtilityLibrary::GetTotalExtndTimeTrialMedalCount() {
    return 0;
}

ETimeTrialWinLoseDispId UTimeTrialUtilityLibrary::GetTimeTrialWinLoseId(ESpeedClassId InSpeedClass, EStageId InStageId, bool bGhostOnline) {
    return ETimeTrialWinLoseDispId::NewBestRecord;
}

int32 UTimeTrialUtilityLibrary::GetTimeTrialMedalCountMainStage(ESpeedClassId InSpeedClass, int32& OutSRankCount) {
    return 0;
}

int32 UTimeTrialUtilityLibrary::GetTimeTrialMedalCountCrossWorld(ESpeedClassId InSpeedClass, int32& OutSRankCount) {
    return 0;
}

bool UTimeTrialUtilityLibrary::GetTimeTrialMedalAcquisitionPerStage(ESpeedClassId InSpeedClass, const EStageId InStageId) {
    return false;
}

TArray<bool> UTimeTrialUtilityLibrary::GetTimeTrialMedalAcquisitionPerGrandPrix(ESpeedClassId InSpeedClass, const EGrandPrixId InGrandprixId, TArray<ETimeTrialClearRankId>& OutTimeTrialRanks) {
    return TArray<bool>();
}

TArray<bool> UTimeTrialUtilityLibrary::GetTimeTrialMedalAcquisitionPerCrossWorld(ESpeedClassId InSpeedClass, TArray<ETimeTrialClearRankId>& OutTimeTrialRanks) {
    return TArray<bool>();
}

int32 UTimeTrialUtilityLibrary::GetTimeTrialMedalAcquisitionPerClass(ESpeedClassId InSpeedClass, bool bIsExtnd) {
    return 0;
}

FString UTimeTrialUtilityLibrary::GetPlatformUserId() {
    return TEXT("");
}

TArray<EStageId> UTimeTrialUtilityLibrary::GetMainStages() {
    return TArray<EStageId>();
}

TArray<EStageId> UTimeTrialUtilityLibrary::GetExthdStages() {
    return TArray<EStageId>();
}

TArray<EStageId> UTimeTrialUtilityLibrary::GetCrossWorldStages() {
    return TArray<EStageId>();
}

int32 UTimeTrialUtilityLibrary::GetClassTimeTrialMedalMax() {
    return 0;
}

int32 UTimeTrialUtilityLibrary::GetClassExtndTimeTrialMedalMax() {
    return 0;
}

UTexture2D* UTimeTrialUtilityLibrary::GetCharacterIconTexture(const EDriverId InDriverId) {
    return NULL;
}

TArray<EStageId> UTimeTrialUtilityLibrary::FindStagesWithoutGhostUpload(const ESpeedClassId InSpeedClassId) {
    return TArray<EStageId>();
}

bool UTimeTrialUtilityLibrary::FindAllWithoutGhostUpload(TArray<EStageId>& OutSonicSpeedList, TArray<EStageId>& OutSuperSonicSpeedList) {
    return false;
}

FText UTimeTrialUtilityLibrary::ConvertClockCountToLapTimeText(const int32 InClockCount) {
    return FText::GetEmpty();
}


