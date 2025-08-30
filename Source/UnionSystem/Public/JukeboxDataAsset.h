#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AlbumData.h"
#include "TrackData.h"
#include "JukeboxDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UJukeboxDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* JukeboxAlbumCompositeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* JukeboxTrackCompositeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAlbumData> AlbumDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTrackData> TrackDataMap;
    
    UJukeboxDataAsset();

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    FTrackData GetTrackData(int32 TrackID);
    
    UFUNCTION(BlueprintCallable)
    FAlbumData GetAlbumData(int32 AlbumID);
    
    UFUNCTION(BlueprintCallable)
    void ClearData();
    
};

