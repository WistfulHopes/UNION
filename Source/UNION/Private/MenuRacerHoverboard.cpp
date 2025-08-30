#include "MenuRacerHoverboard.h"

AMenuRacerHoverboard::AMenuRacerHoverboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnitBoatStaticMeshComponents.AddDefaulted(2);
    this->UnitPlaneStaticMeshComponents.AddDefaulted(2);
}


