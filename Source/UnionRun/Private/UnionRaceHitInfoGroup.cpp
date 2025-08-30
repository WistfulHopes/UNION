#include "UnionRaceHitInfoGroup.h"

UUnionRaceHitInfoGroup::UUnionRaceHitInfoGroup() : UUserWidget(FObjectInitializer::Get()) {
    this->ActiveTimer = 2.00f;
    this->IsUIActive = false;
    this->ItemIdIndex = 0;
    this->ItemIconMaterial = NULL;
    this->ItemIconShadowMaterial = NULL;
}


void UUnionRaceHitInfoGroup::SetItemIdIndex_Impl(int32 InItemIdIndex) {
}


