#include "BPFL_AppInputUtil.h"

UBPFL_AppInputUtil::UBPFL_AppInputUtil() {
}

void UBPFL_AppInputUtil::UnRegisterMenuObject(int32 InPlayerIndex, UObject* MenuObject, EAppInputValid& OutputPin) {
}

bool UBPFL_AppInputUtil::IsRegisteredMenuObject(int32 InPlayerIndex, UObject* MenuObject) {
    return false;
}

AAppPlayerController* UBPFL_AppInputUtil::GetAppPlayerController(int32 ControllerId) {
    return NULL;
}


