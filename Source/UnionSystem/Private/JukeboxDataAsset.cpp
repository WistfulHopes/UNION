#include "JukeboxDataAsset.h"

UJukeboxDataAsset::UJukeboxDataAsset() {
    this->JukeboxAlbumCompositeDataTable = NULL;
    this->JukeboxTrackCompositeDataTable = NULL;
}

void UJukeboxDataAsset::Update() {
}

FTrackData UJukeboxDataAsset::GetTrackData(int32 TrackID) {
    return FTrackData{};
}

FAlbumData UJukeboxDataAsset::GetAlbumData(int32 AlbumID) {
    return FAlbumData{};
}

void UJukeboxDataAsset::ClearData() {
}


