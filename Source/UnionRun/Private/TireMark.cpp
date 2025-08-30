#include "TireMark.h"

UTireMark::UTireMark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CastShadow = false;
    this->bApplyImpulseOnDamage = false;
    this->MaterialInterfaces_.AddDefaulted(1);
}

void UTireMark::SetTireMarkMaterial(UMaterialInterface* MaterialInterface) {
}

UMaterialInterface* UTireMark::GetTireMarkMaterial() {
    return NULL;
}

void UTireMark::AddPoint3D(const FVector& Position, const FVector& Normal, const FVector& Side, float Density, const FColor& Color, const FVector2D& OffsetUV) {
}


