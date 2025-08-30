#include "DriverIdUtilityLibrary.h"

UDriverIdUtilityLibrary::UDriverIdUtilityLibrary() {
}

EDriverId UDriverIdUtilityLibrary::GetRivalDriverId(EDriverId InDriverId) {
    return EDriverId::Sonic;
}

EDriverId UDriverIdUtilityLibrary::GetRaceRivalDriverId(EGameModeId GameModeID, EDriverId InDriverId) {
    return EDriverId::Sonic;
}


