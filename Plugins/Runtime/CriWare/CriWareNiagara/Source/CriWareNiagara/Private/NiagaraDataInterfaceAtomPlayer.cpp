#include "NiagaraDataInterfaceAtomPlayer.h"

UNiagaraDataInterfaceAtomPlayer::UNiagaraDataInterfaceAtomPlayer() {
    this->SoundToPlay = NULL;
    this->Attenuation = NULL;
    this->Concurrency = NULL;
    this->bLimitPlaysPerTick = true;
    this->MaxPlaysPerTick = 10;
    this->bStopWhenComponentIsDestroyed = true;
    this->bAllowLoopingOneShotSounds = false;
}


