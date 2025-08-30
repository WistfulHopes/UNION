#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EManaComponentStatus.h"
#include "EManaPlayerTrack.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaEventPointInfo.h"
#include "OnUnionManaPlayerEventPointDelegate.h"
#include "OnUnionManaPlayerManaEventDelegate.h"
#include "OnUnionManaPlayerMovieOpenFailedDelegate.h"
#include "OnUnionManaPlayerMovieOpenedDelegate.h"
#include "OnUnionManaPlayerSubtitleChangedDelegate.h"
#include "UnionManaPlayer.generated.h"

class UAtomComponent;
class UManaMovie;
class UManaPlayer;
class UManaTexture;
class UMaterialInterface;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionManaPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerManaEvent OnEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerManaEvent OnMovieClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerMovieOpened OnMovieOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerMovieOpenFailed OnMovieOpenFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerManaEvent OnPlaybackResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerManaEvent OnPlaybackSuspended;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerManaEvent OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerManaEvent OnTracksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerSubtitleChanged OnSubtitleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionManaPlayerEventPoint OnEventPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaPlayer* _ManaPlayer;
    
public:
    UUnionManaPlayer();

private:
    UFUNCTION(BlueprintCallable)
    bool SetVolume(float Volume, EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintCallable)
    bool SetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSyncedSource(UAtomComponent* SyncedSource);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UManaTexture* InManaTexture);
    
    UFUNCTION(BlueprintCallable)
    bool SetRate(float Rate);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetMovie(FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
private:
    UFUNCTION(BlueprintCallable)
    bool SelectTrack(EManaPlayerTrack TrackType, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(FTimespan Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Reopen();
    
    UFUNCTION(BlueprintCallable)
    void PlayAndSeek();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Play();
    
private:
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeeking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasError() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerTracksChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerSubtitleChanged(FText Subtitle);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerSeekCompleted();
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerPlaybackSuspended();
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerPlaybackResumed();
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerMovieOpenFailed(const FString& FailedUrl);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerMovieOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerMovieClosed();
    
    UFUNCTION(BlueprintCallable)
    void HandleManaPlayerEventPoint(FManaEventPointInfo EventPointInfo);
    
    UFUNCTION(BlueprintCallable)
    float GetVolume(EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTrackLanguage(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTrackDisplayName(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UAtomComponent* GetTimeSyncedSource();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTime() const;
    
private:
    UFUNCTION(BlueprintCallable)
    UManaTexture* GetTexture();
    
    UFUNCTION(BlueprintCallable)
    EManaSubtitlesEncoding GetSubtitleTrackEncoding(int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EManaComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedTrack(EManaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTracks(EManaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTrackFormats(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetMovieTime() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UManaMovie* GetMovieSource() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieFrames() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetDuration() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAtomComponent* GetAtomComponent();
    
    UFUNCTION(BlueprintCallable)
    bool DisableTrack(EManaPlayerTrack TrackType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Create(UMaterialInterface* MaterialForPrime, UMaterialInterface* MaterialForVp9, UManaTexture* ManaTexture);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

