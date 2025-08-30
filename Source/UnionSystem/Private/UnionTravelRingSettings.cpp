#include "UnionTravelRingSettings.h"

FUnionTravelRingSettings::FUnionTravelRingSettings() {
    this->TravelRingDrawOtherWorld = false;
    this->TravelRingReflectionEnvironment = false;
    this->TravelRingIndirectLightingCache = false;
    this->TravelRingVolumetricLightmap = false;
    this->TravelRingAmbientCubemap = false;
    this->TravelRingGlobalIllumination = false;
    this->TravelRingContactShadows = false;
    this->TravelRingRayTracedDistanceFieldShadows = false;
    this->TravelRingSubsurfaceScattering = false;
    this->TravelRingAtmosphere = false;
    this->TravelRingSkyLighting = false;
    this->TravelRingAmbientOcculusion = false;
    this->TravelRingLightShafts = false;
    this->TravelRingDecals = false;
    this->TravelRingFog = false;
    this->TravelRingMotionBlur = false;
    this->TravelRingPostProcessing = false;
    this->TravelRingBloom = false;
    this->TravelRingTonemapper = false;
    this->TravelRingAntiAliasing = false;
    this->TravelRingTemporalAA = false;
    this->TravelRingToneCurve = false;
    this->TravelRingScreenSpaceReflections = false;
    this->TravelRingScreenSpaceAO = false;
    this->TravelRingEyeAdaptation = false;
    this->TravelRingColorGrading = false;
    this->TravelRingFarClipDistance = 0.00f;
}

