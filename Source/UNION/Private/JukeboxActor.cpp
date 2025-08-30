#include "JukeboxActor.h"
#include "UnionAtomComponent.h"

AJukeboxActor::AJukeboxActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultBGM = NULL;
    this->JukeboxDataAsset = NULL;
    this->JukeboxAtomComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("Jukebox"));
    this->NextBGMCue = NULL;
    this->CurrentBGMCue = NULL;
    this->bIsDirty = false;
    this->bAutoPlayMusic = false;
    this->bShuffle = false;
    this->bIsFirstEnter = false;
    this->PlayingAlbumPosition = 0;
    this->PlayingTrackPosition = 0;
    this->CurrentAlbumPosition = 0;
    this->CurrentTrackPosition = 0;
    this->bAlbumSelected = false;
}

void AJukeboxActor::UpdatePrevCustomLapBGM() {
}

void AJukeboxActor::UnSetCustomLapBGM(int32 Lap) {
}

void AJukeboxActor::ToggleFavoriteCurrentSelected() {
}

void AJukeboxActor::SetSelectedAlbumTrackIndex() {
}

void AJukeboxActor::SetNew(bool bNew) {
}

void AJukeboxActor::SetFavorite(bool bFav) {
}

void AJukeboxActor::SetDefaultCustomLapBGM(int32 Lap) {
}

void AJukeboxActor::SetDefaultBGM(USoundAtomCue* Cue) {
}

void AJukeboxActor::SetDefaultAvailableTrackInAlbum(int32 AlbumID, bool bNew) {
}

void AJukeboxActor::SetCustomLapBGM(int32 Lap) {
}

void AJukeboxActor::SetCurrentTrackNew(bool bNew) {
}

void AJukeboxActor::SetCurrentAlbumNew(bool bNew) {
}

void AJukeboxActor::SetAvailableAlbum(int32 AlbumID, bool bNew) {
}

void AJukeboxActor::SelectTrack() {
}

void AJukeboxActor::SelectAlbum() {
}

void AJukeboxActor::SaveData() {
}

void AJukeboxActor::ResetCustomLapBGM() {
}

void AJukeboxActor::RemoveTrackIndexToFavoriteAlbum(int32 TrackIndex) {
}

void AJukeboxActor::PreFinalize() {
}

void AJukeboxActor::PlayTrackScheduled(int32 AlbumPosition, int32 TrackPosition) {
}

void AJukeboxActor::PlayTrack(int32 AlbumPosition, int32 TrackPosition) {
}

void AJukeboxActor::PlayDefaultBGM() {
}

void AJukeboxActor::PlayCurrentTrack() {
}

void AJukeboxActor::MoveUpTrack() {
}

void AJukeboxActor::MoveUpAlbum() {
}

void AJukeboxActor::MoveDownTrack() {
}

void AJukeboxActor::MoveDownAlbum() {
}

void AJukeboxActor::LoadData() {
}

void AJukeboxActor::LoadAsset() {
}

bool AJukeboxActor::IsRaceBGMFavorite() {
    return false;
}

int32 AJukeboxActor::GetTrackNumInCurrentAlbum() {
    return 0;
}

void AJukeboxActor::GetSelectedAlbumTrackInfo(ESelectedState& State, FAlbumInfo& AlbumInfo, FTrackInfo& TrackInfo, int32& AlbumID, int32& TrackID) {
}

void AJukeboxActor::GetPlayingTrackInfo(FTrackInfo& TrackInfo) {
}

bool AJukeboxActor::GetIsDirty() {
    return false;
}

FAlbumStruct AJukeboxActor::GetFavoriteAlbum() {
    return FAlbumStruct{};
}

void AJukeboxActor::GetCustomLapBGMInfo(int32 Lap, ESelectedState& State, FAlbumInfo& AlbumInfo, FTrackInfo& TrackInfo, int32& AlbumID, int32& TrackID) {
}

int32 AJukeboxActor::GetCurrentTrackPosition() {
    return 0;
}

void AJukeboxActor::GetAvailableLapInCurrentAlbum(bool& AvailableOnRace, bool& Lap12Available, bool& Lap3Available) {
}

void AJukeboxActor::GetAppearedTrackInfo(int32 Index, bool& IsExist, FTrackInfo& TrackInfo, FTrackCondition& TrackCondition, bool& IsPlaying, bool& IsRegistered) {
}

void AJukeboxActor::GetAppearedAlbumInfoList(TArray<FAlbumInfo>& AlbumInfo) {
}

void AJukeboxActor::GetAppearedAlbumInfo(int32 Index, FAlbumInfo& AlbumInfo, FAlbumCondition& AlbumCondition, bool& IsRegistered) {
}

void AJukeboxActor::GetAppearedAlbumConditionList(TArray<FAlbumCondition>& OutAlbumCondition) {
}

void AJukeboxActor::FixInvalidAssignedFavoriteAlbum() {
}

void AJukeboxActor::EraseNewMarkAlbumAndTrack(int32 AlbumIndex) {
}

bool AJukeboxActor::CurrentAlbumHasTrack() {
    return false;
}

void AJukeboxActor::AddTrackIndexToFavoriteAlbum(int32 TrackIndex) {
}


