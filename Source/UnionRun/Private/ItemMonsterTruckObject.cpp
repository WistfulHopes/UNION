#include "ItemMonsterTruckObject.h"

AItemMonsterTruckObject::AItemMonsterTruckObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_UpperRate = 30.00f;
    this->m_MiddleRate = 60.00f;
    this->m_UpperItemSeconds = 4.00f;
    this->m_MiddleItemSeconds = 6.00f;
    this->m_LowerItemSeconds = 8.00f;
    this->m_MinKeepSeconds = 1.00f;
    this->m_SignSeconds = 2.00f;
    this->m_OverTakeNumToForceFinish = 5;
}


