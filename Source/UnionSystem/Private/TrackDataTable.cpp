#include "TrackDataTable.h"

FTrackDataTable::FTrackDataTable() {
    this->TrackID = 0;
    this->AlbumID = 0;
    this->SortID = 0;
    this->IsJukeboxOnly = false;
    this->AvailableLap = EAvailableLap::NONE;
    this->IsExtendContent = false;
    this->contentId = EContentId::Content01;
    this->AvailableOnAlbumUnLocked = false;
}

