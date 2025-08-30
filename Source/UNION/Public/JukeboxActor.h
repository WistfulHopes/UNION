#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "AlbumCondition.h"
#include "ESelectedState.h"
#include "TrackCondition.h"
#include "UserAlbumTrackID.h"
#include "AlbumInfo.h"
#include "AlbumStruct.h"
#include "CustomLapBGMIndex.h"
#include "TrackInfo.h"
#include "TrackStruct.h"
#include "JukeboxActor.generated.h"

class UJukeboxDataAsset;
class USoundAtomCue;
class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNION_API AJukeboxActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJukeboxLoadCompletedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJukeboxBGMStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJukeboxBGMCompleteDelegate);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJukeboxLoadCompletedDelegate OnLoadAssetCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJukeboxBGMCompleteDelegate OnBGMCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJukeboxBGMStartDelegate OnBGMStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DefaultBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserAlbumTrackID> CustomLapBGMDataAlbumTrackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomLapBGMIndex> CurrentCustomLapBGMIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomLapBGMIndex> PrevCustomLapBGMIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomLapBGMIndex SelectedAlbumTrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlbumStruct> AlbumList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackStruct> TrackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAlbumCondition> AlbumConditionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTrackCondition> TrackConditionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJukeboxDataAsset* JukeboxDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PlayTrackTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* JukeboxAtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* NextBGMCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CurrentBGMCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirty;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingAlbumPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingTrackPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAlbumPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTrackPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlbumSelected;
    
    AJukeboxActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePrevCustomLapBGM();
    
    UFUNCTION(BlueprintCallable)
    void UnSetCustomLapBGM(int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    void ToggleFavoriteCurrentSelected();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedAlbumTrackIndex();
    
    UFUNCTION(BlueprintCallable)
    void SetNew(bool bNew);
    
    UFUNCTION(BlueprintCallable)
    void SetFavorite(bool bFav);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomLapBGM(int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBGM(USoundAtomCue* Cue);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetDefaultAvailableTrackInAlbum(int32 AlbumID, bool bNew);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCustomLapBGM(int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTrackNew(bool bNew);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAlbumNew(bool bNew);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetAvailableAlbum(int32 AlbumID, bool bNew);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectTrack();
    
    UFUNCTION(BlueprintCallable)
    void SelectAlbum();
    
    UFUNCTION(BlueprintCallable)
    void SaveData();
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomLapBGM();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveTrackIndexToFavoriteAlbum(int32 TrackIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void PreFinalize();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayTrackScheduled(int32 AlbumPosition, int32 TrackPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayTrack(int32 AlbumPosition, int32 TrackPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayDefaultBGM();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayCurrentTrack();
    
    UFUNCTION(BlueprintCallable)
    void MoveUpTrack();
    
    UFUNCTION(BlueprintCallable)
    void MoveUpAlbum();
    
    UFUNCTION(BlueprintCallable)
    void MoveDownTrack();
    
    UFUNCTION(BlueprintCallable)
    void MoveDownAlbum();
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
    UFUNCTION(BlueprintCallable)
    void LoadAsset();
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsRaceBGMFavorite();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackNumInCurrentAlbum();
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedAlbumTrackInfo(ESelectedState& State, FAlbumInfo& AlbumInfo, FTrackInfo& TrackInfo, int32& AlbumID, int32& TrackID);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayingTrackInfo(FTrackInfo& TrackInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsDirty();
    
private:
    UFUNCTION(BlueprintCallable)
    FAlbumStruct GetFavoriteAlbum();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetCustomLapBGMInfo(int32 Lap, ESelectedState& State, FAlbumInfo& AlbumInfo, FTrackInfo& TrackInfo, int32& AlbumID, int32& TrackID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTrackPosition();
    
    UFUNCTION(BlueprintCallable)
    void GetAvailableLapInCurrentAlbum(bool& AvailableOnRace, bool& Lap12Available, bool& Lap3Available);
    
    UFUNCTION(BlueprintCallable)
    void GetAppearedTrackInfo(int32 Index, bool& IsExist, FTrackInfo& TrackInfo, FTrackCondition& TrackCondition, bool& IsPlaying, bool& IsRegistered);
    
    UFUNCTION(BlueprintCallable)
    void GetAppearedAlbumInfoList(TArray<FAlbumInfo>& AlbumInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetAppearedAlbumInfo(int32 Index, FAlbumInfo& AlbumInfo, FAlbumCondition& AlbumCondition, bool& IsRegistered);
    
    UFUNCTION(BlueprintCallable)
    void GetAppearedAlbumConditionList(TArray<FAlbumCondition>& OutAlbumCondition);
    
private:
    UFUNCTION(BlueprintCallable)
    void FixInvalidAssignedFavoriteAlbum();
    
    UFUNCTION(BlueprintCallable)
    void EraseNewMarkAlbumAndTrack(int32 AlbumIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CurrentAlbumHasTrack();
    
private:
    UFUNCTION(BlueprintCallable)
    void AddTrackIndexToFavoriteAlbum(int32 TrackIndex);
    
};

