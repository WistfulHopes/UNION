#include "OptimizedMeshEffectParams.h"

FOptimizedMeshEffectParams::FOptimizedMeshEffectParams() {
    this->Lifetime = 0.00f;
    this->ScaleCurveTable = NULL;
    this->AlphaFadeTime = 0.00f;
    this->bLerpFlipBook = false;
    this->bAnimationScale = false;
    this->bRandomRotation = false;
    this->bAlphaFade = false;
}

