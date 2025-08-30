#include "SuckedMovement.h"

USuckedMovement::USuckedMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_suckedTime = 0.20f;
    this->m_targetEndScale = 0.10f;
    this->m_enableScaleAnim = false;
    this->m_easeType = EEaseType::LinearEaseIn;
}


