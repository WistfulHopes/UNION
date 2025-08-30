#include "ItemKingWhiteBoostObject.h"
#include "UnionAtomComponent.h"

AItemKingWhiteBoostObject::AItemKingWhiteBoostObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_maxBoostTime = 10.00f;
    this->m_IntervalTime = 0.50f;
    this->m_soundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SoundComponent"));
}


