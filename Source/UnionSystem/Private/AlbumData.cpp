#include "AlbumData.h"

FAlbumData::FAlbumData() {
    this->AlbumID = 0;
    this->SortID = 0;
    this->IsJukeboxOnly = false;
    this->IsExtendContent = false;
    this->contentId = EContentId::Content01;
    this->DefaultAvailable = false;
}

