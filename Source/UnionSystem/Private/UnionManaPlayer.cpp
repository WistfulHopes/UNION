#include "UnionManaPlayer.h"

UUnionManaPlayer::UUnionManaPlayer() {
    this->_ManaPlayer = NULL;
}

bool UUnionManaPlayer::SetVolume(float Volume, EManaPlayerTrack TrackType) {
    return false;
}

bool UUnionManaPlayer::SetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex) {
    return false;
}

void UUnionManaPlayer::SetTimeSyncedSource(UAtomComponent* SyncedSource) {
}

void UUnionManaPlayer::SetTexture(UManaTexture* InManaTexture) {
}

bool UUnionManaPlayer::SetRate(float Rate) {
    return false;
}

bool UUnionManaPlayer::SetMovie(FName Name) {
    return false;
}

bool UUnionManaPlayer::SetLooping(bool Looping) {
    return false;
}

bool UUnionManaPlayer::SelectTrack(EManaPlayerTrack TrackType, int32 TrackIndex) {
    return false;
}

bool UUnionManaPlayer::Seek(FTimespan Time) {
    return false;
}

bool UUnionManaPlayer::Rewind() {
    return false;
}

bool UUnionManaPlayer::Reopen() {
    return false;
}

void UUnionManaPlayer::PlayAndSeek() {
}

bool UUnionManaPlayer::Play() {
    return false;
}

bool UUnionManaPlayer::Pause() {
    return false;
}

bool UUnionManaPlayer::IsSeeking() const {
    return false;
}

bool UUnionManaPlayer::IsReady() const {
    return false;
}

bool UUnionManaPlayer::IsPreparing() const {
    return false;
}

bool UUnionManaPlayer::IsPlaying() const {
    return false;
}

bool UUnionManaPlayer::IsPaused() const {
    return false;
}

bool UUnionManaPlayer::IsLooping() const {
    return false;
}

bool UUnionManaPlayer::IsClosed() const {
    return false;
}

bool UUnionManaPlayer::HasError() const {
    return false;
}

void UUnionManaPlayer::HandleManaPlayerTracksChanged() {
}

void UUnionManaPlayer::HandleManaPlayerSubtitleChanged(FText Subtitle) {
}

void UUnionManaPlayer::HandleManaPlayerSeekCompleted() {
}

void UUnionManaPlayer::HandleManaPlayerPlaybackSuspended() {
}

void UUnionManaPlayer::HandleManaPlayerPlaybackResumed() {
}

void UUnionManaPlayer::HandleManaPlayerMovieOpenFailed(const FString& FailedUrl) {
}

void UUnionManaPlayer::HandleManaPlayerMovieOpened(const FString& OpenedUrl) {
}

void UUnionManaPlayer::HandleManaPlayerMovieClosed() {
}

void UUnionManaPlayer::HandleManaPlayerEventPoint(FManaEventPointInfo EventPointInfo) {
}

float UUnionManaPlayer::GetVolume(EManaPlayerTrack TrackType) {
    return 0.0f;
}

FString UUnionManaPlayer::GetTrackLanguage(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return TEXT("");
}

int32 UUnionManaPlayer::GetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

FText UUnionManaPlayer::GetTrackDisplayName(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return FText::GetEmpty();
}

UAtomComponent* UUnionManaPlayer::GetTimeSyncedSource() {
    return NULL;
}

FTimespan UUnionManaPlayer::GetTime() const {
    return FTimespan{};
}

UManaTexture* UUnionManaPlayer::GetTexture() {
    return NULL;
}

EManaSubtitlesEncoding UUnionManaPlayer::GetSubtitleTrackEncoding(int32 TrackIndex) {
    return EManaSubtitlesEncoding::Default;
}

EManaComponentStatus UUnionManaPlayer::GetStatus() const {
    return EManaComponentStatus::Stop;
}

int32 UUnionManaPlayer::GetSelectedTrack(EManaPlayerTrack TrackType) const {
    return 0;
}

float UUnionManaPlayer::GetRate() const {
    return 0.0f;
}

int32 UUnionManaPlayer::GetNumTracks(EManaPlayerTrack TrackType) const {
    return 0;
}

int32 UUnionManaPlayer::GetNumTrackFormats(EManaPlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

FTimespan UUnionManaPlayer::GetMovieTime() const {
    return FTimespan{};
}

UManaMovie* UUnionManaPlayer::GetMovieSource() const {
    return NULL;
}

int32 UUnionManaPlayer::GetMovieFrames() const {
    return 0;
}

UMaterialInterface* UUnionManaPlayer::GetMaterial() {
    return NULL;
}

int32 UUnionManaPlayer::GetFrames() const {
    return 0;
}

FTimespan UUnionManaPlayer::GetDuration() const {
    return FTimespan{};
}

UAtomComponent* UUnionManaPlayer::GetAtomComponent() {
    return NULL;
}

bool UUnionManaPlayer::DisableTrack(EManaPlayerTrack TrackType) {
    return false;
}

bool UUnionManaPlayer::Create(UMaterialInterface* MaterialForPrime, UMaterialInterface* MaterialForVp9, UManaTexture* ManaTexture) {
    return false;
}

void UUnionManaPlayer::Close() {
}


