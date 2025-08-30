#include "PlayerNameContext.h"

FPlayerNameContext::FPlayerNameContext() {
    this->Rank = 0;
    this->IsOwner = false;
    this->IsRival = false;
    this->IsCom = false;
    this->PlatformType = EAppSupportedPlatform::PC;
    this->BlockType = EBlockPlayerState::None;
}

