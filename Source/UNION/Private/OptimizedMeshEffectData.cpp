#include "OptimizedMeshEffectData.h"

FOptimizedMeshEffectData::FOptimizedMeshEffectData() {
    this->EffectType = EMachineMeshEffectType::NS_Car_Muffler_ChargeLoop;
    this->Lifetime = 0.00f;
    this->ScaleCurveTable = NULL;
    this->AlphaFadeTime = 0.00f;
    this->bLerpFlipBook = false;
    this->bAnimationScale = false;
    this->bRandomRotation = false;
    this->bAlphaFade = false;
    this->StaticMesh = NULL;
    this->bMufflerEffect = false;
}

