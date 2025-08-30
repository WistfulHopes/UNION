#include "ItemBoxObject.h"
#include "Components/SceneComponent.h"
#include "RelocationMovement.h"
#include "StaticBodyComponent.h"

AItemBoxObject::AItemBoxObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ItemBoxType = EItemBoxType::Normal;
    this->ChangeItemBoxType = true;
    this->SpecifiedItem = EItemId::NonItem;
    this->HitVelocity = 0.00f;
    this->RelocationMovement = CreateDefaultSubobject<URelocationMovement>(TEXT("RelocationMovement"));
    this->bShadowValid = false;
    this->shadowHeightOffset = 10.00f;
    this->OffsetModelHeight = -100.00f;
    this->RelocationWaitTimeToNormal = 1.00f;
    this->RelocationWaitTimeToRankMatch = 0.25f;
    this->RelocationWaitTimeToLegendMatch = 0.25f;
    this->RelocationWaitTimeToFesta = 0.25f;
    this->RelocationWaitTimeToFriendMatch = 0.25f;
    this->RelocationWaitTimeToLocalCommunication = 0.25f;
    this->bIsAutoToggleEnable = false;
    this->AutoEnableStartTime = 0.00f;
    this->AutoDisableTime = 2.00f;
    this->AutoEnableTime = 2.00f;
    this->UseEventStart = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBodyComponent"));
    this->NiagaraEffect = NULL;
    this->m_SpecialGroup = ESpecialObjGroup::All;
    this->TimeTrialIndex = 0;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}

void AItemBoxObject::SetSpecifiedItem(EItemId Item) {
}

void AItemBoxObject::SetItemBoxType(EItemBoxType Type) {
}






ESoundPan AItemBoxObject::GetSoundPan() const {
    return ESoundPan::Left;
}


